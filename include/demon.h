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
                virtual int getDamage () const; //TODO: look at book for this
                virtual const std::string &getSpecies() const = 0; //TODO: should const=0 be here? copied from Alan's parent class

            private:
                int strength;
                int hitpoints;
            };
        }}}

#endif //EX08_CREATURES_DEMON_H
