#include <iostream>
using namespace std;

int main(){
    int output_int;
    float output_float;
    char output_char;
    // ya menentukan nilai tersebut jadi apa
    output_int = 5; // int
    output_float = 5.5f; // float
    output_char = 'A'; // char
    // jadi outputnya mau gimana gitu aja intinya
    cout << "Print int + float = float" << endl;
    cout << output_int + output_float << endl;
    // gimana supaya outpunya int
    cout << "Ganti output jadi int" << endl;
    cout << (int)(output_int+output_float) << endl; // gitu juga sebaliknya
    // kalau udah dulu baru exsekusi
    cout << "Ubah dulu ke int" << endl;
    cout << output_int + (int)output_float << endl;
    // output char juga bisa
    cout << "output char jadi int" << endl;
    cout << (int)output_char << endl;

    // bisa di pahami lah

    return 0;
}