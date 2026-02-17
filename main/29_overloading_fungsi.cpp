#include <iostream>
using namespace std;

// overloading hmm
// nama fungsi sama sih jadi ...

int luas_balok(int x);
int luas_balok(int x, int y);

double luas_balok(double x);
double luas_balok(double x, double y);

int main(){
    cout << "x = 5 dan y = 10" << endl;
    cout << "Bagian int x : " << luas_balok(5) << endl;
    cout << "Bagian int x dan y : " << luas_balok(5,10) << endl;
    cout << endl;
    cout << "x = 5.5 dan y = 10.5" << endl;
    cout << "Bagian double x : " << luas_balok(5.5) << endl;
    cout << "Bagian double x dan y : " << luas_balok(5.5,10.5) << endl;
    return 0;
}

// fungsi

int luas_balok(int x){
    return x * x;
}
int luas_balok(int x, int y){
    return x * y;
}

double luas_balok(double x){
    return x * x;
}
double luas_balok(double x, double y){
    return x * y;
}