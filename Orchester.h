#pragma once;
#include <iostream>
#include <string>
#include <vector>
#include "Musiker.h"
using namespace std;

class Orchester: public Musiker{

private:
    vector<const Musiker*>  musiker;

public:
    Orchester () {
        cout << "Konstruktor: Orchester() \n";

    }
    virtual ~Orchester () {
        cout << "Destruktor: ~Orchester() \n";
    }
    void spielen () {

    }
    void hinzufuegen (Musiker* musiker1) {
        musiker.push_back(musiker1);
    }
};