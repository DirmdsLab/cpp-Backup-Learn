#include <fstream>
using namespace std;

// masuk ke bagian file external 
// pertama nulis dulu

int main(){
    ofstream File;
    // bagian ada data baru di replace/ganti
    File.open("File1.txt");
    File << "Mending Turu :v";
    File.close();
    // bagian tambah di garis baru
    File.open("File2.txt", ios::app); // ios::app
    File << "Mending Turu " << endl;
    File.close();

    // versi ios::app ada yang lain juga
    // ios::out dan ios::trunc 
    // masing masing fungsi silakan di coba
    return 0;
}