#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

// menguratkan array ya kek gini misal 5,1,6,2, bakal jadi 1,2,5,6
// simple bukan :)

const size_t ArraySize = 10; // jadi pakai size buat dasar nya (size_t cari aja google atau chatGPT)


void Print_Number(array<int,ArraySize>&);
void Print_Char(array<char,ArraySize>&);


int main(){
    array<int,ArraySize> Array_Number = {5,6,2,4,9,3,1,7,0,8};
    array<char,ArraySize> Array_Char = {'e','i','j','a','f','g','b','c','d','h'};
    // bagian number
    cout << "Sebelum di urut" << endl;
    Print_Number(Array_Number);
    Print_Char(Array_Char);
    // Proses pengurutan
    sort(Array_Number.begin(),Array_Number.end());
    sort(Array_Char.begin(),Array_Char.end());
    // Print
    cout << "Sesudah di urut" << endl;
    Print_Number(Array_Number);
    Print_Char(Array_Char);
    // semoga bisa paham saya di masa depan :)
    // bisa lah kan :v
    return 0;
}

void Print_Number(array<int,ArraySize>&input){
    cout << "Hasilnya : ";
    for (int &output : input){
        cout << output << " ";
    }
    cout << endl;
}
void Print_Char(array<char,ArraySize>&input){
    cout << "Hasilnya : ";
    for (char &output : input){
        cout << output << " ";
    }
    cout << endl;
}