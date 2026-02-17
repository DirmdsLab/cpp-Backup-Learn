#include <iostream>
using namespace std;

// tambahan dikit untuk pembukaan array

int main(){
    int nilai[5] = {1,2,3,4,5};
    int *nilai_ptr = nullptr;
    cout << "Nilai dari Nilai[0] : " << nilai[0] << " Alamat : " << &nilai[0] << endl;
    cout << "Nilai dari Nilai[1] : " << nilai[1] << " Alamat : " << &nilai[1] << endl;
    cout << "Nilai dari Nilai[2] : " << nilai[2] << " Alamat : " << &nilai[2] << endl;
    cout << "Nilai dari Nilai[3] : " << nilai[3] << " Alamat : " << &nilai[3] << endl;
    cout << "Nilai dari Nilai[4] : " << nilai[4] << " Alamat : " << &nilai[4] << endl;
    cout << endl;
    nilai_ptr = nilai;
    *(nilai_ptr + 4) = 8; // main main alamat memory gini
    cout << "Nilai dari Nilai[0] : " << nilai[0] << " Alamat : " << &nilai[0] << endl;
    cout << "Nilai dari Nilai[1] : " << nilai[1] << " Alamat : " << &nilai[1] << endl;
    cout << "Nilai dari Nilai[2] : " << nilai[2] << " Alamat : " << &nilai[2] << endl;
    cout << "Nilai dari Nilai[3] : " << nilai[3] << " Alamat : " << &nilai[3] << endl;
    cout << "Nilai dari Nilai[4] : " << nilai[4] << " Alamat : " << &nilai[4] << endl;
    return 0;
}