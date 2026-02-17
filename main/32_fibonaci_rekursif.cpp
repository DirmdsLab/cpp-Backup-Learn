#include <iostream>
using namespace std;

// fibonaci tapi rekursif kagak di sarankan sih
// karna kurang terbuka dan penggunaan yang bertele tele
// bakal memakan res yang lebih banyak
// tapi sebagai contoh yok gas

int fibo(int x);

int main(){
    int input;
    cout << "Masukan angka fibo : ";
    cin >> input;
    cout << fibo(input);
    return 0;
}


int fibo(int x){
    if (x == 0 || x == 1){
        return x;
    }else{
        return fibo(x-1) + fibo(x-2);
    }
    
}