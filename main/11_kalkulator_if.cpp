#include <iostream>
using namespace std;

int main(){
    int input1, input2; // buat masukan angka 1 dan 2 (sebenarnya tidak harus di jelaskan :v)
    char opsi; // buat opsinya ( + , - , * , / )
    cout << "Masukan angka : "; // angka 1
    cin >> input1;
    cout << "Pilih opsi ( + , - , * , / ) : ";
    cin >> opsi;
    cout << "Masukan angka ke 2 : ";
    cin >> input2;

    // cukup basa basinya :v
    // masukan ke if
    // sistemnya cuma pake if dan else if dan else kok

    if (opsi == '+'){
        cout << "Hasil penjumlahan dari " << input1 << " + " << input2 << " = " << input1 + input2 << endl;
    }else if (opsi == '-'){
        cout << "Hasil pengurangan dari " << input1 << " - " << input2 << " = " << input1 - input2 << endl;
    }else if (opsi == '*'){
        cout << "Hasil perkalian dari " << input1 << " x " << input2 << " = " << input1 * input2 << endl;
    }else if (opsi == '/'){
        cout << "Hasil pembagian dari " << input1 << " / " << input2 << " = " << input1 / input2 << endl;
    }else{
        cout << "sepertinya ada kesalahan" << endl;
    }

    // simple bukan :)
    
    
    return 0;
}