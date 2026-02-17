#include <iostream>
using namespace std;

// faktorial rekursif
// jadi gini outputnya 
// 5 x 4 x 3 x 2 x 1 = 120 (jadi urut dari awal dan di kalikan semuanya)

int faktorial(int x);


int main(){
    int input;
    cout << "Masukan angka faktorial : ";
    cin >> input;

    cout << " = " << faktorial(input) << endl;

    return 0;
}


// gini lah :) mirip mirip tapi bisa di pahami
int faktorial(int x){
    if (x <= 1){
        cout << x;
        return x;
    }else{
        cout << x << " x ";
        return x * faktorial(x-1);
    }
}