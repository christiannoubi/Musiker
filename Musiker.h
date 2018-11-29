#pragma once;
#include <iostream>
#include <string>
#include "MusikInstrument.h"
using namespace std;

class Musiker {

private:
    string name;
     MusikInstrument const* instrument;

public:
    Musiker () {

    }
    Musiker (string name) {
        this->name = name;
        cout << "Konstruktor: Musiker(string name) "<< this->name <<"\n";
    }
     virtual ~Musiker () {
        cout << "Destruktor: ~Musiker() "<< this->name <<"\n";
        delete instrument;

    }

    void weiseInstrumentZu (MusikInstrument const* instrument) {
        this->instrument = instrument;
    }
    void spielen () const {
        cout << this->name <<" spielt " <<instrument->liefereName()<<"\n";
        instrument->spielen();
    }
    string liefereName () const {
        return name;
    }
};