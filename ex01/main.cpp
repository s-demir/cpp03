#include "ScavTrap.hpp"

int main()
{
	std::cout << "----------WAR START------------------------" << std::endl;
	ScavTrap luigi("Luigi");
	luigi.attack("Goomba");
	luigi.takeDamage(20);
	luigi.beRepaired(10);
	luigi.guardGate();

	std::cout << "----------DESTRUCTOR START-----------------" << std::endl;
	return 0;
}
