#include <iostream>
#include <string>
using namespace std;

// string mirip char tapi support lebih banyak karakter

int main(){
    // contoh saya input manual di code
    string input_manual ("Mending Turu");
    cout << "Input manual di code" << endl;
    cout << input_manual << endl;
    // input oleh user
    string input_user;
    cout << "Silakan masukan kata (tanpa spasi) : ";
    cin >> input_user;
    cout << "Hasilnya : " << "\n" << input_user << endl;
    // bisa di pahami lah :)
    return 0;
}