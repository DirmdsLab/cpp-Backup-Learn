#include <iostream>
#include <fstream>
#include <string>

using namespace std;
// latihan tapi malah ke hafal :)

struct Anime{
    string judul;
    string musim_keluar;
    int jumlah_eps;
    float ratting;
};

// read
Anime ReadExternal(int posisi, fstream &File){
    Anime BufferData;
    File.seekp((posisi-1)*sizeof(Anime));
    File.read(reinterpret_cast<char*>(&BufferData),sizeof(Anime));
    return BufferData;
}

// write
void WriteExternal(fstream &File, Anime &input){
    File.write(reinterpret_cast<char*>(&input),sizeof(Anime));
}

// write posisi
void WriteExternalPos(int posisi, fstream &File, Anime &input){
    File.seekg((posisi-1)*sizeof(Anime));
    File.write(reinterpret_cast<char*>(&input),sizeof(Anime));
}

int main(){
    fstream AnimeFile;
    Anime kiminoturu, noturunolife, thepowerofturu; // buat write
    Anime output1, output2, output3; // buat read
    // isi data
    // bagian 1
    kiminoturu.judul = "kimi no turu";
    kiminoturu.musim_keluar = "fall";
    kiminoturu.jumlah_eps = 1;
    kiminoturu.ratting = 9.5f;
    // bagian 2
    noturunolife.judul = "no turu no life";
    noturunolife.musim_keluar = "winter";
    noturunolife.jumlah_eps = 12;
    noturunolife.ratting = 9.7f;
    // bagian 3
    thepowerofturu.judul = "the power of turu";
    thepowerofturu.musim_keluar = "summer";
    thepowerofturu.jumlah_eps = 24;
    thepowerofturu.ratting = 9.3f;
    
    // open file
    AnimeFile.open("AnimeData.bin", ios::trunc | ios::out | ios::in | ios::binary);

    // bagian write
    WriteExternal(AnimeFile,kiminoturu);
    WriteExternal(AnimeFile,noturunolife);
    WriteExternal(AnimeFile,thepowerofturu);
    // bagian write ubah sebagian
    noturunolife.jumlah_eps = 25;
    WriteExternalPos(2,AnimeFile,noturunolife);

    // bagian read 1
    output1 = ReadExternal(1,AnimeFile);
    cout << output1.judul << endl;
    cout << output1.musim_keluar << endl;
    cout << output1.jumlah_eps << endl;
    cout << output1.ratting << endl;
    cout << endl;
    // bagian read 2
    output2 = ReadExternal(2,AnimeFile);
    cout << output2.judul << endl;
    cout << output2.musim_keluar << endl;
    cout << output2.jumlah_eps << endl;
    cout << output2.ratting << endl;
    cout << endl;
    // bagian read 3
    output3 = ReadExternal(3,AnimeFile);
    cout << output3.judul << endl;
    cout << output3.musim_keluar << endl;
    cout << output3.jumlah_eps << endl;
    cout << output3.ratting << endl;
    cout << endl;

    // closing file
    AnimeFile.close(); 
    return 0;
}


// sedikit sejarah tentang ini (sejarah pribadi)
// malah hafal
// dah itu aja :v