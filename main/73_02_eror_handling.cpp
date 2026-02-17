#include <iostream>
#include <exception>
using namespace std;
// bagian 4 part 2

int bagi(int x, int y){
    if (y == 0){
        throw overflow_error("eror bang :)");
    }
    return x/y;
}

int main(){
    int input1, input2, output;
    while (true){
        cout << "Input 1 : ";
        cin >> input1;
        cout << "Input 2 : ";
        cin >> input2;
        try{
            output = bagi(input1,input2);
            cout << output << endl;
        }catch(const exception& e){
            cout << e.what() << endl;
        }
        
    }
    cout << "End" << endl;
    return 0;
}