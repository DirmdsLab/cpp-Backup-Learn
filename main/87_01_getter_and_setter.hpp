#pragma once
#include <iostream>
#include <string>


using namespace std;

class DataPlayer{
private:
    string Name;
    double AttackPower = 50;
    int level = 1;
    int exp = 0;
public:
    DataPlayer(const char*);
    void setName(const char* &);
    void getStatus();
    void HitEnemy();
    ~DataPlayer();
};


