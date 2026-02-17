#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n\033[1;33m--- CREATING SCAVTRAP ---\033[0m" << std::endl;
    // Önce ClapTrap doğacak, SONRA ScavTrap doğacak.
    ScavTrap guardian("GUARDIAN");

    std::cout << "\n\033[1;33m--- TESTING STATS ---\033[0m" << std::endl;
    // Saldırı gücü 20 olmalı (ClapTrap'te 0 idi)
    guardian.attack("Intruder");

    std::cout << "\n\033[1;33m--- SPECIAL ABILITY ---\033[0m" << std::endl;
    guardian.guardGate();

    std::cout << "\n\033[1;33m--- DESTRUCTION ---\033[0m" << std::endl;
    // Önce ScavTrap ölecek, SONRA ClapTrap ölecek (Stack mantığı - LIFO)
    return 0;
}


int main()
{
    std::cout << "--------basic actions----------" << std::endl;
    ScavTrap luigi("Luigi");
    luigi.attack("Goomba");
    luigi.takeDamage(20);
    luigi.beRepaired(10);
    luigi.guardGate();

    std::cout << "------test copy constructor------" << std::endl;
    ScavTrap mario(luigi);
    mario.attack("Koopa");
    mario.guardGate();

    std::cout << "---------test assignment operator----------" << std::endl;
    ScavTrap yoshi("Yoshi");
    yoshi = luigi;
    yoshi.attack("Bowser");

    std::cout << "-------test low energy----------------" << std::endl;
    int i = 0;
    while (i < 55)
    {
        luigi.attack("Koopa Troopa");
        i++;
    }
    luigi.beRepaired(1);

    std::cout << "---------test zero hit points-------------" << std::endl;
    luigi.takeDamage(1000);
    luigi.attack("Boo");
    luigi.guardGate();

    return 0;
}
