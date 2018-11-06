//
// Created by kevin on 11/5/18.
//

#ifndef EX08_CREATURES_CYBERDEMON_H
#define EX08_CREATURES_CYBERDEMON_H

#include "demon.h"
using namespace std;
namespace edu { namespace sbcc { namespace cs140 {
            class CyberDemon : public Demon
            {
            public:
                virtual int getDamage () const;
                virtual const string getSpecies();

            private:
                int strength;
                int hitpoints;

            };
        }}}

#endif //EX08_CREATURES_CYBERDEMON_H
