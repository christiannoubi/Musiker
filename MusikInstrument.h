#pragma once;
#include <iostream>
#include <string>
using namespace std;

class MusikInstrument {

private:
    string name;

public:
    MusikInstrument () {
       // cout << "Wie viele Musiker sollen im Orchester spielen? ";
    }
    MusikInstrument (string name) {
       // cout << "Wie viele Musiker sollen im Orchester spielen? ";
    }
    virtual ~MusikInstrument () {
        cout << "Destruktor: ~MusikInstrument()\n";
    }
    virtual void spielen () {

    }
    string liefereName () {

    }

};