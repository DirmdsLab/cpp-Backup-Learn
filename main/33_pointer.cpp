#include <iostream>
using namespace std;

// waw waktu nya main addres memory :)

int main(){
    int a = 10;
    cout << "Nilai a  : " << a << endl;
    cout << "Alamat a : " << &a << endl;

    cout << endl;
    // jadi bakal ambil nilai dari a di atas dan menulis di alamat yang sama
    int *a_ptr = nullptr;
    a_ptr = &a;
    cout << "Nilai a ptr  : " << *a_ptr << endl;
    cout << "Alamat a ptr : " << a_ptr << endl;
    // kalau nilai a di rubah nilai a ptr bakal ngikut berubah soal satu alamat
    cout << endl;
    a = 5;
    cout << "Nilai a ptr setelah a di rubah  : " << *a_ptr << endl;
    cout << "Alamat a ptr setelah a di rubah : " << a_ptr << endl;
    return 0;
}