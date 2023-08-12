#pragma once
#include <iostream>

using namespace std;

class String
{
protected:
	char* string;
	int size_string;
public:
	String(const char* _string);//конструктор с одним параметром
	String();//конструктор по умолчанию
	String(const String& s);//консруктор копирования
	~String();//деструктор
	int get_size();//мутатор
	void clear();//очистка строки
	void show();//вывод строки
	String& operator=(const String& s);//перегрузка оператора присваивания
	String& operator+(const String& s);//конкантенация строк
	String& operator+=(const String& s);//конкантенация строк
	bool operator==(const String& s);//проверка на равенство
	bool operator!=(const String& s);//проверка на неравенство
};



