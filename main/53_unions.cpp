#include <iostream>
using namespace std;

// kek gitulah disini main alamat memory

union Data{
    int input_number;
    char input_char[4];
};

int main(){
    Data TuruLab; // sama kek struct inputnya
    // bagian number
    TuruLab.input_number = 5; 
    cout << "Bagian Number : " << TuruLab.input_number << endl;
    cout << "Alamat Memory : " << &TuruLab.input_number << endl;
    cout << endl;
    // bagian char
    TuruLab.input_char[0] = 'H';
    TuruLab.input_char[1] = 'm';
    TuruLab.input_char[2] = 'p';
    TuruLab.input_char[3] = 'h';

    cout << "Bagian Char   : ";
    cout << TuruLab.input_char[0];
    cout << TuruLab.input_char[1];
    cout << TuruLab.input_char[2];
    cout << TuruLab.input_char[3];
    cout << endl;
    cout << "Alamat Memory : " << &TuruLab.input_char << endl;
    cout << endl;
    // efeknya number tadi juga berubah
    // paham lah sistemnya gimana
    // print number lagi
    cout << "Bagian Number lagi : " << TuruLab.input_number << endl;
    cout << "Alamat Memory lagi : " << &TuruLab.input_number << endl;
    // dan begitulah sebaliknya
    return 0;
}