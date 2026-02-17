#include <iostream>
using namespace std;

void kuadrat(int &); // lebih bersih

int main(){
    int input;
    cout << "Program pemangkatan" << endl;
    cout << "Masukan angka : ";
    cin >> input;
    cout << "Nilai input  : " << input << endl;
    cout << "Alamat input : " << &input << endl;
    cout << endl;
    kuadrat(input);
    cout << "Hasilnya   : " << input << endl;
    cout << "Alamat nya : " << &input << endl;

    return 0;
}


void kuadrat(int &x){
    x = x * x;
}

// over rall ahh overall gitulah
// bisa di pahami kan :)