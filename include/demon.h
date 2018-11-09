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

#ifndef EX08_CREATURES_DEMON_H
#define EX08_CREATURES_DEMON_H

#include "creature.h"

namespace edu { namespace sbcc { namespace cs140 {
            class Demon : public Creature
            {
            public:
                // Initialize to human, 10 strength, 10 hit points
                Demon( ): Creature( ) {}

                // Initialize creature to new type, strength, hit points
                // Also add appropriate accessor and mutator functions
                // for type, strength, and hit points
                Demon(int newStrength, int newHit): Creature(newStrength, newHit) {}


                virtual int getDamage () const;
                virtual const std::string &getSpecies() const = 0;

            private:
                int strength;
                int hitpoints;
            };
        }}}

#endif //EX08_CREATURES_DEMON_H
