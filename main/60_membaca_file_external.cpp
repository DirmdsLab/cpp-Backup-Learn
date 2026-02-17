#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Membaca file external
// create File.txt
// isi file di bawah

int main(){
    ifstream File;
    string output, nama;
    int number, jumlah;
    bool S_While = true;
    // langsung ke bagian program
    File.open("File.txt");

    // part 1 print
    while (S_While){
        getline(File,output);
        if (output == "Data"){
            S_While = false;
        }
        cout << output << endl;
    }
    getline(File,output);
    cout << output << endl;
    
    // part 2 print
    jumlah = 0;
    while (!File.eof()){
        File >> number;
        File >> nama;
        cout << number << "\t" << nama << endl;
        jumlah++;    
    }
    cout << "Jumlah Data : " << jumlah << endl;

    // agak ribet tapi kagak ngaruh
    // :v

    File.close();
    return 0;
}



// isi file 
/*
File external baris pertama.
Dan ini part 2 :v

Data
No      Nama
1       Lord
2       Turu
3       Rebahan
4       Hmph
5       RandomBet
*/
