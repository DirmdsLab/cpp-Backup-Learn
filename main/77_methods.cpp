#include <iostream>
#include <string>

using namespace std;

class Anime
{
    string judul;
    int jumlah_eps;

    public:
        Anime(string InputJudul, int Eps){
            Anime::judul = InputJudul;
            Anime::jumlah_eps = Eps;
        }
        // methods
        // tanpa parameter dan tanpa return (kaku bet)
        void PrintDataAnime(){
            cout << judul << endl;
            cout << jumlah_eps << endl;
        }

        // pakai parameter dan tanpa return
        void UpdateJudul(string InputJudul){
            judul = InputJudul;
        }

        // tidak pakai parameter tapi return
        int KuadratJumlahEps(){
            return jumlah_eps*jumlah_eps;
        }

        // pakai semua
        int UbahEps(int UpdateEps){
            Anime::jumlah_eps = UpdateEps;
            return jumlah_eps;
        }


};

int main(){
     Anime Data1("kimi no turu", 12);

     cout << "Bagian 1 (Print)\n"; 
     Data1.PrintDataAnime();

     cout << endl;

     cout << "Bagian 2 (UpdateJudul)\n";
     Data1.UpdateJudul("no turu no life");
     Data1.PrintDataAnime();
    
     cout << endl;

     cout << "Bagian 3 (kuadrat jumlah eps :v)\n";
     Data1.PrintDataAnime();
     cout << Data1.KuadratJumlahEps() << endl;
     
     cout << endl;

     cout << "Bagian 4 (UpdateEps)\n";
     cout << Data1.UbahEps(24);
     
     // bisa di pahamilah

    return 0;
}