#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << "Nilai dasar a" << endl;
    cout << "Nilai a  : " << a << endl;
    cout << "Alamat a : " << &a << endl;
    cout << endl;
    // jadi lebih bersih dari pada pointer
    int &b = a;
    cout << "Nilai dasar b" << endl;
    cout << "Nilai b  : " << b << endl;
    cout << "Alamat b : " << &b << endl;
    cout << endl;
    // kalau nilai a diganti b bakal ganti juga
    a = 5;
    cout << "Nilai dasar b setelah a di ganti" << endl;
    cout << "Nilai b  : " << b << endl;
    cout << "Alamat b : " << &b << endl;
    cout << endl;
    // dan efeknya kalau nilai b di ganti a juga ngikut
    b = 1;
    cout << "Nilai dasar a setelah b di ganti" << endl;
    cout << "Nilai a  : " << a << endl;
    cout << "Alamat a : " << &a << endl;
    cout << endl;
    // gitulah bisa di pahamilah :)
    cout << "Untuk pengantian nilai lihat di program ya :)" << endl;
    return 0;
}