
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zbs = new Zombie[N];
	for(int i =0; i < N; i++)
		zbs[i] = Zombie(name);
	return zbs; 
}

