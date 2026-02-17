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

int main()
{
    std::cout << "--------basic actions----------" << std::endl;
    ClapTrap mario("Mario");
    mario.attack("Goomba");
    mario.takeDamage(5);
    mario.beRepaired(3);

    std::cout << "------test copy constructor------" << std::endl;
    ClapTrap luigi(mario);
    luigi.attack("Koopa");
    luigi.beRepaired(1);

    std::cout << "---------test assignment operator----------" << std::endl;
    ClapTrap peach("Peach");
    peach = mario;
    peach.attack("Bowser Jr");

    std::cout << "-------test low energy----------------" << std::endl;
    int i = 0;
    while (i < 12)
    {
        mario.attack("Bowser");
        i++;
    }

    std::cout << "---------test zero hit points-------------" << std::endl;
    mario.takeDamage(100);
    mario.attack("Boo");
    mario.beRepaired(10);

    return 0;
}