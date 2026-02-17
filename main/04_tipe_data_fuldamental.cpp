#include <iostream>
using namespace std;

int main(){
    // bilangan bulat
    short bilanganBulat_Short; // ya namanya juga short jadi nilainya pendek dan size memory nya kecil
    int bilanganBulat_Int; // tengah dari atas dan bawah :) 
    long bilanganBulat_long; // yang paling panjang sama aja 64 bit

    cout << "Bilangan bulat" << endl;
    // print size setiap bilangan di atas
    cout << "size short : " << sizeof(short) << " byte" << endl;
    cout << "size int   : " << sizeof(int) << " byte" << endl;
    cout << "size long  : " << sizeof(long) << " byte" << endl;
    // kasi nilai dulu 
    bilanganBulat_Short = 4;
    bilanganBulat_Int = 8;
    bilanganBulat_long = 12;

    // print bilangan
    cout << "Ibarat gini : " << bilanganBulat_Short << endl;
    cout << "Ibarat gini : " << bilanganBulat_Int << endl;
    cout << "Ibarat gini : " << bilanganBulat_long << endl;

    // note terakhir setiap itu ada limit nya jadi gitulah

    cout << endl;

    // bilangan desimal
    cout << "Bilangan desimal" << endl;
    float bilanganDesimal_float; // lebih singkat 
    double bilanganDesimal_double; // lebih pajang gitu lah pahami aja :v
    cout << "size float  : " << sizeof(float) << " byte" << endl;
    cout << "size double : " << sizeof(double) << " byte" << endl;
    bilanganDesimal_float = 1.5f; // kenapa pakai f ya gitulah
    bilanganDesimal_double = 2.5; // max limitnya lebih besar
    cout << "nilai float  : " << bilanganDesimal_float << endl;
    cout << "nilai double : "<< bilanganDesimal_double << endl;
    // mereka berdua juga memiliki size 

    cout << endl;

    // char (di awal ini cuma char 1 karakter aja dulu)
    cout << "Bagian char" << endl;
    char karakter_tunggal;
    cout << "size char : " << sizeof(char) << " byte" << endl;
    karakter_tunggal = 'A'; // cuma bisa satu karakter
    cout << "isi char : " << karakter_tunggal << endl;
    // lebih lanjut bakal ada array dan string
    
    cout << endl;

    // terakhir true we :v dan false
    cout << "Bagian true dan false" << endl;
    bool ini_belul, ini_salah;
    cout << "size : " << sizeof(bool) << " byte" << endl; 
    // contoh simple aja 
    // outputnya antara 0 dan 1 aja 
    // 0 = false
    // 1 = true
    ini_belul = true; // true = 1
    ini_salah = false; // false = 0

    cout << "Bagian true  : " << ini_belul << endl;
    cout << "Bagian false : " << ini_salah << endl;
    // gitulah pahami dengan bijak aja :v

    cout << endl;

    cout << "Akhir dari program" << endl;

    return 0;
}
