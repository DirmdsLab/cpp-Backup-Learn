#include "86_01_class.h"

DataAnime::DataAnime(const char* InputJudul,float InputRatting,int Eps){
    this->Judul = InputJudul;
    this->Ratting = InputRatting;
    this->Eps = Eps;
}

void DataAnime::Print(){
    cout << "Judul   : " << Judul << endl;
    cout << "Ratting : " << Ratting << endl;
    cout << "Eps     : " << Eps << endl;
}

DataAnime::~DataAnime(){

}