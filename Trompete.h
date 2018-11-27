#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"
using namespace std;

class Trompete : public MusikInstrument{

public:
    Trompete (){
        cout << "Konstruktor: Trompete()\n ";
    }
    ~Trompete (){
        cout << "Destruktor: ~Trompete()\n ";
    }
    virtual void spielen () {

    }
};