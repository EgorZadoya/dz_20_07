#include "Pet.h"

int main()
{
	setlocale(LC_ALL, "ru");
	Dog d1("dio", "не пушистый");
	d1.show();
	Cat c1("кисель", "пушистый");
	c1.show();
	Parrot p1("компот", "перьевой");
	p1.show();
}