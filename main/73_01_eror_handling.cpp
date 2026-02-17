#include <iostream>
using namespace std;
// bagian 4 part 1

int bagi(int x, int y){
    if (y == 0){
        throw "Eror bagi dengan 0";
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
        }catch(const char* e){
            cout << e << endl;
        } 
    }
    cout << "End" << endl;
    return 0;
}