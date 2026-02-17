#include <iostream>
using namespace std;

// Mempersingkat kerja anda sih

void Print(int x);

int main(){
    // ex
    int output1, output2, output;
    cout << "Lihat program supaya lebih rinci" << endl;
    // main karakter sekarang
    output = (output1 = 5,cout << "Didalam output, output1 = " << output1 << endl, output2 = 7,cout << "Print pakai void output2 = ",Print(output2),(output1+output2));
    cout << "Hasil output : ";
    Print(output);
    return 0;
}


void Print(int x){
    cout << x << endl;
}