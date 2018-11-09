//
// Created by kevin on 11/5/18.
//

#ifndef EX08_CREATURES_ELF_H
#define EX08_CREATURES_ELF_H

#include "creature.h"

using namespace std;
namespace edu { namespace sbcc { namespace cs140 {
            class Elf : public Creature
            {
            public:
                // Initialize to human, 10 strength, 10 hit points
                Elf( ): Creature() {}

                // Initialize creature to new type, strength, hit points
                // Also add appropriate accessor and mutator functions
                // for type, strength, and hit points
                Elf(int newStrength, int newHit): Creature(newStrength, newHit) {}

                virtual int getDamage () const;
                virtual const string &getSpecies() const;

            private:
                int strength;
                int hitpoints;

            };
        }}}


#endif //EX08_CREATURES_ELF_H
