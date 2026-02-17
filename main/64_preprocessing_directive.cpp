#include <iostream> // yang ini tanda #
#include <string> 

#define Hmph 95 // tanda # (macro)

#define NOTURUNOLIFE "Mending Turu"

// buat fungsi

#define KUADRAT(X) (X*X) // anggap aja betul penulisannya :v

// biasakan hufuf besar supaya tahu bedanya (yang pertama biarakan aja soal gitulah ( >\\ _ \\< )

using namespace std;

int main(){
    cout << "Bagian angka" << endl;
    double Hmm = 95;
    cout << "Nilai define : " << Hmph << endl; // tidak memiliki alamat memory
    // jadi sama aja kek nulis langsung gini cout << 95 << endl;
    cout << "Nilai Double : " << Hmm << endl; // saya punya :v
    cout << endl;
    // untuk text juga bisa 
    cout << "Hasil Text" << endl;
    cout << NOTURUNOLIFE << endl;
    cout << endl;
    // dan undef
    #undef NOTURUNOLIFE
    // cout << NOTURUNOLIFE << endl; // bakal eror soal udah di undef

    // dan juga untuk fungsi
    cout << "Kuadrat dari 5 : " << KUADRAT(5) << endl;

    return 0;
}

// itu dulu