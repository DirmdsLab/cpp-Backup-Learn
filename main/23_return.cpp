#include <iostream>
using namespace std;

// fungsinya di luar fungsi main
// penjelasan lebih rinci emang harus baca artikel atau video

int pangkat(int x){ // namanya bebas dan (int bisa seperti pakai biasa)
    x = x * x; // rumus biasa
    return x; // return bakal mengembalikan nilai ke pangkat
}




int main(){
    // return fungsi
    // ada dari awal tapi tidak tahu fumgsinya :v
    // dan fungsimya ya return (bisa paham lah) returnt masuk ke main

    int input;

    cout << "Program pemangkatan" << endl;
    cout << "Masukan angka : ";
    cin >> input;
    // pangsing funsi nya 
    cout << "Hasil : " << pangkat(input) << endl;
    // gitulah
    
    return 0;
}