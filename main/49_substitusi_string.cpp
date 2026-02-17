#include <iostream>
#include <string>
using namespace std;

int main(){
    // substitusi string 
    // dasar dasar fungsi nya sih
    string output1("MendingTuru"); // cuma kata kata main main :)
    string output2("GasTuru"); 
    cout << "Print awal kata 1 : " << output1 << endl;
    cout << "Print awal kata 2 : " << output2 << endl;
    // fungsi ganti kata
    output1.replace(7,4,"Lari");
    cout << "Print replace kata 1 : " << output1 << endl;
    output2.replace(output2.find("Turu"),4,"Hmph");
    cout << "Print replace kata 2 : " << output2 << endl;
    // tambah kata
    output1.insert(11," :v");
    cout << "Print tambah kata 1 : " << output1 << endl;
    // swap (ganti posisi)
    output1.swap(output2);
    cout << "Print kata 1 (kata 2) : " << output1 << endl;
    cout << "Print kata 2 (kata 1) : " << output2 << endl;

    // gitulah paham kan :)

    return 0;
}