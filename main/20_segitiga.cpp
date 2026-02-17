#include <iostream>
using namespace std;

int main(){
    // segitiga
    int input;
    char model;
    cout << "Masukan tingkat segitiga : ";
    cin >> input;
    cout << "Masukan model segitiga \nhanya 1 karakter ex ( * , 0 , and other) : ";
    cin >> model;
    // segitiga simple aja 
    // pakai for dalam for untuk buat tingkat nya

    // mulai dari pola 1
    cout << "\nPola 1\n";

    // output pola 1
    // *
    // **
    // ***
    // ****
    // *****
    // dan model lainya

    for (int i = 1; i <= input; i++){
        for (int output = 1; output <= i; output++){
            cout << model;
        }
        cout << endl; // buat tingkat nya, ya paham lah kan :v
    }

    // pola 2
    cout << "\nPola 2\n";

    // output pola 2
    // *****
    // ****
    // ***
    // **
    // *

    for (int i = 1; i <= input; i++){
        for (int output = input; output >= i; output--){ // buat jadi terbalik
            cout << model;
        }
        cout << endl;
    }
    
    // pola 3
    cout << "\nPola 3\n";

    // output pola 3
    //     *
    //    **
    //   ***
    //  ****
    // *****

    for (int i = 1; i <= input; i++){
        for (int output = input; output > i; output--){
            cout << " ";
        }
        for (int output = 1; output <= i; output++){
            cout << model;
        }
        cout << endl;
    }
    
    // pola 4
    cout << "\nPola 4\n";

    // output pola 4
    // *****
    //  ****
    //   ***
    //    **
    //     *

    for (int i = 1; i <= input; i++){
        for (int output = 1; output < i; output++){
            cout << " ";
        }
        for (int output = input; output >= i; output--){
            cout << model;
        }
        cout << endl;
    }
    
    // sejauh ini pahami aja :)

    // Pola 5 
    cout << "\nPola 5\n";

    // output pola 5
    //     *
    //    ***
    //   *****
    //  *******
    // *********

    for (int i = 1; i <= input; i++){
        for (int output = input; output > i; output--){
            cout << " ";
        }
        for (int output = 1; output <= (i*2-1); output++){
            cout << model;
        }
        cout << endl;
    }

    // Pola 6
    cout << "\nPola 5\n";


    // output Pola 6
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    for (int i = 1; i <= input; i++){
        for (int output = 1; output < i; output++){
            cout << " ";
        }
        for (int output = (input*2-i); output >= i; output--){
            cout << model;
        }
        cout << endl;
    }

    // Pola 7
    cout << "\nPola 7\n";

    // output pola 7 cuma gabungan pola 5 dan 6 :)
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    //  *******
    //   *****
    //    ***
    //     *
    // kurangin satu baris di tengah

    for (int i = 1; i < input; i++){
        for (int output = input; output > i; output--){
            cout << " ";
        }
        for (int output = 1; output <= (i*2-1); output++){
            cout << model;
        }
        cout << endl;
    }
    for (int i = 1; i <= input; i++){
        for (int output = 1; output < i; output++){
            cout << " ";
        }
        for (int output = (input*2-i); output >= i; output--){
            cout << model;
        }
        cout << endl;
    }
    
    // gitu lah kira kira :)
    
    return 0;
}