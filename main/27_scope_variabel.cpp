#include <iostream>
using namespace std;

// variabel 
// sebenarnya udah di pakai di beberapa program terdahulu 
// sekarang cuma memperjelas aja

int x = 10; // kalau ini x global

int Ambil_global(){
    return x;
}

int X_galaxy_sebelah(); // pake prototipe

int main(){
    cout << "X global : " << x << endl;
    int x = 5; // x lobal main
    cout << "X lobal main : " << x << endl;
    {
        int x = 1;
        cout << "X anak main : " << x << endl;

    }
    cout << "Ambil global setelah yang terjadi : " << Ambil_global() << endl;
    cout << "X dari galaxy sebelah : " << X_galaxy_sebelah() << endl;
    return 0;
}

int X_galaxy_sebelah(){
    int x = 15;
    return x;
}