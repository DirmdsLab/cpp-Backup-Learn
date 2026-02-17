#include <iostream>
#include <string>

class DataAnime{
public:
    std::string Judul;
private:
    std::string Studio;
public:
    DataAnime(const char*,const char*);
    void Print();
    ~DataAnime();
};

