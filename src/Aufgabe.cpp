#include "../include/Aufgabe.hpp"
#include "Spielstein.hpp"

Aufgabe::Aufgabe(Spielstein* stein1_ptr, Spielstein* stein2_ptr, Spielstein* stein3_ptr, Spielstein* loesung_ptr){

}

Spielstein* Aufgabe::getSpielstein(unsigned int index){
    try
    {
        return &steine.at(index);
    }
    catch(const std::out_of_range& our)
    {
        std::cerr << our.what() << '\n';
        return nullptr;
    }
    

}

bool Aufgabe::geloest(){
    for (auto i = 0; i < felder[seite][orientierung]; i++)
    {
        
    }
    return false;
}

void Aufgabe::zeichne(){

}

void Aufgabe::loesche(){


}