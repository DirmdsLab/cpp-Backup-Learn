#include "88_01_Player.hpp"

Player::Player(string InputNickName, int InputSetNum){
    this->NickName = InputNickName;
    this->SenjataGet = new Senjata(InputSetNum);
    this->InputNumSet = InputSetNum;
}

void Player::GetStatus(){
    cout << "Name    : " << this->NickName << endl;
    cout << "Level   : " << this->level << endl;
    if (this->Darah <= 0){
    cout << "Kondisi : Player Meninggal" << endl;
    } else {
    cout << "Darah   : " << this->Darah << endl;
    }
    this->SenjataGet->getSenjata();
}

void Player::DiSerang(int Input, Player* &InputSenjata){
if (InputSenjata->Darah <= 0){
    cout << "Tidak Dapat Menyerang Karena udah meninggoi" << endl;
} else {
    Senjata* GetDamage = new Senjata(Input);
    cout << "Hit enemy ke : " << ++HistoryHit << endl;
    cout << "Darah Enemy Berkurang : -" << GetDamage->getDamage() << endl;
    Darah-=GetDamage->getDamage();
    if (this->Darah <= 0){
        cout << "Enemy Mati" << endl;
        this->Darah = 0;
    }
    }
}

int Player::GetSetDamageInfo(){
    return this->InputNumSet;
}

int Player::GetDarah(){
    return this->Darah;
}