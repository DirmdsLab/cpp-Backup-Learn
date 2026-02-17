#include <iostream>
using namespace std;

// if tapi di preprosesing

// #define LANG 1
#define LANG 0
// #define LANG 3

// mainkan aja antara 3 ini


#if LANG == 1
    #define PILIH_LANG "Indonesia"
#elif LANG == 0
    #define PILIH_LANG "English"
#else
    #define PILIH_LANG "Tidak ada pilihan"
#endif

// gitulah kira kira

int main(){
    cout << "Bahasa yang di pilih : " << PILIH_LANG << endl;
    return 0;
}