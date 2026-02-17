#include <iostream>
using namespace std;

// rekursif 
// kek for tapi versi lebih ribet
// okey langsung gas

int pangkat(int x, int y);

int main(){
    int input1, input2;
    cout << "Masukan angka : ";
    cin >> input1;
    cout << "Masukan pangkat : ";
    cin >> input2;
    // panggil fungsi kek biasa
    cout << "Hasilnya : " << pangkat(input1,input2) << endl;
    return 0;
}


int pangkat(int x, int y){
    if (y <= 1){
        cout << "Pengulangan ke : " << y << endl;
        return x;
    }else{
        cout << "Pengulangan ke : " << y << endl;
        return x * pangkat(x,(y-1)); // gitu lah kira kira
    }
    // sistem agak ribet sih di sarankan lihat video
}