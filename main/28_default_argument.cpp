#include <iostream>
using namespace std;

// default 
// ya default
// kek gini :v

double Volume_kubus(double p = 1, double l = 1, double t = 1); // nilai awalnya 1

int main(){
    // jadi jadinya gini
    cout << "ada 3 angka ( 5 , 5 , 5 )" << endl;
    cout << "Ketika full : " << Volume_kubus(5,5,5) << endl;
    cout << "Ketika cuma 2 : " << Volume_kubus(5,5) << endl;
    cout << "ketika cuma 1 : " << Volume_kubus(5) << endl;
    return 0;
}

double Volume_kubus(double p, double l, double t){
    return p * l * t;
}