#include <iostream>
#include <string>

using namespace std;

class KepalaSuku{
public:
    string Data = "Kepala";
};

// di wariskan
class AnakSuku: public KepalaSuku{
public:
    string Anggota = "Anak - anak suku";
};

class AnakDariAnakSuku: public AnakSuku{
public:
    string CucuIndukSuku = "Kang Turu";
};

// sekarang waktunya anak dari anak suku ambil dari induk suku
// makin lama main gj lol


int main(int argc, char const *argv[]){
    AnakDariAnakSuku Data;
    cout << Data.Data << endl;
    cout << Data.Anggota << endl;
    cout << Data.CucuIndukSuku << endl;
    return 0;
}
