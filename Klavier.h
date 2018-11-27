#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"

using namespace std;

class Klavier : public MusikInstrument{

public:
    Klavier (){
       // cout << "Wie viele Musiker sollen im Orchester spielen? ";
    }
    ~Klavier (){
        cout << "Destruktor: ~Klavier()\n ";
    }
    virtual void spielen () {

    }
};