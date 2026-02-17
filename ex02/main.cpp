#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "--------ClapTrap basic actions----------" << std::endl;
    ClapTrap mario("Mario");
    mario.attack("Goomba");
    mario.takeDamage(5);
    mario.beRepaired(3);

    std::cout << "--------ScavTrap basic actions----------" << std::endl;
    ScavTrap luigi("Luigi");
    luigi.attack("Koopa");
    luigi.takeDamage(20);
    luigi.beRepaired(10);
    luigi.guardGate();

    std::cout << "--------FragTrap basic actions----------" << std::endl;
    FragTrap peach("Peach");
    peach.attack("Goomba");
    peach.takeDamage(30);
    peach.beRepaired(10);
    peach.highFivesGuys();

    std::cout << "------FragTrap copy constructor------" << std::endl;
    FragTrap daisy(peach);
    daisy.attack("Koopa Troopa");
    daisy.highFivesGuys();

    std::cout << "---------FragTrap assignment operator----------" << std::endl;
    FragTrap yoshi("Yoshi");
    yoshi = peach;
    yoshi.attack("Bowser Jr");

    std::cout << "-------FragTrap low energy----------------" << std::endl;
    int i = 0;
    while (i < 110)
    {
        peach.beRepaired(1);
        i++;
    }
    peach.attack("Bowser");

    std::cout << "---------FragTrap zero hit points-------------" << std::endl;
    peach.takeDamage(10000);
    peach.attack("Boo");
    peach.highFivesGuys();
    peach.beRepaired(10);

    return 0;
}