#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"

using namespace std;

class Klavier : public MusikInstrument{

public:

    Klavier () : MusikInstrument(" Klavier "){
        cout << "Konstruktor: Klavier()\n ";
    }

    virtual ~Klavier (){
        cout << "Destruktor: ~Klavier()\n ";
    }
    virtual void spielen () const{
        cout << "Klavier klimpert\n ";
    }
};