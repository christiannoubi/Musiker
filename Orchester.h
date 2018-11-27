#pragma once;
#include <iostream>
#include <string>
#include "Musiker.h"
using namespace std;

class Orchester: public Musiker{

private:
    vector<Musiker> const* musiker;

public:
    Orchester () {
        //cout << "Wie viele Musiker sollen im Orchester spielen? ";
    }
    virtual ~Orchester () {
        cout << "Destruktor: ~Orchester() \n";
    }
    void spielen () {

    }
    void hinzufuegen (Musiker const* musiker) {

    }
};