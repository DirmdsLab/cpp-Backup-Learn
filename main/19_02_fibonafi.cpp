#include <iostream>
using namespace std;

// uji coba gabut aja :)

int main(){
    
    int input, output; 
    int fibo1, fibo2;
    char opsi;
    
    cout << "Program fibonaci" << endl;

    while (true){
    
    fibo1 = 0;
    fibo2 = 1;
    
    cout << "Masukan angka : ";
    cin >> input;
    if (input >= 46){
        cout << "Melebihi limit" << endl;
        break;
    }else if (input <= 0){
        cout << "Minimal 1 lah :v" << endl;
        break;
    }
    
    
    
    cout << " | " << fibo2 << " | ";
    for (int i = 1; i < input; i++){
        output = fibo1 + fibo2;
         fibo1 = fibo2;
         fibo2 = output;
         cout << output << " | ";
    }

    cout << endl;

    cout << " | ";
    for (int i = 1; i <= input; i++){
        if (i <= 6){
            cout  << i << " | ";
        }else if (i == 7){
            cout << "0" << i << " | ";
        }else if (i == 8){
            cout << "0" << i << " | ";
        }else if (i == 9){
            cout << "0" << i << " | ";
        }else if (i == 10){
            cout  << i << " | ";
        }else if (i == 11){
            cout  << i << " | ";
        }
        
        
         
    }
    cout << endl;
    cout << "Ulang program? ( y , n ) : ";
    cin >> opsi;
    if (opsi == 'n'){
        cout << "Thanks and sayonaraaa :v" << endl;
        break;
    }else if (opsi == 'y'){
        // nothing
    }else{
        cout << "Input yang anda masukan salah" << "\n";
        cout << "Program akan otomatis di ulang" << endl;
    }
    
    }

    



    
    return 0;
}
