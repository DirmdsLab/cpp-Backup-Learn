#include <iostream>

using namespace std;

// cara akses dan rubah data protected

class DataProtected{
protected:
    int x;
public:
    void InputProtected(int x){
        DataProtected::x = x;
    }
    void Print(){
        cout << "Saya dari protected : " << x << endl;
    }
};


int main(int argc, char const *argv[]){
    DataProtected Data;
    Data.InputProtected(10);
    Data.Print();
    return 0;
}

