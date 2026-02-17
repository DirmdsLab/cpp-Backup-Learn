#include <iostream>
#include <string>

using namespace std;

class Anime{ // ini class
    public:
    string judul;
    string musim_rilis;
    int tahun_rilis;
};


int main(){
    Anime Data1, Data2; // ini object

    // data 1
    Data1.judul = "Kimi no turu";
    Data1.musim_rilis = "Fall";
    Data1.tahun_rilis = 2020;
    // print data 1
    cout << "Judul : " << Data1.judul << endl;
    cout << "Musim : " << Data1.musim_rilis << endl;
    cout << "Rilis : " << Data1.tahun_rilis << endl;

    cout << endl;
    // Data 2
    Data2.judul = "No Turu No Life";
    Data2.musim_rilis = "Winter";
    Data2.tahun_rilis = 2021;
    // print data 2
    cout << "Judul : " << Data2.judul << endl;
    cout << "Musim : " << Data2.musim_rilis << endl;
    cout << "Rilis : " << Data2.tahun_rilis << endl;
    


    return 0;
}
