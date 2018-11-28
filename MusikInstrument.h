#pragma once;
#include <iostream>
#include <string>
using namespace std;

class MusikInstrument {

private:
    string name;

public:
    MusikInstrument () {
        cout << "Konstruktor: MusikInstrument() \n";

    }
    MusikInstrument (string name) {
        this->name = name;
        cout << "Konstruktor: MusikInstrument(string name): "<< this->name <<"\n";
    }

    virtual ~MusikInstrument () {
        cout << "Destruktor: ~MusikInstrument()"<<this->name<<"\n";
    }
    virtual void spielen () const {
        cout << "Musikinstrument spielt irgendwie\n";
    }
    string liefereName () const {
        return name;
    }

};