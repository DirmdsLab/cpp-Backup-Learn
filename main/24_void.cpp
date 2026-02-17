#include <iostream>
using namespace std;

// sama seperti return fungsinya di luar int main
// buat return dulu supaya nyambung (opsional kagak ngaruh sih :v)

int pangkat(int x){
    return x * x; // kalau bisa simple ngapain ribet :)
}

void Print(int x){
    cout << "Hasil : " << x << endl; 
} // gitulah gambarannya :)

int main(){

    int input;

    // sama aja seperti return
    cout << "Program pemangkatan\n";
    cout << "Masukan Nilai : ";
    cin >> input;
    // panggil nya gini
    
    Print(pangkat(input));
    // jadi simple bukan :)

    return 0;
}