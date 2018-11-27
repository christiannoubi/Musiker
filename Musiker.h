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
        cout << "Konstruktor: Musiker(string name) "<< name <<"\n";
    }
    virtual ~Musiker () {
        cout << "Destruktor: ~Musiker() \n";
    }
    void weiseInstrumentZu (MusikInstrument const* instrument) {
        this->instrument = instrument;
    }
    void spielen () {
        cout << name <<"erhält Klavier" <<"\n";
    }
    string liefereName () {
        return name;
    }
};