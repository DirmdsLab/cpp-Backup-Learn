#include <iostream>
#include <string>

using namespace std;


class DataAnime{
public:
    string Judul;
    float Ratting;
    int m_Eps;
    DataAnime(const char* InputJudul, float InputRatting, int Eps);
};

DataAnime::DataAnime(const char* InputJudul, float InputRatting, int Eps){
    DataAnime::Judul = InputJudul;
    this->Ratting = InputRatting;
    m_Eps = Eps;
}




int main(int argc, char const *argv[]){
    DataAnime Data1("kimi no turu", 9.5 , 24);
    cout << Data1.Judul << endl;
    cout << Data1.Ratting << endl;
    cout << Data1.m_Eps << endl;


    return 0;
}

// gitulah paham lah kan 