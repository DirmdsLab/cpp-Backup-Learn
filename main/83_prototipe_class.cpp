#include <iostream>
#include <string>

using namespace std;

class Anime{
public:
    string Judul;
    int Eps;
    Anime(string InputJudul, int InputEps);
    void PrintAnime();
};

Anime::Anime(string InputJudul, int InputEps){
    Judul = InputJudul;
    Eps = InputEps;
}

void Anime::PrintAnime(){
    cout << "Judul : " << Judul << endl;
    cout << "Eps   : " << Eps << endl;
}


int main(){
    Anime DataAnime("Kimi no turu",24);
    DataAnime.PrintAnime();
    return 0;
}