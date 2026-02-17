#include <iostream>
using namespace std;

int main(){
    
    // bilangan fibonaci Hmm
    // yaitu ohh itu lah
    // outputnya 1 1 2 3 5 8 13 21 seterusnya
    // jadi fibo 1 2 3 4 5 6 7  8  gitu :)

    int input, output; 
    int fibo1, fibo2; // pisah supaya jelas aja
    char opsi; // fitur tambahan
    
    // selamat datang :) 
    cout << "Program fibonaci" << endl;

    // beri nilai awal
    fibo1 = 0;
    fibo2 = 1;
    // start gas kan :v
    cout << "Masukan angka : ";
    cin >> input;
    
    // tambah awal nya
    cout << " | " << fibo2 << " | ";
    // masukin aja ke for soal pengulangan
    for (int i = 1; i < input; i++){
        output = fibo1 + fibo2; // output di update seperti di rumus
         fibo1 = fibo2; // fibo1 di update 
         fibo2 = output; // fibo2 di update
         cout << output << " | ";
    }
    
    // bisa di pahami lah :)

    return 0;
}