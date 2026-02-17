#include "81_04_add.hpp"

DataAnime::DataAnime(const char* InputJudul, const char* InputStudio){
    this->Judul = InputJudul;
    this->Studio = InputStudio;
}

void DataAnime::Print(){
    std::cout << "Judul  : " << Judul << std::endl;
    std::cout << "Studio : " << Studio << std::endl;
}

DataAnime::~DataAnime()
{
}
