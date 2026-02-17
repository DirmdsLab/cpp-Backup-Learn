#include <iostream>
using namespace std;

// prototipe ya void atau return tapi di bawah
// kalau sebelumnya di atas fungsi main
// sekarang di bawah fungsi main
// tapi harus ada yang memberi tahu dia itu ada
// supaya dia di anggap :v 
// contoh sama aja

double Luas_persegi(double x, double y);
double Keliling_persegi(double x, double y);

void Print_Luas(double x, double y);
void Print_Keliling(double x, double y);

int main(){
    double input_P, input_L;
    cout << "Masukan panjang : ";
    cin >> input_P;
    cout << "Masukan lebar : ";
    cin >> input_L;
    // panggil seperti biasa
    Print_Luas(input_P,input_L);
    Print_Keliling(input_P,input_L);
    return 0;
}

// baru buat fungsinya di bawah
// harus sama awalnya
double Luas_persegi(double x, double y){
    return x * y;
}
double Keliling_persegi(double x, double y){
    return 2 * (x + y);
}

void Print_Luas(double x, double y){
    cout << "Hasil Luas : " << Luas_persegi(x,y) << endl;
}
void Print_Keliling(double x, double y){
    cout << "Hasil keliling : " << Keliling_persegi(x,y) << endl;
}

// bisa di pahami lah :)