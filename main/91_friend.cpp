#include <iostream>
#include <string>

using namespace std;

class Manga;

class Anime{
private:
    string Judul;
    int Eps;
public:
    Anime(const char* InputJudul, int InputEps){
        this->Judul = InputJudul;
        this->Eps = InputEps;
    }
    friend bool bandingkan(const Anime& Anime,const Manga& Manga);
    friend bool bandingkan(const Manga& Manga,const Anime& Anime);
};

class Manga{
private:
    string Judul;
    int Chapter;
public:
    Manga(const char* InputJudul, int InputChapter){
        this->Judul = InputJudul;
        this->Chapter = InputChapter;
    }
    friend bool bandingkan(const Anime& Anime,const Manga& Manga){
        return Anime.Eps > Manga.Chapter;
    }
    friend bool bandingkan(const Manga& Manga,const Anime& Anime);
};

bool bandingkan(const Manga& Manga,const Anime& Anime){
    return Manga.Chapter > Anime.Eps;
}

int main(int argc, char const *argv[]){
    Anime Anime1("kimi no turu", 12);
    Manga Manga1("kimi no turu", 80);


    cout << "Anime > Manga : " << bandingkan(Anime1,Manga1) << endl;
    cout << "Manga > Anime : " << bandingkan(Manga1,Anime1) << endl;
    return 0;
}
