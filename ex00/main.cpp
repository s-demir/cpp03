#include "ClapTrap.hpp"

int main()
{
	std::cout << "----------WAR START------------------------" << std::endl;
	ClapTrap mario("Mario");
	ClapTrap goombo("Goombo");
	mario.attack("Goomba");
	goombo.takeDamage(5);
	goombo.beRepaired(3);

	std::cout << "--------COPY CONSTRUCTOR WORKING-----------" << std::endl;
	ClapTrap luigi(mario);
	luigi.attack("Koopa");
	luigi.beRepaired(1);

	std::cout << "----------ASSIGNMENT OPERATOR WORKING------" << std::endl;
	ClapTrap peach;
	peach = mario;
	peach.attack("Bowser Jr");

	std::cout << "----------LOW ENERGY TESTS-----------------" << std::endl;
	int i = 0;
	while (i < 11)
	{
		mario.attack("Bowser");
		i++;
	}

	std::cout << "----------HİT POINTS TESTS-----------------" << std::endl;
	mario.takeDamage(100);
	mario.attack("Boo");
	mario.beRepaired(10);

	std::cout << "----------DESTRUCTOR START-----------------" << std::endl;
	return (0);
}