#include "87_01_getter_and_setter.hpp"

DataPlayer::DataPlayer(const char* InputName){
        setName(InputName);
    }
    void DataPlayer::setName(const char* &InputName){
        this->Name = InputName;
    }
    void DataPlayer::getStatus(){
        system("cls");
        cout << "Name Player  : " << this->Name << endl;
        cout << "Attack Power : " << this->AttackPower << endl;
        cout << "Level        : " << this->level << endl;
        cout << "Exp          : " << this->exp << endl;
    }
    void DataPlayer::HitEnemy(){
        cout << "Hit Enter Untuk Mulai Menyerang" << endl;
        cin.get();
        system("cls");
        cout << "Serang... serang..." << endl;
        exp+=20;
        cout << "Kamu mendapatkan exp : " << 20 << endl;
        if (this->exp >= 100){
            system("cls");
            cout << "LEVEL UP" << endl;
            level++;
            AttackPower+=35;
            exp = 0;
            // cin.get();
        }
        
    }
    DataPlayer::~DataPlayer(){

    }