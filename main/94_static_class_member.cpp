#include <iostream>
#include <string>
 

using namespace std;

class Anime{
private:
    string Judul;
    int Eps;
public:
    static int JumlahAnime;
    Anime(const char*,int);
    void PrintData();
    ~Anime();
};

Anime::Anime(const char* InputJudul, int InputEps){
    this->Judul = InputJudul;
    this->Eps = InputEps;
    JumlahAnime++;
}

Anime::~Anime(){
    JumlahAnime--;
    cout << this->Judul << " Telah di hapus" << endl;
}

void Anime::PrintData(){
    cout << "Judul : " << this->Judul << endl;
    cout << "Eps   : " << this->Eps << endl;
}

int Anime::JumlahAnime = 0;

int main(int argc, char const *argv[]){
    Anime Anime1("kimi no turu",12);
    Anime1.PrintData();
    cout << "Total Data   : " << Anime1.JumlahAnime << endl;
    cout << "Total Data   : " << Anime::JumlahAnime << endl;

    cout << endl;

    Anime* Anime2 = new Anime("No Turu No Life",23);
    Anime2->PrintData();
    cout << "Total Data   : " << Anime2->JumlahAnime << endl;
    cout << "Total Data   : " << Anime::JumlahAnime << endl;
    cout << endl;
    delete Anime2;

    cout << endl;
    Anime* Anime3 = new Anime("The Power Of Turu",24);
    (*Anime3).PrintData();
    cout << "Total Data   : " << Anime3->JumlahAnime << endl;
    cout << "Total Data   : " << Anime::JumlahAnime << endl;
    cout << endl;
    delete Anime3;
    
    return 0;
}

// Selesai juga dasar nya 
// 04-7 -> 03-9
// agak lambat sih tapi ngak ngaruh :v
// referensi video di kelas terbuka youtube dan w3 school udah kelar semuanya (terakhir update segini)
// walau ada modifikasi sih tergantung saya soal yang buat :v canda
// saatnya lanjut
// bisa di pahami lah :)
