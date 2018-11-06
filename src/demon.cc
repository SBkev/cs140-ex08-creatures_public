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

#include "demon.h"
#include <iostream>
using namespace std;

namespace edu { namespace sbcc { namespace cs140 {
            int Demon::getDamage() const {
                //returns damage equal to sum of
                int damageTotal = 0;
                int damageBonus = 0;

                if ((rand() % 100) < 5)
                {
                    damageBonus = 50;
                    cout << "Demonic attack inflicts " << damageBonus << "additional damage points!" << endl;
                }

                damageTotal = damageBonus + Creature::getDamage();
                return damageTotal;
            }
        }}}
