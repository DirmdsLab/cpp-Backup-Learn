#include "88_03_senjata.hpp"

Senjata::Senjata(int InputSet){
    this->SetNumber = InputSet;
    Senjata::SetSenjata();
}

void Senjata::SetSenjata(){
    // set 1
    switch (this->SetNumber){
    case 1:
        this->SenjataName = "Tarompa Japang";
        this->attackPower = 20.3;
        this->akurasi = 70;
        break;
    case 2:
        this->SenjataName = "batu";
        this->attackPower = 50.6;
        this->akurasi = 90;
        break;
    case 3:
        this->SenjataName = "kayu";
        this->attackPower = 30.5;
        this->akurasi = 80;
        break;
    // case 4:
    //     this->SenjataName = "hp vivo";
    //     this->attackPower = 90;
    //     this->akurasi = 80;
    //     cuma candaan di tempat saya :v
    default:
        cout << "eror" << endl;
        break;
    }
    
}

void Senjata::getSenjata(){
        cout << "Senjata : " << this->SenjataName << endl;
        cout << "Attack  : " << this->attackPower << endl;
        cout << "Akurasi : " << this->akurasi << endl;
}

float Senjata::getDamage(){
    return this->attackPower;
}
