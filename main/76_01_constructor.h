#include <iostream>
#include <string>

using namespace std;

namespace Class02
{
    class Anime
    {
    public:
        // bagian data
        string judul;
        string musim_keluar;
        int tahun_rilis;
        int jumlah_eps;
        float ratting;

        Anime(string InputString, string InputMK, int year, int eps, float ratting)
        {
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
}
