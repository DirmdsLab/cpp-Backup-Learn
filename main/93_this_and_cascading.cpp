#include <iostream>
#include <string>

using namespace std;

class DataAnime{
private:
    string Judul;
    int Eps;
    string Studio;
public:
    DataAnime(string InputJudul = "Lah Kosong", int InputEps = 0, string InputStudio = "Hilang"){
        this->Judul = InputJudul;
        (*this).Eps = InputEps;
        DataAnime::Studio = InputStudio;
    }

    void PrintData(){
        cout << "Judul : " << this->Judul << endl;
        cout << "Eps   : " << this->Eps << endl;
        cout << "Studio: " << this->Studio << endl;
    }

    DataAnime& SetJudul(const char* Input){
        this->Judul = Input;
        return *this;
    }
    DataAnime& SetEps(int Input){
        this->Eps = Input;
        return *this;
    }
    DataAnime& SetStudio(const char* Input){
        this->Studio = Input;
        return *this;
    }
};

int main(int argc, char const *argv[]){
    DataAnime* Anime1 = new DataAnime();
    Anime1->PrintData();
    cout << endl;

    // set data
    Anime1->SetJudul("kang Turu").SetEps(12).SetStudio("TuruLab");
    Anime1->PrintData();
    cout << endl;

    // bagian 2
    DataAnime Anime2 = DataAnime();
    Anime2.PrintData();
    cout << endl;

    Anime2.SetStudio("TuruLab").SetJudul("Kimi No Turu").SetEps(24);
    Anime2.PrintData();
    cout << endl;



    return 0;
}


