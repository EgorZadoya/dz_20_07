#pragma once
#include <iostream>

using namespace std;

class Pet
{
protected:
	char* name;
	int size_name;
public:
	Pet(const char* _name) {
		size_name = strlen(_name);
		name = new char[size_name + 1];
		for (int i = 0; i <= size_name; i++) {
			name[i] = _name[i];
		}
		
	} 
	~Pet() { delete[] name; }
};

class Dog : public Pet {
	char* character;
	int size_character;
public:
	Dog(const char* _name, const char* _character) : Pet(_name){
		size_character = strlen(_character);
		character = new char[size_character + 1];
		for (int i = 0; i <= size_character; i++) {
			character[i] = _character[i];
		}
	}
	~Dog() { delete[]character; }
	void show() {
		cout << "\t Собака " << endl;
		cout << "Имя домашнего: ";
		for (int i = 0; i < size_name; i++) {
			cout << name[i];
		}
		cout << endl << "Характеристика: ";
		for (int i = 0; i < size_character; i++) {
			cout << character[i];
		}
		cout << endl;
	}
};

class Cat : public Pet {
	char* character;
	int size_character;
public:
	Cat(const char* _name, const char* _character) : Pet(_name) {
		size_character = strlen(_character);
		character = new char[size_character + 1];
		for (int i = 0; i <= size_character; i++) {
			character[i] = _character[i];
		}
	}
	~Cat() { delete[]character; }
	void show() {
		cout << "\t Кошка " << endl;
		cout << "Имя домашнего: ";
		for (int i = 0; i < size_name; i++) {
			cout << name[i];
		}
		cout << endl << "Характеристика: ";
		for (int i = 0; i < size_character; i++) {
			cout << character[i];
		}
		cout << endl;
	}
};

class Parrot : public Pet {
	char* character;
	int size_character;
public:
	Parrot(const char* _name, const char* _character) : Pet(_name) {
		size_character = strlen(_character);
		character = new char[size_character + 1];
		for (int i = 0; i <= size_character; i++) {
			character[i] = _character[i];
		}
	}
	~Parrot() { delete[]character; }
	void show() {
		cout << "\t Попугай " << endl;
		cout << "Имя домашнего: ";
		for (int i = 0; i < size_name; i++) {
			cout << name[i];
		}
		cout << endl << "Характеристика: ";
		for (int i = 0; i < size_character; i++) {
			cout << character[i];
		}
		cout << endl;
	}
};

