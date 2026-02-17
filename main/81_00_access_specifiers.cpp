#include <iostream>

using namespace std;

class DataPublic{
public:
    int x;
};

class DataPrivate{
private:
    int x;
};

class DataProtected{
protected:
    int x;
};



int main(int argc, char const *argv[]){
    DataPublic Data1; 
    Data1.x = 5; // public bisa di akses di luar class

    DataPrivate Data2;
    // Data2. kagak ada pilihannya soal x private

    DataProtected Data3;
    // Data3. sama sih dengan privated 

    // penjelasan sekarang masih penjelasan dasar aja 
    return 0;
}
