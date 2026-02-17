#include <iostream>
#include <string>

using namespace std;

class DataPlayer{
private:
    string Name;
    float power;
    int level;
public:
    DataPlayer(const char* Name = "Player1", float Power = 0.1, int level = 1){
        this->Name = Name;
        this->power = Power;
        this->level = level;
    }
    void PrintData(){
        cout << "Name  : " << this->Name << endl;
        cout << "Power : " << this->power << endl;
        cout << "Level : " << this->level << endl;
    }
};


int main(int argc, char const *argv[]){
    // data 1
    DataPlayer Player1("Lord Turu",10.5,2);
    Player1.PrintData();
    cout << endl;

    // data 2
    DataPlayer Player2 = DataPlayer();
    Player2.PrintData();
    cout << endl;

    // data 3
    DataPlayer* Player3 = new DataPlayer("Kang Turu");
    Player3->PrintData();
    cout << endl;

    // data 4
    DataPlayer* Player4;
    Player4 = new DataPlayer();
    Player4->PrintData();
    cout << endl;

    return 0;
}
