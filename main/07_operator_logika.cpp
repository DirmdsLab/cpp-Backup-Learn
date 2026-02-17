#include <iostream>
using namespace std;

int main(){
    int perbandingan1, perbandingan2;
    // btw saya bakal pakai cara langsung aja :) lama belok belok :v
    perbandingan1 = 1;
    perbandingan2 = 2;
    cout << "Tidak (not)1 : " << !(perbandingan1 == perbandingan2) << endl;
    cout << "Tidak (not)2 : " << !(perbandingan1 == 1) << endl;
    // hampir sama dengan materi komparasi

    cout << endl;

    // bagian or atau ||
    // or juga bakal memberi output 1 dan 0
    // tapi kalau or misal 1 aja yang true hasilnya bakal true
    cout << "or_1 : " << ((perbandingan1 == 1) || (perbandingan2 = 2)) << endl; // bisa juga pakai (or)
    cout << "or_1 : " << ((perbandingan1 == 1) || (perbandingan2 = 5)) << endl;
    
    cout << endl;
    
    // bagian and atau &&
    // kalau salah satu false bakal false 
    cout << "dan_1 : " << ((perbandingan1 == 1) && (perbandingan2 == 2)) << endl; // bisa juga pakai (and)
    cout << "dan_2 : " << ((perbandingan1 == 1) && (perbandingan2 == 5)) << endl;

    cout << endl;

    return 0;
}
