#include <iostream>
#include <array>
using namespace std;

int main(){
    // gitulah
    array<int, 5> nilai = {1,2,3,4,5};
    for (int i = 0; i < nilai.size(); i++){ // itu buat ambil nilai size array
        cout << "Nilai " << i << " : " << nilai[i] << endl; 
    }
    cout << "jumlah anggota Dari nilai : " << nilai.size() << endl;
    // cara input array juga bisa pakai for
    cout << endl;
    array<int, 10> nilai_auto;
    for (int i = 0; i < nilai_auto.size(); i++){
        nilai_auto[i] = i+1;
    }
    // gitulah cara ambil nilai
    cout << "Nilai auto ke 7 : " << nilai_auto[(7-1)] << endl;
    cout << "Cara lain ambil nilai auto 7 : " << nilai_auto.at((7-1)) << endl;
    // hitung jumlah anggota yang di anggap
    return 0;
}