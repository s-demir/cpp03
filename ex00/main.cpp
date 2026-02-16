#include "ClapTrap.hpp"

int main()
{
    ClapTrap hero("HERO");
    ClapTrap villain("VILLAIN");

    hero.attack("VILLAIN");
    villain.takeDamage(3);
    villain.beRepaired(5);

	villain.takeDamage(20);
    villain.attack("HERO");
    villain.beRepaired(10);

	return (0);
}
//bunu değişeyim ya