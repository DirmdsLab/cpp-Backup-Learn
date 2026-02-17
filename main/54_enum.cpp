#include <iostream>
using namespace std;

// mempermudah dalam mengelompokkan data sih
// hitungnya mulai dari 0
// contoh di bawah merah, hijau dan biru jadi urutannya 0,1,2

enum DataWarna {
    Merah, Hijau, Biru
};

int main(){
    // cuma contoh
    DataWarna FanColor;
    FanColor = Merah;
    cout << "Output1 : " << FanColor << endl;
    FanColor = Hijau;
    cout << "Output2 : " << FanColor << endl;
    FanColor = Biru;
    cout << "Output3 : " << FanColor << endl;

    // untuk lebih rinci nanti di project ya :)

    return 0;
}