#include <iostream>
#include <string>

using namespace std;

// alamat memory dan sizenya
// gitulah :v

class LahKokKosong{
    // lah hilang :v
};

class Berisi{
    public:
    string Nama; // string size nya 24 byte
    int tahun_lahir; // int 4 byte
};

class SebagaiFigur{
    public:
    string Data;
    SebagaiFigur(){
        // cuma jadi figur :)
    }
};

int main(int argc, char const *argv[]){

    // bagian 1
    LahKokKosong Data1;
    Berisi Data2;
    // 2 kelas ada sizenya
    cout << "Size kelas kosong : " << sizeof(Data1) << endl; // kalau kosong ambil 1 byte
    cout << "Size kelas berisi : " << sizeof(Data2) << endl; // jadi output nya 24 + 4 = 28 byte
    cout << endl;

    // bagian 2
    string npc1;
    string npc2;
    string npc3;

    cout << "Alamat memory dari npc1   : " << &npc1 << endl;
    cout << "Alamat memory dari npc2   : " << &npc2 << endl;
    cout << "Alamat memory dari npc3   : " << &npc3 << endl;
    cout << endl;
    // memory rada mirip mirip kan alamat nya
    // beda kalau di heap penjelasan heap ada di bawah

    // bagian 3 penulisan di stack memory dan heap memory
    SebagaiFigur Figur1(); // ini stack memory
    SebagaiFigur* Figur2 = new SebagaiFigur(); // ini di heap memory

    
    // agak keliru tapi ngak ngaruh :v
    // dasarnya gitu
    // jadi lebih cepat buat di stack memory
    // cari aja penjelasan di internet
    // saya di masa depan baca ini mungkin teknologi search engine udah lebih canggih
    // jadi gitulah

    return 0;
}
