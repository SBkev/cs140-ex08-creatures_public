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

#ifndef EX08_CREATURES_BALROG_H
#define EX08_CREATURES_BALROG_H

#include "demon.h"
using namespace std;
namespace edu { namespace sbcc { namespace cs140 {
    class Balrog : public Demon
    {
    public:
        virtual int getDamage () const;
        virtual const string getSpecies();

    private:
        int strength;
        int hitpoints;

    };
}}}

#endif //EX08_CREATURES_BALROG_H
