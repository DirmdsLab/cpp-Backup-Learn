#include <iostream>
#include <string>

using namespace std;

class ConstClass{
public:
    string Name;
public:
    ConstClass(const char* Name){
        this->Name = Name;
    }
    void PrintBiasa(){
        cout << "Name : " << this->Name << endl;
    }
    void PrintConst() const {
        cout << "Name : " << this->Name << endl;
    }
};


int main(int argc, char const *argv[]){
    ConstClass obj("KangTuru");
    obj.PrintBiasa();

    const ConstClass obj1("LordTuru");
    obj1.PrintConst();

    cout << endl;

    obj.Name = "KangTuru2";
    obj.PrintBiasa();
    // obj1.Name = "LordTuru2"; // tidak bisa :v

    // gitulah penjelasannya :)

    return 0;
}

// sebagai contoh aja :)
