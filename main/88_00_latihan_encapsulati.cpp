#include "88_01_Player.hpp"

// ngak ngaruh :v


void InputNickName(Player* &);

int PlayerAttack();

void SerangDanDiserang(Player* &, Player* &);


// main program padahal sependek ini :)

int main(int argc, char const *argv[]){
    Player* Player1;
    InputNickName(Player1);
    Player* Player2;
    InputNickName(Player2);
    
    SerangDanDiserang(Player1,Player2);


    return 0;
}

// gitulah bisa paham lah


void InputNickName(Player* &Input){
    system("cls");
    string InputName;
    int InputSetSenjata;
    cout << "Masukan Name      : ";
    getline(cin,InputName);
    cout << "Pilih Set Senjata : ";
    cin >> InputSetSenjata;
    Input = new Player(InputName,InputSetSenjata);
    cout << endl;
    cin.ignore();
}

int PlayerAttack(){
    int Input;
    cout << "Pilih player yang duluan menyerang (1 / 2) : ";
    cin >> Input;
    return Input;
}

void SerangDanDiserang(Player* &Player1, Player* &Player2){
    while (true){
        system("cls");

        cout << endl;
        Player1->GetStatus();
        cout << endl;
        Player2->GetStatus();
        cout << endl;

        cout << "Mulai Menyerang" << endl;
        int Giliran = PlayerAttack();
        cin.get();
        system("cls");
        
        if (Giliran == 1){
            cout << "Player 1" << endl;
            Player2->DiSerang(Player1->GetSetDamageInfo(),Player1);
            cout << endl;
            cout << "Player 2" << endl;
            Player1->DiSerang(Player2->GetSetDamageInfo(),Player2);
            cin.get();
        } else {
            cout << "Player 2" << endl;
            Player1->DiSerang(Player2->GetSetDamageInfo(),Player2);
            cout << "Player 1" << endl;
            Player2->DiSerang(Player1->GetSetDamageInfo(),Player1);
            cout << endl;
            cin.get();
        }
        

        if (Player1->GetDarah() == 0|Player2->GetDarah() == 0){
            system("cls");
            cout << endl;
            cout << "Hasil Akhir" << endl;
            Player1->GetStatus();
            cout << endl;
            Player2->GetStatus();
            cout << endl;
            break;
        }
    }
    
}

// setelah selesai komen ngak ngaruh di awal berdamage lol