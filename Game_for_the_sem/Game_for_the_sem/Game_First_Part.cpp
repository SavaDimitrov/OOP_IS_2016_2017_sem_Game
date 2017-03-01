#include <iostream>

using namespace std;

	//struct Hero 
class Hero {

private:
	char name[101];
	int currentHealth;
	int maxHealth;
	unsigned int level; //unsigned int so that it cant get negative
	unsigned int exp; //unsigned int so that it cant get negative
	int strength;
	int speed;
	int intellect;

public:
	void print_LvL_Exp() {
		cout << "Level: " << level << endl;
		cout << "Experience: " << exp << endl;
	}

	void in_it(int _currHealth, unsigned _level, unsigned _exp,
					int _strength, int _speed, int _intellect) {
		currentHealth = _currHealth;
		maxHealth = currentHealth;
		level = _level;
		exp = _exp;
		strength = _strength;
		speed = _speed;
		intellect = _intellect;

		print_LvL_Exp();
	}
	
};




int main() {

	Hero MoonLeaf;

	MoonLeaf.in_it(100, 1, 0, 10, 10, 10);
	MoonLeaf.print_LvL_Exp();



	system("pause");
	return 0;
}