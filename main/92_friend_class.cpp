#include <iostream>

using namespace std;

class PersegiPanjang;

class Persegi{
friend class PersegiPanjang;
private:
    int panjang;
public:
    Persegi(int panjang){
        this->panjang = panjang;
    }
    void AksesPersegiPanjang(PersegiPanjang& obj);
};

class PersegiPanjang{
friend class Persegi;
private:
    int panjang;
    int lebar;
public:
    PersegiPanjang(int panjang, int lebar){
        this->panjang = panjang;
        this->lebar = lebar;
    }
    void aksesPersegi(Persegi& obj){
        cout << "akses persegi : " << obj.panjang << endl;
    }
};

void Persegi::AksesPersegiPanjang(PersegiPanjang& obj){
        cout << "Akses Panjang : " << obj.panjang << endl;
        cout << "Akses Lebar   : " << obj.lebar << endl;
}


int main(int argc, char const *argv[]){
    Persegi kubus(5);
    PersegiPanjang balok(10,7);

    balok.aksesPersegi(kubus);
    kubus.AksesPersegiPanjang(balok);

    return 0;
}


