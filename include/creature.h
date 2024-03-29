//
// Created by aknight on 8/5/18.
//

#ifndef EX08_CREATURES_CREATURE_H
#define EX08_CREATURES_CREATURE_H
#include <cstdint>
#include <string>

namespace edu { namespace sbcc { namespace cs140 {

class Creature
{
protected:
    static constexpr uint32_t DEFAULT_HIT_POINTS = 10;
    static constexpr uint32_t DEFAULT_STRENGTH = 10;

private:
    int strength; // How much damage we can inflict
    int hitpoints; // How much damage we can sustain

protected:
    int getStrength() const { return strength; }
    int getHitPoints() const { return hitpoints; }

    void setStrength(int strength) { this->strength = strength; }
    void setHitPoints(int points) { hitpoints = points; }

public:
    // Initialize to human, 10 strength, 10 hit points
    Creature( ): strength(DEFAULT_STRENGTH), hitpoints(DEFAULT_HIT_POINTS) {}

    // Initialize creature to new type, strength, hit points
    // Also add appropriate accessor and mutator functions
    // for type, strength, and hit points
    Creature(int newStrength, int newHit): strength(newStrength), hitpoints(newHit) {}

    // Returns amount of damage this creature
    // inflicts in one round of combat
    virtual int getDamage() const;

    // Returns type of species
    virtual const std::string &getSpecies() const = 0;
};
}}}

// Include your Human, Cyberdemon, Balrog and Elf declarations here.
#include "human.h"
#include "demon.h"
#include "balrog.h"
#include "cyberdemon.h"
#include "elf.h"

#endif //EX08_CREATURES_CREATURE_H
