#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    cout << "Masukan input string : ";
    getline(cin,input); // fungsi utama di season kali ini :v
    cout << "Hasil input : ";
    cout << input << endl;

    // hitung jumlah kalimat
    int jumlah, posisi;
    jumlah = 0;
    posisi = 0;
    while (true){
        posisi = input.find(" ", posisi + jumlah);
        jumlah++;
        if (posisi < 0){
            break;
        }
    }
    cout << "Jadi jumlah kalimat : " << jumlah << endl;

    // overral bisa paham lah :)

    return 0;
}