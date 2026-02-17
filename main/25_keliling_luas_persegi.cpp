#include <iostream>
using namespace std;

// latihan menerapkan materi sebelumnya

// return
double Luas_persegi(double x, double y){
    return x * y;
}
double keliling_persegi(double x, double y){
    return 2 * (x + y);
}

// void
void Print_Luas(double x, double y){
    cout << "Jadi luasnya adalah : " << Luas_persegi(x,y) << endl;
}
void Print_Keliling(double x, double y){
    cout << "Jadi kelilingnya adalah : " << keliling_persegi(x,y) << endl;
}


int main(){
    double input_p, input_l;
    cout << "Masukan panjang : ";
    cin >> input_p;
    cout << "Masukan lebar : ";
    cin >> input_l;
    // panggail aja fungsinya
    // panggil yang void ya soal udah kehubung di atas
    Print_Luas(input_p,input_l);
    Print_Keliling(input_p,input_l);
    return 0;
}