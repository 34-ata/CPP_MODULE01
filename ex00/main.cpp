#include "Zombie.hpp"

Zombie*	newZombie(const std::string &name)
{
	return new Zombie(name);
}

void	randomChump(const std::string &name)
{
	Zombie zomb(name);
	zomb.announce();
}

int	main(void)
{
	Zombie* zombie = newZombie("Undead");
	zombie->announce();
	randomChump("Champ");
	delete zombie;
}