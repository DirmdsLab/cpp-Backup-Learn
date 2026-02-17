#include <iostream>
using namespace std;

// wellcome to array 
// simple nya itu alamat memory nya urut

int main(){
    // kalau 5 jadi bakal mulai dari 0
    int nilai[5] = {1,2,3,4,5};  // cara memberi nilai seperti itu
    // 0,1,2,3,4 jadi jumlahnya 5 bukan
    cout << "Nilai sebelum di ubah" << endl;
    cout << "Nilai dari Nilai[0] : " << nilai[0] << endl;
    cout << "Nilai dari Nilai[1] : " << nilai[1] << endl;
    cout << "Nilai dari Nilai[2] : " << nilai[2] << endl;
    cout << "Nilai dari Nilai[3] : " << nilai[3] << endl;
    cout << "Nilai dari Nilai[4] : " << nilai[4] << endl;
   
    cout << endl;

    // cara pemberian nilainya atau mengganti
    nilai[0] = 10;
    nilai[1] = 22;
    nilai[2] = 30;
    nilai[3] = 40;
    nilai[4] = 50;

    cout << "Nilai sesudah di ubah" << endl;
    cout << "Nilai dari Nilai[0] : " << nilai[0] << endl;
    cout << "Nilai dari Nilai[1] : " << nilai[1] << endl;
    cout << "Nilai dari Nilai[2] : " << nilai[2] << endl;
    cout << "Nilai dari Nilai[3] : " << nilai[3] << endl;
    cout << "Nilai dari Nilai[4] : " << nilai[4] << endl;
    cout << endl;
    // alamat memory array urut
    cout << "Nilai sebelum di ubah dan alamat" << endl;
    cout << "Nilai dari Nilai[0] : " << nilai[0] << " Alamat : " << &nilai[0] << endl;
    cout << "Nilai dari Nilai[1] : " << nilai[1] << " Alamat : " << &nilai[1] << endl;
    cout << "Nilai dari Nilai[2] : " << nilai[2] << " Alamat : " << &nilai[2] << endl;
    cout << "Nilai dari Nilai[3] : " << nilai[3] << " Alamat : " << &nilai[3] << endl;
    cout << "Nilai dari Nilai[4] : " << nilai[4] << " Alamat : " << &nilai[4] << endl;
    cout << endl;
    cout << "Nilai sesudah di ubah dan alamat" << endl;
    cout << "Nilai dari Nilai[0] : " << nilai[0] << " Alamat : " << &nilai[0] << endl;
    cout << "Nilai dari Nilai[1] : " << nilai[1] << " Alamat : " << &nilai[1] << endl;
    cout << "Nilai dari Nilai[2] : " << nilai[2] << " Alamat : " << &nilai[2] << endl;
    cout << "Nilai dari Nilai[3] : " << nilai[3] << " Alamat : " << &nilai[3] << endl;
    cout << "Nilai dari Nilai[4] : " << nilai[4] << " Alamat : " << &nilai[4] << endl;

    return 0;
}