#include <iostream>
#include <string>
using namespace std;

int main(){
    string Sub_string1("Bang Mending Turu Bang Ngapain Bangun");
    // normal
    cout << "Print sub string (13,4) dari \n" << Sub_string1 << endl;
    cout << Sub_string1.substr(13,4) << endl << endl;
    
    // find tapi dari depan
    cout << "Cari substr Bang (dari depan) dari kata : " << Sub_string1 << endl;
    cout << Sub_string1.find("Bang") << endl << endl;
    // dari belakang
    cout << "Cari substr : bang (dari belakang) dari kata : " << Sub_string1 << endl;
    cout << Sub_string1.rfind("Bang") << endl << endl;
    // cari dari depan pakai rumus
    int find_char = Sub_string1.find("Bang");
    cout << "cari substr : Bang tapi pakai rumus" << endl;
    cout << "Dari kata : " << Sub_string1 << endl;
    cout << "Tanpa Rumus : " << find_char << endl;
    cout << "Pakai rumus : " << Sub_string1.find("Bang",find_char + 1) << endl << endl;
    // cari dari belakang
    find_char = Sub_string1.rfind("Bang");
    cout << "Cari dari belakang" << endl;
    cout << "Tanpa rumus : " << find_char << endl;
    cout << "Pakai rumus : " << Sub_string1.rfind("Bang", find_char - 1) << endl;

    // agak bebelit belit tapi kagak ngaruh :v

    return 0;
}