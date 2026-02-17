#include <iostream>
#include <array>
using namespace std;

// multy dimensi tapi pakai standar lib 
// tambah ribet tapi kagak ngaruh :v

void PrintArrayDimensi(array<array<int,3>,2> input);

int main(){
    array<array<int,3>,2> Multy_array = {1,2,3,4,5,6};
    cout << "Print Normal" << endl;
    cout << "[ " << Multy_array[0][0] << " ]";
    cout << "[ " << Multy_array[0][1] << " ]";
    cout << "[ " << Multy_array[0][2] << " ]";
    cout << endl;
    cout << "[ " << Multy_array[1][0] << " ]";
    cout << "[ " << Multy_array[1][1] << " ]";
    cout << "[ " << Multy_array[1][2] << " ]";
    cout << endl;
    // bagian void
    PrintArrayDimensi(Multy_array);
    return 0;
}

void PrintArrayDimensi(array<array<int,3>,2> input){
    cout << "Print Dengan Void" << endl;
    for (int baris = 0; baris < 2; baris++){
        for (int kolom = 0; kolom < 3; kolom++){
            cout << "[ ";
            cout << input[baris][kolom];
            cout << " ]";
        }
        cout << endl;  
    }
}