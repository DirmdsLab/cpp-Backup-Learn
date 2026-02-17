#include <iostream>

using namespace std;

// cara akses dan rubah data private

class DataPrivate{
private:
    int x;
public:
    void InputPrivate(int Input){
        x = Input;
    }
    void Print(){
        cout << "Saya Private : " << x << endl;
    }
};


int main(int argc, char const *argv[]){
    DataPrivate Data;
    Data.InputPrivate(10);
    Data.Print();
    return 0;
}
