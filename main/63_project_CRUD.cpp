#include <iostream>
#include <fstream>


using namespace std;

// agak ribet tapi ngak ngaruh :v
// latihan CRUD

struct DataAnime{
    char judul[100];
    int eps;
    float ratting;
    char status[30];
};

// cek status file external
void OpenFileCheck(fstream &, fstream &);
int OpenFileCheckList(fstream &, fstream &);
int OpenFileCheckList(fstream &);
void CekStatusDataBase(fstream &);

// Menu
void Menu(fstream &);
int MenuInput();

// read data
DataAnime ReadData(fstream &);

// write data
void WriteData(fstream &);

// edit data
void EditDataAnime(fstream &);

// delete data
void EditDataAnime(fstream &, int input);
DataAnime ReadDataDel(fstream &, int input);
void DeleteData(fstream &);


// main

int main(){
    // open file
    fstream DataAnimeFile, LogAnime;
    int TotalData = OpenFileCheckList(DataAnimeFile,LogAnime);

    DataAnimeFile.open("dataanime.bin", ios::out | ios::in | ios::binary);
    LogAnime.open("loganime.log", ios::trunc | ios::out);
    OpenFileCheck(DataAnimeFile,LogAnime); // cek file
    OpenFileCheckList(DataAnimeFile,LogAnime); // cek total data for log

    // awal
    BackToMenuPoint:
    Menu(DataAnimeFile);
    int opsi = MenuInput();
    char BackToMenu;


    // inti program
    enum { List = 1, Add, Edit, Delete, Exit};
    while (opsi != Exit){
        switch (opsi){
        case List:
            cout << "List Anime" << endl;
            ReadData(DataAnimeFile);
            break;
        case Add:
            cout << "Add Anime" << endl;
            WriteData(DataAnimeFile);
            break;
        case Edit:
            cout << "Edit Anime" << endl;
            EditDataAnime(DataAnimeFile);
            break;
        case Delete:
            cout << "Delete Anime" << endl;
            DeleteData(DataAnimeFile);
            break;
        default:
            cout << "Sepertinya ada kesalahan" << endl;
            break;
        }
        cout << "Kembali Ke Menu? (y,n) : ";
        cin >> BackToMenu;
        if (BackToMenu == 'y' | BackToMenu == 'Y'){
            goto BackToMenuPoint;
        } else {
            break;
        }
    }
    
    LogAnime.close();
    DataAnimeFile.close();
    return 0;
}

// cek status file external

