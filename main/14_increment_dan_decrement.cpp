#include <iostream>
using namespace std;

int main(){
    int output;
    output = 5;
    // fitur baru :v output++
    cout << "Sebelum : " << output << endl;
    output++;
    cout << "Sesudah : " << output << endl;
    // fungsi nya mungkin di loop (materi ke depan)

    cout << endl;

    output = 5; // cuma reset output
    cout << "Sebelum : " << output << endl;
    ++output;
    cout << "Sesudah : " << output << endl;
    // ya ++ di depan atau di belakang logika exsekusi aja
    // dan juga berlaku untuk (--)

    cout << endl;

    // contoh langsung dengan cout
    output = 5;
    cout << "Nilai output : " << output << endl;
    cout << "Yang ini ++ nya sebelum output : " << ++output << endl;
    output = 5;
    cout << "Yang ini ++ sesudah output : " << output++ << endl;
    // jadi hasilnya sesuai yang di terminal :v 
    
    return 0;
}