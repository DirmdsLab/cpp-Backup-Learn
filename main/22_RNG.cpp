#include <iostream>
#include <cstdlib>
using namespace std;

// RNG sederhana

int main(){
    // RNG ya sesuai nama gacha number ahaha :)
    // pakai fungsi/object rand() untuk yang lain bisa cari di internet
    // pahami aja :)
    int input_num1, input_num2; // buat batas gacha nya misal 1 sampai 5
    int output;
    char gacha, ulang_gacha;

    cout << "Mulai gacha dari angka : ";
    cin >> input_num1;
    cout << "Sampai angka : ";
    cin >> input_num2;

    // konfirmasi gacha
    cout << "Mulai gacha ( y , n ): ";
    cin >> gacha;
    
    do{
        if ((gacha == 'y') || (ulang_gacha == 'y')){
        output = input_num1 + rand() % input_num2;
        if (output >= input_num2){
            output = input_num2;
        }else if (output <= input_num1){
            output = input_num1;
        }
        cout << "Hasil : " << output << endl;

        cout << endl;

        cout << "Gacha lagi ( y , n ) : ";
        cin >> ulang_gacha;
        // reset gacha
        gacha = 'n';
    }
    } while (ulang_gacha == 'y');
    
    
    return 0;
}