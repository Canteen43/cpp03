#include "ClapTrap.hpp"
// Constructor:
ClapTrap::ClapTrap(std::string set_name)
:	hitpoints(10),
	energy_points(10),
	attack_damage(10)
{}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
:	hitpoints(other.hitpoints),
	energy_points(other.energy_points),
	attack_damage(other.attack_damage)
{}
// Copy assignment operator:
ClatTrap& ClapTrap::operator=(const ClapTrap& other)
{
	hitpoints = other.hitpoints;
	energy_points = other.energy_points;
	attack_damage = other.attack_damage;
}
// Destructor:
~ClapTrap()
{}
// Add the following public member functions so the ClapTrap looks more realistic:
// •void attack(const std::string& target);
void attack(const std::string& target);
// •void takeDamage(unsigned int amount);
void takeDamage(unsigned int amount);
// •void beRepaired(unsigned int amount);
void beRepaired(unsigned int amount);