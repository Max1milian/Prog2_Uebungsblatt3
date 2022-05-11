#include "Aufgabe.hpp"
//#include "Spielstein.hpp"

Spielstein* Aufgabe::getSpielstein(unsigned int index){
    if (!(index > sizeof(steine) / sizeof(steine[0])))
    {
           return steine.at(index);
    }

    else {
        return nullptr; //falls der Index größer ist als die Anzahl von Elementen im Array geben wir Nullptr zurück,
                        //um Out ouf bounds fehler zu vermeiden
    }

}

bool Aufgabe::geloest(){
    for (auto i = 0; i < 1; i++)
    {
        for (auto j = 0; j < i; j++)
        {
            //ueberprueft zuerst vom Stein die Position und wenn das ergebnis gleich dem loesungsptr ist gibt er true zurück
            if (!(steine.at(i)->position + steine.at(i)->getPositionen()->at(j) == (loesung_ptr->position + loesung_ptr->getPositionen()->at(j))))//lol
            {
                return false;
            }   
        }
    }
    return true;
}

void Aufgabe::zeichne(){
     for (int i = 0; i < steine.size(); i++)
     {
        steine.at(i)->zeichne();
     }
     
}

void Aufgabe::loesche(){
    for (int i = 0; i < steine.size(); i++)
    {
        steine.at(i)->loesche();
    }
    

}