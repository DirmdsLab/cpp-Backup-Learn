#include <iostream>
#include <string>

using namespace std;

class DataAnime{
public:
    string Judul;
    float Ratting;
    int Eps;
    
    DataAnime(const char*,float,int);
    void Print();
    ~DataAnime();
};


