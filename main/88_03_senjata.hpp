#pragma once
#include <iostream>
#include <string>
using namespace std;

class Senjata{
private:
    string SenjataName;
    float attackPower;
    float akurasi;
public:
    int SetNumber;
    Senjata(int);
    void SetSenjata();
    void getSenjata();
    float getDamage();
};



