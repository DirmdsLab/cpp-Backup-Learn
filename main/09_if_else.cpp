#include <iostream>
using namespace std;

int main(){
    int input1;
    // sama seperti materi if sebelumnya tapi ada tambahan else
    cout << "Masukan angka : ";
    cin >> input1;
    // pakai if sebelumnya dan ...
    if (input1 == 5){
        cout << "Yee anda memasukan 5" << endl;
    }else if (input1 < 5){ // tambahan ini jika user tidak memasukan nilai 5 tapi kurang dari 5
        cout << "Nilai yang anda masukan kurang dari 5" << endl;
    }else{ // jika user tidak memasukan nilai 5 dan kurang dari lima bagian ini pasti jalan
        cout << "Nilai yang anda masukan lebih dari 5" << endl;
    }
    
    // jadi kalau udah pakai combinasi if dan else program pasti masuk ke situ 
    // ahaha berbelit belit :v
    // ya pahami aja :v

    cout << "Selesai" << endl;
    
    return 0;
}
