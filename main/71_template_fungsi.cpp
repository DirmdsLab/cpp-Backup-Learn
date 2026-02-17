#include <iostream>

using namespace std;

template<typename X>
void Print(X data){
    cout << data << endl;
}
template<typename A, typename B>
A MAX(A x,B y){
    return (x > y ? x:y);
} 

int main(){
    Print(5.5);
    cout << MAX(10,5) << endl;
    return 0;
}

// gitulah