#include <iostream>
#include <array>
using namespace std;

// latihan buat grafik pakai array 

int main(){
    array<int, 10> input; 
    // buat pakai for
    int fist_output = 0; // untuk pembantu output
    for (int i = 0; i < input.size(); i++){
        // program input

        // inti tapi versi akhir untuk mengsejajarkan
        if (i == 9){
        cout << "Jumlah orang yang memiliki nilai " << i << fist_output << " - " << (i+1)*10 << " : ";
        cin >> input[i];
        break;
        }
        
        // inti
        cout << "Jumlah orang yang memiliki nilai " << i << fist_output << " - " << (i+1)*10 << "  : ";
        cin >> input[i];

        // bagian isekai sebelah
        if (fist_output == 1){
            continue;
        }
        fist_output++;
        // batas
    }
    cout << endl;
    // print grafiknya
    cout << "Jadi grafiknya sebagai berikut" << endl;
    fist_output = 0;
    for (int i = 0; i < input.size(); i++){
        if (i == 9){
            cout << i << fist_output << " - " << ((i+1)*10) << " : ";
        }else{
            cout << i << fist_output << " - " << ((i+1)*10) << "  : ";
        }
        for (int output = 0; output < input[i]; output++){
            cout << "*";
        }
        cout << endl;
        if (fist_output == 1){
            continue;
        }
        fist_output++;
    }
    // agak ribet tapi bisa di pahami lah :v
    // dahhlah wkwk
    return 0;
}