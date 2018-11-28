#include "Klavier.h"
#include "Trompete.h"
#include "Orchester.h"
#include <iostream>
#include <string>
using namespace std;

    MusikInstrument* musikinstrumentZufaelligErzeugen() {
    MusikInstrument* musikinstrument;
    int r = rand()%3;
    switch(r) {
    case 0:
    musikinstrument = new Klavier();
    break;
    case 1:
    musikinstrument = new Trompete();
    break;
    default:
    musikinstrument = new MusikInstrument();
    break;
    }
    return musikinstrument;
 }

 int main() {

    srand(time(0));

    Orchester orchester;

    int n;
    cout << "Wie viele Musiker sollen im Orchester spielen? ";
    cin >> n;
    cin.ignore(INT_MAX,'\n'); // entfernt übriggebliebenen Zeilenumbruch der letzten Eingabe
    cout << "++++Orchester mit " << n << " Musikern besetzen\n";
    for(int i=0; i<n; i++) {
    cout << "Wie heißt der " << i+1 << ". Musiker? ";
    string name;
    getline(cin,name);
    Musiker* musiker = new Musiker(name);
    orchester.hinzufuegen(musiker);
    musiker->weiseInstrumentZu(musikinstrumentZufaelligErzeugen());
    }

      cout << "+++ Das Konzert beginnt+++\n";
      orchester.spielen();
      cout << "+++Applaus+++\n";
      }