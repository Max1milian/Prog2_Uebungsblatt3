#include "../include/Aufgabe.hpp"
#include "Spielstein.hpp"

Aufgabe::Aufgabe(Spielstein* stein1_ptr, Spielstein* stein2_ptr, Spielstein* stein3_ptr, Spielstein* loesung_ptr){

}

Spielstein* Aufgabe::getSpielstein(unsigned int index){
    if (!(index > sizeof(steine) / sizeof(steine[0])))
    {
           return &steine[index];
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
            if (true)
            {
                return true;
            }
            
        }
        
    }
    return false;
}

void Aufgabe::zeichne(){

}

void Aufgabe::loesche(){


}