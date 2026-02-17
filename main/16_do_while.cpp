#include <iostream>
using namespace std;

int main(){
    int output;
    output = 0;
    // sama seperti while di materi kemeren
    // tapi sekarang program pasti di exsekusi 1 kali
    // karena syarat pengulangan terletak di akhir

    do{
        output++; // jadi di terminal pasti output sudah berubah jadi 1
        cout << "Pengulangan ke : " << output << endl;
    } while (output < 5);
    
    return 0;
}