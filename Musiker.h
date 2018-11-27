#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"
using namespace std;

class Musiker: public MusikInstrument {

private:
    string name;
     MusikInstrument const* instrument;

public:
    Musiker () {

    }
    Musiker (string name) {
        //cout << "Wie viele Musiker sollen im Orchester spielen? ";
    }
    virtual ~Musiker () {
        cout << "Destruktor: ~Musiker() \n";
    }
    void weiseInstrumentZu (MusikInstrument const* instrument) {

    }
    void spielen () {

    }
    string liefereName () {

    }
};