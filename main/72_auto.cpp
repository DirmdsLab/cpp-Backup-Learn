#include <iostream>
#include <typeinfo>
using namespace std;

// auto
// ya auto :v
// dah

template<typename X, typename Y>
auto MAX(X a, Y b){
    return (a > b ? a:b);
}

int main(){
    int x = 10;
    double y = 12.5;
    float t = 15.5f;
    auto output = MAX(x,y);
    // auto output = MAX(x,x);
    // auto output = MAX(y,t);

    // main aja itu :)

    cout << output << " type : " << typeid(output).name() << endl;
    return 0;
}