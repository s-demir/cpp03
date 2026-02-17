#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
	std::cout << "FragTrap Name Constructor called for " << this->_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	*this = other;
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) 
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
	}
	std::cout << "FragTrap Copy Assignment Operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() 
{
	std::cout << "FragTrap Destructor called for " << this->_name << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
	if (this->_hit <= 0)
	{
		std::cout << "FragTrap " << this->_name << " is dead and cannot high5s" << std::endl;
	}
	std::cout << "FragTrap " << this->_name << " wanna high5s!" << std::endl;
}
