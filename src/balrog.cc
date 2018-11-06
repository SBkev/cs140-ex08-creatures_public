/**
 * CS 140 Object-Oriented Programming Using C++
 * CRN: [33323]
 * Assignment: EX08 - Creatures
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @keshields@pipeline.sbcc.edu
 */

#include "balrog.h"
#include <iostream>
using namespace std;

namespace edu { namespace sbcc { namespace cs140 {
    int Balrog::getDamage() const {
        int damageTotal = 0;

        int damage = (rand() % strength) + 1;
        cout << "Balrog speed attack inflicts " << damage << "additional damage points!" << endl;

        damageTotal = damage + Demon::getDamage();
        return damageTotal;
    }

    const string Balrog::getSpecies() {
        return "Balrog";
    }
}}}
