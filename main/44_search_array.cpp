#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

// search ya cari :)
void Print(array<int,10>&);

int main(){
    array<int,10> output = {5,6,2,4,9,3,1,7,0,8};
    int input, output_search;
    // gas
    Print(output);
    cout << "Mau cari apa? : ";
    cin >> input;
    // urutkan dulu angkanya dan baru cari
    sort(output.begin(),output.end());
    output_search = binary_search(output.begin(),output.end(),input);
    if (output_search == true){
        cout << "Yee ketemu :v" << endl;
    }else{
        cout << "Kagak ada bang" << endl;
    }
    // bisa di pahami lah :)
    return 0;
}

void Print(array<int,10>&input){
    cout << "Hasilnya : ";
    for (int output : input ){
        cout << output << " ";
    }
    cout << endl;
}