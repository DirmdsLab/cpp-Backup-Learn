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

// jadi kalau di wariskan anak suku bisa akses data dari induk suku :v
// apa sih lol

int main(int argc, char const *argv[]){
    AnakSuku Data;
    cout << Data.Data << endl;
    cout << Data.Anggota << endl;
    return 0;
}
