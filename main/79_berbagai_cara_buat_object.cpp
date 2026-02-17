#include <iostream>
#include <string>

using namespace std;

// berbagai cara buat object

class TanpaConstructor{
public:
    string Data;
    void Print(){
        cout << "Hasil Tanpa Constructor : " << Data << endl;
    }
};

class DenganConstructor{
public:
    string Data;
    DenganConstructor(string InputString){
        DenganConstructor::Data = InputString;
    }
    void Print(){
        cout << "Hasil Dengan Constructor : " << Data << endl;
    }
};



int main(){
    // bagian 1 tanpa constructor
    TanpaConstructor Data1;
    Data1.Data = "Data 1";
    Data1.Print();

    // bagian 2 Dengan constructor
    DenganConstructor Data2 = DenganConstructor("Data 2");
    Data2.Print();

    // bagian 3 masih sama :)
    DenganConstructor Data3("Data 3");
    Data3.Print();

    // bagian 4 simpan di memory heap
    DenganConstructor* Data4 = new DenganConstructor("Data 4");
    (*Data4).Print();
    Data4->Print();
    string output;
    output = Data4->Data;
    cout << "Hasil Dengan Memory heap : " << output << endl;
    // gitu lah
    return 0;
}
