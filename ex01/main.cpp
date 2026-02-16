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
