#include <iostream>
using namespace std;

void kuadrat_ptr(int *); // lempar lemparan alamat rumah :v

int main(){
    int input;
    cout << "Masukan angka bakal di pangkatkan : ";
    cin >> input;
    // buat pemastian
    cout << "Nilai input  : " << input << endl;
    cout << "Alamat input : " << &input << endl;
    cout << endl;
    kuadrat_ptr(&input);
    cout << "Hasilnya  : " << input << endl;
    cout << "Alamatnya : " << &input << endl;
    return 0;
}

// main main dengan alamat :)
// bisa di pindah pindah :v
void kuadrat_ptr(int *x_ptr){
    *x_ptr = *x_ptr * *x_ptr; 
}