#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

	//struct Hero 
class Hero {

private:
	char* name; 
	int health;
	unsigned level;
	unsigned experience;
	int strength;
	int speed;
	int intellect;

public:

	Hero()
	{
		strcpy(name, NULL);
		health = 10;
		level = 1;
		experience = 0;
		strength = 0;
		speed = 0;
		intellect = 0;

	}

	Hero(Hero const& h)
	{
		strcpy(name, h.name);
		health = h.health;
		level = h.level;
		experience = h.experience;
		strength = h.strength;
		speed = h.speed;
		intellect = h.intellect;
	}

	Hero(char* _name, int _health, unsigned _level, unsigned _experience,
		int _strength, int _speed, int _intellect) {
		
		setName(_name);
		sethealth(_health);
		setLevel(_level);
		setExperience(_experience);
		setStrength(_strength);
		setSpeed(_speed);
		setIntellect(_intellect);
	}

	char* getName() const { return name; }
	int getHealth()const { return health; }
	unsigned getLevel() const { return level; }
	unsigned getExperience() const { return experience; }
	int getStrength() const { return strength; }
	int getSpeed() const { return speed; }
	int getIntellect() const { return intellect; }

	void setName(char* newName)
	{
		if (name != NULL) {
			delete name;
		}

		name = new char[strlen(newName) + 1];
		strcpy(name, newName);
	}

	void sethealth(int _health)
	{
		if (_health > 0)
		{
			health = _health;
		}
		else 
			cout << "Not a valid value!";
	}

	void setLevel(unsigned _level)
	{
		if (_level >= level)
		{
			level = _level;
		}
		else
			cout << "Not a valid value!";
	}

	void setExperience(unsigned _experience) 
	{
		if (_experience >= 0) {
			experience = _experience;
		}
		else 
			cout << "Not a valid value!";
	}

	void setStrength(int _strength)
	{
		strength = _strength;
	}

	void setSpeed(int _speed)
	{
		if (_speed > 0)
		{
			speed = _speed;
		}
		else
			cout << "Not a valid value!";
	}

	void setIntellect(int _intellect)
	{
		if (_intellect > 0)
		{
			intellect = _intellect;
		}
		else
			cout << "Not a valid value!";
	}
	
	void heroDescription()
	{
		cout << '\t' <<"Your hero details are:" << '\n';
		cout << " " << "Hero name: " << getName() << '\n';
		cout << " " << "Hero health: " << getHealth() << '\n';
		cout << " " << "Hero level: " << getLevel() << '\n';
		cout << " " << "Hero experience: " << getExperience() << '\n';
		cout << " " << "Hero strength: " << getStrength() << '\n';
		cout << " " << "Hero speed: " << getSpeed() << '\n';
		cout << " " << "Hero intellect: " << getIntellect() << '\n' << '\n';
	}
};




int main() {
	//Hero ThirdSlot;
	//Hero FirstSlot("Clementia", 1200, 1, 0, 250, 60, 10);
	////Hero SecondSlot("Alythai", 800, 1, 0, 10, 60, 250);

	//Hero hero(ThirdSlot);

	//FirstSlot.heroDescription();
	////SecondSlot.heroDescription();
	//ThirdSlot.heroDescription();

		//Dynamic memory
	//double *array = new double; // delete array;
	double *array1 = new double[4]; //delete[] array1;
	double sum = 0;

	for (int i = 0; i < 4; i++)
	{
		cin >> array1[i];
		sum += array1[i];
	}

	cout << sum / 4 << '\n';
	delete[] array1;

	//double **matrix = new double*[10]; // ** shows that we will have an array of pointers.
	//for (int i = 0; i < 10; i++)
	//{
	//	matrix[i] = new double[10];
	//}

	system("pause");
	return 0;
}