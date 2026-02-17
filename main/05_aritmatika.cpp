#include <iostream>
using namespace std;

int main(){
    int bilangan1, bilangan2;
    bilangan1 = 5;
    bilangan2 = 7;

    // aritmatika ( + , - , * , / ) itu aja sih keknya :v 
    cout << "Jadi bilangan dasar nya adalah : " << bilangan1 << " ";
    cout << "Dan : " << bilangan2 << endl; // btw jangan pusing cuma saya buat ke baris baru kok

    // mulai sesuai rumus di atas

    cout << "Bilangan tersebut bisa di tambahkan : " << bilangan1 + bilangan2 << endl; // tambahakan kek gitu pahami aja :v (semuanya gitu - , * , / , %(modulus) ) 
    // bisa buat int baru juga
    int hasil;
    hasil = bilangan1 - bilangan2;
    cout << "Hasil dikurangkan nya : " << hasil << endl; // tergantung mana nyamannya

    // seterusnya sama aja
    cout << "Hasil kali : " << bilangan1 * bilangan2 << endl;
    cout << "Hasil bagi : " << bilangan1 / bilangan2 << endl;

    // terakhir modulus (di bagi terus sisa berapa)
    cout << "Hasil modulus : " << bilangan2 % bilangan1 << endl; // saya balik ya supaya ada hasilnya :)

    // akhir

    return 0;
}
