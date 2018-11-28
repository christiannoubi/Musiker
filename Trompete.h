#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"
using namespace std;

class Trompete : public MusikInstrument{

public:
    Trompete () : MusikInstrument(" Trompete "){
        cout << "Konstruktor: Trompete()\n ";
    }
     virtual ~Trompete (){
        cout << "Destruktor: ~Trompete()\n ";
    }
    virtual void spielen () const {
        cout << "Trompete troetet\n ";
    }
};