#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "Default";
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap Default Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap Name Constructor called for " << this->_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->_name = other._name;
	this->_hit = other._hit;
	this->_energy = other._energy;
	this->_attack = other._attack;
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit = other._hit;
		this->_energy = other._energy;
		this->_attack = other._attack;
	}
	std::cout << "ClapTrap Copy Assignment operator called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called for " << this->_name << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left to attack!" << std::endl;
		return ;
	}
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot attack!" << std::endl;
		return ;
	}
	this->_energy -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attack << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << "is already dead!" << std::endl;
		return ;
	}
	if (this->_hit <= amount)
		this->_hit = 0;
	else
		this->_hit -= amount;

	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	std::cout << "Current HitPoint: " << this->_hit << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy left to repair!" << std::endl;
		return ;
	}
	if (this->_hit <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead and cannot be repair!" << std::endl;
		return ;
	}
	this->_energy -= 1;
	this->_hit += amount;
	std::cout << "ClapTrap " << this->_name << " repairs itself, regaining " << amount << " hit points!" << std::endl;
	std::cout << "Current HitPoint: " << this->_hit << std::endl;
}
