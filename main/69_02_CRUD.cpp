#include <iostream>
#include <fstream>
#include "69_01_CRUD.h"

// cek status file external

void isekai::OpenFileCheck(std::fstream &File, std::fstream &log){
    if (File.is_open()){
        log << "Data Anime Di temukan" << std::endl;
    } else{
        log << "dataanime.bin tidak ditemukan" << std::endl;
        log << "Otomatis membuat yang baru" << std::endl;
        File.open("dataanime.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    }
}

int isekai::OpenFileCheckList(std::fstream &File, std::fstream &log){
    int start, end, logtotal;
    File.seekg(0, std::ios::beg);
    start = File.tellg();
    log << "start : " << start << std::endl;
    File.seekg(0, std::ios::end);
    end = File.tellg();
    log << "end : " << end << std::endl;
    logtotal = (end-start)/sizeof(DataAnime);
    log << "Total data : " << logtotal << std::endl;
    return (end-start)/sizeof(DataAnime);
}
int isekai::OpenFileCheckList(std::fstream &File){
    int start, end;
    File.seekg(0, std::ios::beg);
    start = File.tellg();
    File.seekg(0, std::ios::end);
    end = File.tellg();
    return (end-start)/sizeof(DataAnime);
}

void isekai::CekStatusDataBase(std::fstream &File){
    int cekdata = OpenFileCheckList(File);
    if (cekdata == 0){
        std::cout << "List Data Kosong" << std::endl;
        std::cout << "Tambahkan Data First" << std::endl << std::endl;
    }
}

// menu

void isekai::Menu(std::fstream &File){
    system("cls");
    CekStatusDataBase(File);
    std::cout << "Program List Anime" << std::endl;
    std::cout << "==================" << std::endl;
    std::cout << "1. List Anime" << std::endl;
    std::cout << "2. Add Anime" << std::endl;
    std::cout << "3. Edit Anime" << std::endl;
    std::cout << "4. Delete Anime" << std::endl;
    std::cout << "5. exit" << std::endl;
    std::cout << "==================" << std::endl;
    std::cout << "Pilih 1 - 5 : ";
}

int isekai::MenuInput(){
    int input;
    std::cin >> input;
    std::cin.ignore();
    return input;
}

// read data
isekai::DataAnime isekai::ReadData(std::fstream &File){
    DataAnime BufferData;
    int Total = OpenFileCheckList(File);
    std::cout << "No\tJudul\t\tEps\tRatting\tStatus" << std::endl;
    for (int i = 1; i <= Total; i++){
        File.seekp((i-1)*sizeof(DataAnime));
        File.read(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));
        std::cout << i << "\t";
        std::cout << BufferData.judul << "\t\t";
        std::cout << BufferData.eps << "\t";
        std::cout << BufferData.ratting << "\t";
        std::cout << BufferData.status << std::endl;
    }
    
}

// write data
void isekai::WriteData(std::fstream &File){
    DataAnime InputData;
    int TotalFile = OpenFileCheckList(File);
    TotalFile++;

    // bagian isi input data
    std::cout << "Masukan Judul : ";
    std::cin.getline(InputData.judul,sizeof(InputData.judul));
    std::cout << "Jumlah Eps : ";
    std::cin >> InputData.eps;
    std::cin.ignore();
    std::cout << "Ratting : ";
    std::cin >> InputData.ratting;
    std::cin.ignore();
    std::cout << "Status" << std::endl;
    std::cout << "======" << std::endl;
    std::cout << "Complete" << std::endl;
    std::cout << "Watching" << std::endl;
    std::cout << "Bakal Nonton" << std::endl;
    std::cout << "Drop" << std::endl;
    std::cout << "======" << std::endl;
    std::cout << "Silakan : ";
    std::cin.getline(InputData.status,sizeof(InputData.status));

    // bagian write
    File.seekp((TotalFile-1)*sizeof(DataAnime));
    File.write(reinterpret_cast<char*>(&InputData),sizeof(DataAnime));
}

// edit data
void isekai::EditDataAnime(std::fstream &File){
    DataAnime EditInput;
    int PosisiEdit;
    ReadData(File);
    std::cout << "Mau Edit Data Nomor : ";
    std::cin >> PosisiEdit;
    std::cin.ignore();
    // bagian edit
    std::cout << "Masukan Judul : ";
    std::cin.getline(EditInput.judul,sizeof(EditInput.judul));
    std::cout << "Jumlah Eps : ";
    std::cin >> EditInput.eps;
    std::cin.ignore();
    std::cout << "Ratting : ";
    std::cin >> EditInput.ratting;
    std::cin.ignore();
    std::cout << "Status" << std::endl;
    std::cout << "======" << std::endl;
    std::cout << "Complete" << std::endl;
    std::cout << "Watching" << std::endl;
    std::cout << "Bakal Nonton" << std::endl;
    std::cout << "Drop" << std::endl;
    std::cout << "======" << std::endl;
    std::cout << "Silakan : ";
    std::cin.getline(EditInput.status,sizeof(EditInput.status));

    // bagian write
    File.seekp((PosisiEdit-1)*sizeof(DataAnime));
    File.write(reinterpret_cast<char*>(&EditInput),sizeof(DataAnime));
    std::cout << "\nHasil Setelah Di Edit" << std::endl;
    std::cout << "=====================" << std::endl;
    ReadData(File);
}

// delete data

void isekai::EditDataAnime(std::fstream &File, int input){
    DataAnime EditInput;
    EditInput.eps = 0;
    EditInput.ratting = 0;
    // bagian write
    File.seekp((input-1)*sizeof(DataAnime));
    File.write(reinterpret_cast<char*>(&EditInput),sizeof(DataAnime));
}

isekai::DataAnime isekai::ReadDataDel(std::fstream &File, int input){
    DataAnime BufferData;
    int size = OpenFileCheckList(File),PosDel = 0;
    std::fstream TempAnime;
    EditDataAnime(File,input);
    TempAnime.open("tempanime.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
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
    File.open("dataanime.bin", std::ios::trunc | std::ios::out | std::ios::in | std::ios::binary);
    File.close();
    File.open("dataanime.bin", std::ios::out | std::ios::in | std::ios::binary);
    size = OpenFileCheckList(TempAnime);
    for (int i = 1; i <= size; i++){
        TempAnime.seekp((i-1)*sizeof(DataAnime));
        TempAnime.read(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));

        File.seekp((i-1)*sizeof(DataAnime));
        File.write(reinterpret_cast<char*>(&BufferData),sizeof(DataAnime));
    }
    TempAnime.close();
}

void isekai::DeleteData(std::fstream &File){
    int input;
    ReadData(File);
    std::cout << "Delete Nomor : ";
    std::cin >> input;
    ReadDataDel(File,input);
    std::cout << "\nSetelah Di Delete" << std::endl;
    std::cout << "=================" << std::endl;
    ReadData(File);
}