#include <iostream>
#include <string>
using namespace std;

int main(){
    string output1 = ("Yeee sama :v"), output2 = ("Kagak sama"), output;
    int input1, input2;
    cout << "Masukan angka pertama : ";
    cin >> input1;
    cout << "Masukan angka kedua   : ";
    cin >> input2;
    // fungsinya mirip kek if dan else
    output = (input1 == input2) ? output1 : output2;
    cout << "Hasil nya : " << output << endl; 
    return 0;
}