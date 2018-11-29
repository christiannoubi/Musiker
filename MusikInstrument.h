#pragma once;
#include <iostream>
#include <string>
using namespace std;

class MusikInstrument {

private:
    string name;

public:
    MusikInstrument () {
        this->name = "Irgendein instrument";
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
        cout << "Irgendein Musikinstrument erklingt irgendwie\n";
    }
    string liefereName () const {
        return name;
    }

};