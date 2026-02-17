#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	std::cout << "ScavTrap Name Constructor called for " << this->_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "ScavTrap Assignment Operator called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called for " << this->_name << std::endl; 
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " has no energy left!" << std::endl;
		return ;
	}
	if (this->_hit <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
		return ;
	}
	this->_energy -= 1;
	std::cout << "ScavTrap " << this->_name << " attacks " << target
				<< " HARDLY, causing " << this->_attack << " points of damage!" << std::endl;
}			

void	ScavTrap::guardGate()
{
	if (this->_hit <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " cannot guardGate cause it's dead!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in guardGate mode." << std::endl; 
}
