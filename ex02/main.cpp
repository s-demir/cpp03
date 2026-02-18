#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "----------WAR START------------------------" << std::endl;
	FragTrap peach("Peach");
	ScavTrap goombo("Goombo");
	peach.attack("Goomba");
	goombo.takeDamage(30);
	goombo.beRepaired(10);
	peach.highFivesGuys();

	std::cout << "----------DESTRUCTOR START-----------------" << std::endl;
	return 0;
}