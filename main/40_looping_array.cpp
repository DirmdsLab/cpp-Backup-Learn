#include <iostream>
#include <array>
using namespace std;

// looping array 

int main(){
    array<int, 10> output_array = {0,1,2,3,4,5,6,7,8,9};
    for(int output : output_array){
        cout << "Nilai output : " << output << " || Alamat output : " << &output << endl;
    }
    // yang di atas bakal sama alamat nya soal cuma alamat output yang di ganti dan tergantikan
    cout << endl;
    // kalau for yang di bawah pakai alamat memory
    for(int &output_add : output_array){
        cout << "Nilai output : " << output_add << " || Alamat output : " << &output_add << endl;
    }
    // gitulah :)
    return 0;
}