#include <iostream>
#include <string>
using namespace std;

// struct (kek buat fungsi sendiri lah)
struct Anime{
    string Nama_anime;
    string Musim_keluar;
    string Nama_studio;
    int Jumlah_eps;
    float ratting;
};


int main(){
    Anime Kimi_no_na_wa;
    Kimi_no_na_wa.Nama_anime = "Kimi no na wa";
    Kimi_no_na_wa.Musim_keluar = "Udah lupa :v";
    Kimi_no_na_wa.Nama_studio = "Kagak tahu juga :)";
    Kimi_no_na_wa.Jumlah_eps = 1;
    Kimi_no_na_wa.ratting = 8.5f;

    // seperti itu lah kira kira
    // waktunya print

    cout << "Nama anime   : " << Kimi_no_na_wa.Nama_anime << endl;
    cout << "Musim keluar : " << Kimi_no_na_wa.Musim_keluar << endl;
    cout << "Nama Studio  : " << Kimi_no_na_wa.Nama_studio << endl;
    cout << "Jumlah eps   : " << Kimi_no_na_wa.Jumlah_eps << endl;
    cout << "ratting      : " << Kimi_no_na_wa.ratting << " / 10" << endl;

    // gitulah
    return 0;
}