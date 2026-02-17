#include "87_01_getter_and_setter.hpp"

void ClearAreaPertempuran(){
    cout << "Area Pertempuran Akan Di Bersikan" << endl;
    cin.get();
    system("cls");
}

int main(int argc, char const *argv[]){
    DataPlayer* Player = new DataPlayer("LordTuru");
    Player->getStatus();


    for (int i = 0; i < 100; i++){
        Player->HitEnemy();
        ClearAreaPertempuran();
        Player->getStatus();
    }
    
    return 0;
}
