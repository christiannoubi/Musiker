#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"

using namespace std;

class Klavier : public MusikInstrument{

public:
    Klavier (){
        cout << "Konstruktor: Klavier()\n ";
    }
    ~Klavier (){
        cout << "Destruktor: ~Klavier()\n ";
    }
    virtual void spielen () {

    }
};