void OpenFileCheck(fstream &File, fstream &log){
    if (File.is_open()){
        log << "Data Anime Di temukan" << endl;
    } else{
        log << "dataanime.bin tidak ditemukan" << endl;
        log << "Otomatis membuat yang baru" << endl;
        File.open("dataanime.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

int OpenFileCheckList(fstream &File, fstream &log){
    int start, end, logtotal;
    File.seekg(0, ios::beg);
    start = File.tellg();
    log << "start : " << start << endl;
    File.seekg(0, ios::end);
    end = File.tellg();
    log << "end : " << end << endl;
    logtotal = (end-start)/sizeof(DataAnime);
    log << "Total data : " << logtotal << endl;
    return (end-start)/sizeof(DataAnime);
}
int OpenFileCheckList(fstream &File){
    int start, end;
    File.seekg(0, ios::beg);
    start = File.tellg();
    File.seekg(0, ios::end);
    end = File.tellg();
    return (end-start)/sizeof(DataAnime);
}

void CekStatusDataBase(fstream &File){
    int cekdata = OpenFileCheckList(File);
    if (cekdata == 0){
        cout << "List Data Kosong" << endl;
        cout << "Tambahkan Data First" << endl << endl;
    }
}

// menu

void Menu(fstream &File){
    system("cls");
    CekStatusDataBase(File);
    cout << "Program List Anime" << endl;
    cout << "==================" << endl;
    cout << "1. List Anime" << endl;
    cout << "2. Add Anime" << endl;
    cout << "3. Edit Anime" << endl;
    cout << "4. Delete Anime" << endl;
    cout << "5. exit" << endl;
    cout << "==================" << endl;
    cout << "Pilih 1 - 5 : ";
}

int MenuInput(){
    int input;
    cin >> input;
    cin.ignore();
    return input;
}

// read data
DataAnime ReadData(fstream &File){
    DataAnime BufferData;
    int Total = OpenFileCheckList(File);
    cout << "No\tJudul\t\tEps\tRatting\tStatus" << endl;
    for (int i = 1; i <= Total; i++){
        File.seekp((i-1)*sizeof(DataAnime));
        File.read(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));
        cout << i << "\t";
        cout << BufferData.judul << "\t\t";
        cout << BufferData.eps << "\t";
        cout << BufferData.ratting << "\t";
        cout << BufferData.status << endl;
    }
    
}

// write data
void WriteData(fstream &File){
    DataAnime InputData;
    int TotalFile = OpenFileCheckList(File);
    TotalFile++;

    // bagian isi input data
    cout << "Masukan Judul : ";
    cin.getline(InputData.judul,sizeof(InputData.judul));
    cout << "Jumlah Eps : ";
    cin >> InputData.eps;
    cin.ignore();
    cout << "Ratting : ";
    cin >> InputData.ratting;
    cin.ignore();
    cout << "Status" << endl;
    cout << "======" << endl;
    cout << "Complete" << endl;
    cout << "Watching" << endl;
    cout << "Bakal Nonton" << endl;
    cout << "Drop" << endl;
    cout << "======" << endl;
    cout << "Silakan : ";
    cin.getline(InputData.status,sizeof(InputData.status));

    // bagian write
    File.seekp((TotalFile-1)*sizeof(DataAnime));
    File.write(reinterpret_cast<char*>(&InputData),sizeof(DataAnime));
}

// edit data
void EditDataAnime(fstream &File){
    DataAnime EditInput;
    int PosisiEdit;
    ReadData(File);
    cout << "Mau Edit Data Nomor : ";
    cin >> PosisiEdit;
    cin.ignore();
    // bagian edit
    cout << "Masukan Judul : ";
    cin.getline(EditInput.judul,sizeof(EditInput.judul));
    cout << "Jumlah Eps : ";
    cin >> EditInput.eps;
    cin.ignore();
    cout << "Ratting : ";
    cin >> EditInput.ratting;
    cin.ignore();
    cout << "Status" << endl;
    cout << "======" << endl;
    cout << "Complete" << endl;
    cout << "Watching" << endl;
    cout << "Bakal Nonton" << endl;
    cout << "Drop" << endl;
    cout << "======" << endl;
    cout << "Silakan : ";
    cin.getline(EditInput.status,sizeof(EditInput.status));

    // bagian write
    File.seekp((PosisiEdit-1)*sizeof(DataAnime));
    File.write(reinterpret_cast<char*>(&EditInput),sizeof(DataAnime));
    cout << "\nHasil Setelah Di Edit" << endl;
    cout << "=====================" << endl;
    ReadData(File);
}

// delete data

void EditDataAnime(fstream &File, int input){
    DataAnime EditInput;
    EditInput.eps = 0;
    EditInput.ratting = 0;
    // bagian write
    File.seekp((input-1)*sizeof(DataAnime));
    File.write(reinterpret_cast<char*>(&EditInput),sizeof(DataAnime));
}

DataAnime ReadDataDel(fstream &File, int input){
    DataAnime BufferData;
    int size = OpenFileCheckList(File),PosDel = 0;
    fstream TempAnime;
    EditDataAnime(File,input);
    TempAnime.open("tempanime.bin", ios::trunc | ios::out | ios::in | ios::binary);
    for (int i = 1; i <= size; i++){
        File.seekp((i-1)*sizeof(DataAnime));
        File.read(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));

        if ( (BufferData.eps == 0) & (BufferData.ratting == 0)){
            PosDel++;
        } else {
            TempAnime.seekp(((i-PosDel)-1)*sizeof(DataAnime));
            TempAnime.write(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));
        }
    }
    File.close();
    File.open("dataanime.bin", ios::trunc | ios::out | ios::in | ios::binary);
    File.close();
    File.open("dataanime.bin", ios::out | ios::in | ios::binary);
    size = OpenFileCheckList(TempAnime);
    for (int i = 1; i <= size; i++){
        TempAnime.seekp((i-1)*sizeof(DataAnime));
        TempAnime.read(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));

        File.seekp((i-1)*sizeof(DataAnime));
        File.write(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));
    }
    TempAnime.close();
}

void DeleteData(fstream &File){
    int input;
    ReadData(File);
    cout << "Delete Nomor : ";
    cin >> input;
    ReadDataDel(File,input);
    cout << "\nSetelah Di Delete" << endl;
    cout << "=================" << endl;
    ReadData(File);
}

// bisa dipahami lah :v
// yee first 300 baris :v
