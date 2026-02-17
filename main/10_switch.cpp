#include <iostream>
using namespace std;

int main(){
    int input1;
    // switch lebih rapi aja dari if :v keknya
    // seperti biasa basa basi dulu :v
    cout << "Masukan nilai : ";
    cin >> input1;
    // masuk ke switch
    switch (input1){
    case 5 :
        cout << "Yee anda memasukan nilai 5" << endl;
        break;
    case 4 :
        cout << "nilainya adalah 4" << endl;
        break;
    case 3 :
        cout << "nilainya adalah 3" << endl;
        break;
    case 2 :
        cout << "nilainya adalah 2" << endl;
        break;
    case 1 :
        cout << "nilainya adalah 1" << endl;
        break;
    default: // sama seperti else sebelumnya kalau tidak ada antara di atas baris ini pasti jalan
        cout << "Hmm kagak ada yang sesuai" << endl;
        break;
    }

    // seperti if pasti masuk ke situ baru program nya selesai

    cout << "Selesai :)" << endl;

    return 0;
}
