#include <iostream>
#include <string>
using namespace std;

// jado intinya struct dalam struct :)
// struct 1
struct studio{
    string Nama_Studio;
    string Nama_Ceo;
    string Nama_Pendiri;
    int Tahun_Berdiri;
    float reputasi;
};

// struct 2
struct Anime{
    string Nama_Anime;
    string Musim_keluar;
    int Tahun_rilis;
    int Jumlah_Eps;
    float ratting;
    studio namastudio;
    studio reputasi_studio;
};



int main(){
    // isi data diri studio
    studio TuruLab;
    TuruLab.Nama_Studio = ("TuruLab");
    TuruLab.Nama_Ceo = ("LordTuru");
    TuruLab.Nama_Pendiri = ("TheLegendOfTuru");
    TuruLab.Tahun_Berdiri = 1859;
    TuruLab.reputasi = 4.7f;

    // dan bagian anime
    Anime kiminoturu;
    kiminoturu.Nama_Anime = ("Kimi No Turu");
    kiminoturu.Musim_keluar = ("Winter");
    kiminoturu.Tahun_rilis = 2020;
    kiminoturu.Jumlah_Eps = 12;
    kiminoturu.ratting = 9.5f;
    kiminoturu.namastudio = TuruLab;
    kiminoturu.reputasi_studio = TuruLab;

    // Waktunya Bagian Print
    cout << "Nama Anime      : " << kiminoturu.Nama_Anime << endl;
    cout << "Musim Keluar    : " << kiminoturu.Musim_keluar << endl;
    cout << "Tahun Rilis     : " << kiminoturu.Tahun_rilis << endl;
    cout << "Jumlah Eps      : " << kiminoturu.Jumlah_Eps << endl;
    cout << "Ratting         : " << kiminoturu.ratting << " / 10" << endl;
    // disi letak bedanya
    cout << "Nama Studio     : " << kiminoturu.namastudio.Nama_Studio << endl;
    cout << "Reputasi Studio : " << kiminoturu.reputasi_studio.reputasi << " / 5" << endl;

    return 0;
}