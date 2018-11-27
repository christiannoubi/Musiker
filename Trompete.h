#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"
using namespace std;

class Trompete : public MusikInstrument{

public:
    Trompete (){
       // cout << "Wie viele Musiker sollen im Orchester spielen? ";

    }
    ~Trompete (){
        cout << "Destruktor: ~Trompete()\n ";
    }
    virtual void spielen () {

    }
};