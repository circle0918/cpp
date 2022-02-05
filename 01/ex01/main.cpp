#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );
int main()
{
	Zombie *group = zombieHorde(10, "Zzz");	
	for (int i = 0; i < 10 ; i++)
	{
		group[i].annonce();
	}

/*		group->annonce();	
		Zombie *group1 = (group->getPtr())[1];
		group1->annonce();	*/
	return 0;
}
