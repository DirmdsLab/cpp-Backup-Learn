#include <iostream>
#include <string>
using namespace std;

int main(){
    string output1 ("Kucing");
    cout << "Print string biasa" << endl;
    cout << output1 << endl;
    cout << endl;
    // print pakai index kalau string kan char bekumpul
    cout << "Print pakai indek array" << endl;
    cout << output1[0];
    cout << output1[1];
    cout << output1[2];
    cout << output1[3];
    cout << output1[4];
    cout << output1[5];
    cout << endl << endl;

    // bisa juga di rubah berdasarkan index
    output1[0] = 'M';
    cout << "Print setelah di ubah pakai index" << endl;
    cout << output1 << endl << endl;; // print biasa aja

    // gabung kata
    cout << "Gabung kata pakai string baru" << endl;
    string output2 (output1 + "ggg");
    cout << output2 << endl << endl;

    // gabung kata pakai append
    cout << "Gabung kata pakai append" << endl;
    output2.append(output1);
    cout << output2 << endl << endl;

    // pakai +=
    string output3 ("Turu");
    output1+=output3;
    cout << "Print pakai += " << endl;
    cout << output1 << endl << endl;
    
    // tambah spaci ketika +=
    cout << "Tambah space ketika +=" << endl;
    output1 += ' ' + output1;
    cout << output1 << endl << endl;

    // tambah spasi langsung di string 
    string output4 (" Cat");
    cout << "Tambah ' ' spasi di string" << endl;
    output3+=output4;
    cout << output3 << endl;


    // pahami aja ini pengunaan fungsi biasa
    // butuh pembiasan untuk bisa hafal
    // :)


    return 0;
}