#include <iostream>
using namespace std;

int main(){
    int output;
    

    // break
    output = 0;
    cout << "Bagian break" << endl;
    while (true){ // kalau true pasti berulang
        output++;
        cout << "Pengulangan ke : " << output << endl;
        // kalau pakai break pakai if
        if (output == 5){ // kalau output = 5 otomatis break
            break;
        }
        // break jadi program bakal berhenti
    }

    cout << endl;

    // continue
    output = 0;
    cout << "Bagian continue" << endl;
    while (output < 10){ // continue ya continue :v kagak break
        // jadi harus kasi batas
        output++; // pakai rumus yang sama aja
        // sama seperti break, continue juga pakai if
        if (output == 5){
            continue;
        }
        // continue kalau masuk ke situ maka code setelah itu di skip
        // tapi tetap ngulang loop
        cout << "Pengulangan ke : " << output << endl;

    }
    
    // gituhlah pasti paham :v
    


    return 0;
}