#include <iostream>
#include <string>

using namespace std;

class Induk1{
public:
    string KataInduk1 = "nak saya akan mewarikan ini (pov induk 1)";
};

class Induk2{
public:
    string KataInduk2 = "nak saya akan mewarikan ini (pov induk 2)";
};

class Anak: public Induk1, public Induk2{
public:
    string Kata = "Yes dapat dapat 2 :v";
};


int main(int argc, char const *argv[]){
    Anak Ehehe;
    cout << Ehehe.KataInduk1 << endl;
    cout << Ehehe.KataInduk2 << endl;
    cout << Ehehe.Kata << endl;
    return 0;
}
