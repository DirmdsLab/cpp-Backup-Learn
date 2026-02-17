#include <iostream>
#include <string>

using namespace std;

// penuh dengan coba coba jadi agak kacau tapi ngak ngaruh :v

class DataAnime{
public:
    string Judul;
    DataAnime(string InputJudul);
    ~DataAnime();
};

DataAnime::DataAnime(string InputJudul){
    cout << "Obj Di buat" << endl;
    Judul = InputJudul;
}

DataAnime::~DataAnime(){
    cout << "Obj Di Hapus" << endl;
}

void CreatHeapMemory(DataAnime* &InputData){
    DataAnime* CreatHeap = new DataAnime("The Power Of Turu");
    InputData = CreatHeap;
    // delete CreatHeap;
}

DataAnime CreatHeapMemoryReturn(){
    DataAnime CreatData("No Turu No Life");
    return CreatData;
}

int main(int argc, char const *argv[]){
    // DataAnime Data1("Kimi No Turu");
    // DataAnime* Data2 = new DataAnime("No Turu No Life");
    // cout << Data2->Judul << endl;
    // delete Data2;
    // cout << "Hey hey" << endl; 
    // DataAnime* Data3;
    // CreatHeapMemory(Data3);
    // delete Data3;
    // cout << "Output Data 3 setelah di hapus : " << Data3->Judul << endl;
    DataAnime Data4(CreatHeapMemoryReturn());
    cout << Data4.Judul << endl;

    // seperti yang saya belang di awal 
    // rusuh tapi ngak ngaruh :v

    return 0;
}