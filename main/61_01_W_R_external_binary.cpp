#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// tulis membaca dalam code binary
// selamat menikmati :v

int main(){
 
    // bagian tulis
    fstream File;
    int input;
    input = 1295;
    File.open("File.bin", ios::out | ios::binary);
    File.write(reinterpret_cast<char*>(&input),sizeof(input));
    File.close();

    /*
    // bagian membaca
    fstream File;
    int output;
    File.open("File.bin", ios::in | ios::binary);
    File.read(reinterpret_cast<char*>(&output),sizeof(output));
    cout << "Hasil baca file binary : " << output << endl;
    File.close();
    */
    
    return 0;
}