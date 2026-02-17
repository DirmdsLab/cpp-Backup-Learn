#include <iostream>
using namespace std;

int main(){
    // simtemnya tambah tambah atau sejenis dengan ini
    // tapi lebih simple
    int output1 = 10;
    cout << "Output dasar : " << output1 << endl;
    // jadi 10 itu bisa di tambahkan
    output1 += 5;
    cout << "Hasil output setelah di tambahkan 5 : " << output1 << endl;
    // ini juga bisa berlaku untuk semua opsi

    output1 = 10; // buat reset ke sepuluh
    output1 -= 5;
    cout << "Hasil output setelah di dikurangkan 5 : " << output1 << endl;

    output1 = 10; // buat reset ke sepuluh
    output1 *= 5;
    cout << "Hasil output setelah di dikali 5 : " << output1 << endl;

    output1 = 10; // buat reset ke sepuluh
    output1 /= 5;
    cout << "Hasil output setelah di bagi 5 : " << output1 << endl;
    
    cout << "Untuk modulus saya reset ke 11" << endl;
    output1 = 11; // buat reset ke sepuluh
    output1 %= 5;
    cout << "Hasil output setelah di modulus 5 : " << output1 << endl;

    // gitulah
    return 0;
}
