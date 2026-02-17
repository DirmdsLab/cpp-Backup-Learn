#include <iostream>
using namespace std;

int main(){
    // ambil contoh int aja ya :)
    int perbandingan1 = 5, perbandingan2 = 5, perbandingan3 = perbandingan1 + perbandingan2; // jangan bingung nama nya bisa di ganti bebas kok
    // pakai fungsi bool
    bool output1, output2;

    // sama dengan dan tidak sama dengan
    output1 = (perbandingan1 == perbandingan2); // ini true kan soal sama
    cout << "Hasil output1 5 sama dengan 5       : " << output1 << endl;
    output2 = !(perbandingan1 == perbandingan2); // pakai tanda ! di depan ibarat tidak sama (mungkin :v)
    cout << "Hasil output2 5 tidak sama dengan 5 : " << output2 << endl;

    cout << endl;

    // besar kecil gitu 
    // untuk kedua ini langsung satu baris aja ya :)
    cout << "Hasil_1 5 lebih kecil dari 10 : " << (perbandingan1 < perbandingan3) << endl; // langsung aja (1 = true)
    cout << "Hasil_2 5 lebih besar dari 10 : " << (perbandingan1 > perbandingan3) << endl; // kebalikan dah tahu lah jawabannya :)

    cout << endl;

    cout << "Hasil_1 5 lebih kecil sama dengan 5 : " << (perbandingan1 <= perbandingan2) << endl; // seperti outputnya lebih kecil !sama!
    cout << "Hasil_1 5 lebih besar sama dengan 5 : " << (perbandingan1 >= perbandingan2) << endl;

    // akhir 
    return 0;
}
