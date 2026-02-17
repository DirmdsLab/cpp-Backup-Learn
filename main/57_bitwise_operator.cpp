#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// ayok main 0 dan 1 awokaoak :v

void PrintBit(unsigned short output, string Name);

int main(){
    // unsigned ya nilainya positif aja
    unsigned short a = 5;
    unsigned short b = 7;
    unsigned short c = a+b;

    // Print normal
    cout << "Angka Awal" << endl;
    PrintBit(a,"A");
    PrintBit(b,"B");
    PrintBit(c,"C");
    cout << endl;

    // Bagian &
    cout << "Bagian &" << endl;
    c = a & b;
    PrintBit(a,"A");
    PrintBit(b,"B");
    PrintBit(c,"C");
    cout << endl;

    // Bagian or
    c = a | b;
    cout << "Bagian or" << endl;
    PrintBit(a,"A");
    PrintBit(b,"B");
    PrintBit(c,"C");
    cout << endl;
    
    // bagian or kebalikan
    c = a ^ b;
    cout << "Bagian or kebalikan" << endl;
    PrintBit(a,"A");
    PrintBit(b,"B");
    PrintBit(c,"C");
    cout << endl;

    // bagian not
    c = b;
    c = ~ a;
    cout << "Bagian not" << endl;
    PrintBit(a,"A");
    PrintBit(c,"C");
    cout << endl;

    // bagian geser ke kanan dan ke kiri
    cout << "Bagian geser ke kanan dan ke kiri" << endl << endl;
    
    // kanan
    cout << "Kanan >> " << endl;
    cout << "Original" << endl;
    PrintBit(a,"A");
    a = a >> 1;
    cout << "Setelah di geser" << endl;
    PrintBit(a,"A");
    cout << endl;

    // kiri
    cout << "Kiri <<" << endl;
    cout << "Original" << endl;
    PrintBit(b,"B");
    b = b << 1;
    cout << "Setelah di geser" << endl;
    PrintBit(b,"B");
    cout << endl;

    // silakan mainkan logika mu :)

    return 0;
}


void PrintBit(unsigned short output, string Name){
    cout << Name << " : " << bitset<8>(output) << endl;
}