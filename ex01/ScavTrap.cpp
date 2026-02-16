#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}
