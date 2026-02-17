#pragma once
#include <iostream>
#include <string>
#include "88_03_senjata.hpp"

using namespace std;

class Player{
private:
    string NickName;
    int level = 1;
    float Darah = 100;
    Senjata* SenjataGet;
public:
    int InputNumSet; // simpat set senjata
    int HistoryHit = 0;

    Player(string, int);
    void GetStatus();
    void DiSerang(int, Player* &);
    int GetSetDamageInfo();
    int GetDarah();
};

