#include <iostream>
using namespace std;

// array multy dimensi agak ribet tapi kagak ngaruh :v

void PrintDimensi(int *, int x, int y); // mainkan alamatnya

int main(){
    // jadi dia punya dimensi apa 2d atau 3d gw juga kagak tahu :v
    int array_multy[2][3] {1,2,3,4,5,6};
    // ini bagian print normal
    cout << "Print Normal" << endl;
    // baris 1
    cout << "[ " << array_multy[0][0] << " ]";  
    cout << "[ " << array_multy[0][1] << " ]";  
    cout << "[ " << array_multy[0][2] << " ]";
    cout << endl;  
    // baris 2
    cout << "[ " << array_multy[1][0] << " ]";
    cout << "[ " << array_multy[1][1] << " ]";
    cout << "[ " << array_multy[1][2] << " ]";
    cout << endl;

    // jadi gitulah ada baris nya bagian [2][3]
    // 2 itu baris dan 3 kolomnya paham lah :)
    // sekarang waktu print pakai void
    PrintDimensi(*array_multy,2,3);

    return 0;
}

void PrintDimensi(int *PrintDimensiArray, int x, int y){
    cout << "Print Dengan Void" << endl;
    int index = 0;
    for (int baris = 0; baris < x; baris++){
        for (int kolom = 0; kolom < y; kolom++){
            cout << "[ ";
            cout << *PrintDimensiArray + index;
            index++;
            cout << " ]";
        }
        cout << endl;   
    }
}