#include <iostream>
// using namespace std; // ini nane space dari iostream
namespace Hmph{
    int fungsi(int x){
        return x;
    }
    void cout(){
        std::cout << "Saya npc asli dunia ini :v" << std::endl;
    }
}
// berusan dengan isekai sebelah
#include "68_01_isekai_sebelah.h"

int main(){
    std::cout << "Hai para para npc :)" << std::endl; // std dari iostream
    Hmph::cout(); // cout dari Hmph gitu lah 
    Isekai::Isekai_Sebelah();
    std::cout << std::endl;

    // bisa untuk pemanggilan fungsi (hal normal lah)
    std::cout << "Nilai x = 5 maka outputnya : " << Hmph::fungsi(5) << std::endl;
    return 0;
}