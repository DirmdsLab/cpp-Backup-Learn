#include <iostream>

using namespace std;

// kalau di baca pasti paham

int main(){
    // bagian 1
    // berlaku juga untuk double dan lainya
    typedef int Hmph[2];
    Hmph x = {1,2};
    cout << "Nilai x : " << x[0] << " " << x[1] << endl;

    // bagian 2
    using huruf = char;
    huruf print[5];
    print[0] = 'p';
    print[1] = 'r';
    print[2] = 'i';
    print[3] = 'n';
    print[4] = 't';
    cout << "Hasil Print : ";
    for (int i = 0; i <= 4; i++){
        cout << print[i];
    }
    cout << endl;
    return 0;
}