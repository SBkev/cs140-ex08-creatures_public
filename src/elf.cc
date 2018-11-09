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

#include "creature.h"
#include <iostream>
using namespace std;

namespace edu { namespace sbcc { namespace cs140 {
            const static string NAME = "Elf";

            int Elf::getDamage() const {
                //Elves inflict double magical damage with a 10% change
                int damage = Creature::getDamage();
                
                if ((rand() % 100) < 10)
                {
                    cout << "Magical attack inflicts " << damage << "additional damage points!" << endl;
                    damage = damage * 2;
                }
                return damage;
            }

            const string &Elf::getSpecies() const {
                return NAME;
            }
        }}}
