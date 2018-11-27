#pragma once;
#include <iostream>
#include <string>
using namespace std;

class MusikInstrument {

private:
    string name;

public:
    MusikInstrument () {
        //cout << "Konstruktor: MusikInstrument() \n";

    }
    MusikInstrument (string name) {
        cout << "Konstruktor: MusikInstrument(string name): "<< name <<"\n";
    }
    virtual ~MusikInstrument () {
        cout << "Destruktor: ~MusikInstrument()\n";
    }
    virtual void spielen () const {
        //cout << name <<"erhält " <<"\n";
    }
    string liefereName () const {
        return name;
    }

};