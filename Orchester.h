#pragma once;
#include <iostream>
#include <string>
#include <vector>
#include "Musiker.h"
using namespace std;

class Orchester{

private:
    vector<const Musiker*>  musiker;

public:
    Orchester () {
        cout << "Konstruktor: Orchester() \n";

    }
    virtual ~Orchester () {
        cout << "Destruktor: ~Orchester() \n";
        for (int i = 0; i< musiker.size();i++) {
            delete musiker[i];

        }
    }

    void spielen () {
    for (int i = 0; i< musiker.size();i++) {
        this->musiker[i]->liefereName();
        this->musiker[i]->spielen();
        }
    }
    void hinzufuegen (Musiker const* musiker) {
        this->musiker.push_back(musiker);
    }
};