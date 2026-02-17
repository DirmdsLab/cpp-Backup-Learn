#include <iostream>
using namespace std;

int main(){
    int input1, input2;
    char opsi;
    cout << "Masukan angka : ";
    cin >> input1;
    cout << "Pilih opsi ( + , - , * , / ) : ";
    cin >> opsi;
    cout << "Masukan angka ke 2 : ";
    cin >> input2;
    // sama aja seperti program sebelumnya tapi bedanya di exsekusi nya
    switch (opsi){
    case '+':
        cout << "Hasil penjumlah dari " << input1 << " + " << input2 << " = ";
        cout << input1 + input2;
        break;
    case '-':
        cout << "Hasil pengurangan dari " << input1 << " - " << input2 << " = ";
        cout << input1 - input2;
        break;
    case '*':
        cout << "Hasil penjumlah dari " << input1 << " x " << input2 << " = ";
        cout << input1 * input2;
        break;
    case '/':
        cout << "Hasil penjumlah dari " << input1 << " / " << input2 << " = ";
        cout << input1 / input2;
        break;
    
    default:
        cout << "Kek nya ada kesalahan" << endl;
        break;
    }
    // ya gitu lah beda di exsekusi nya aja
    // selebihnya pahami aja :v
    return 0;
}
