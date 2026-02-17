#include <iostream>
#include <string>
using namespace std;

int main(){
    string input, tebak("MendingTuru");
    while (true){
        cout << "Tebak aja :p : ";
        cin >> input;
        if (input == tebak){
            cout << "Selamat berhasil :v" << endl;
            break;
        }else{
            cout << "awok awok terjebak :)" << endl;
        }
    }
    cout << "Dah itu aja :)" << endl;

    // pemakaian dasar aja 
    // mudah di mengerti bukan?
    
    return 0;
}