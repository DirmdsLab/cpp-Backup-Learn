#include <iostream>
#include <string>

using namespace std;

class Anime{
    public:
        // bagian data
        string judul;
        string musim_keluar;
        int tahun_rilis;
        int jumlah_eps;
        float ratting;

        // materi hari ini
        Anime(string InputString, string InputMK, int year, int eps, float ratting){

            // bagian input
            Anime::judul = InputString;
            Anime::musim_keluar = InputMK;
            Anime::tahun_rilis = year;
            Anime::jumlah_eps = eps;
            Anime::ratting = ratting;

            // bagian print
            cout << Anime::judul << endl;
            cout << Anime::musim_keluar << endl;
            cout << Anime::tahun_rilis << endl;
            cout << Anime::jumlah_eps << endl;
            cout << Anime::ratting << endl;
        }
};



int main(){
    // main nya jadi sangat simple bukan :)
    Anime Data1("Kimi No Turu","Fall",2020,24,9.5);
    cout << endl;
    Anime Data2("No Turu No Life","Winter",2022,13,9.3);
    return 0;
}