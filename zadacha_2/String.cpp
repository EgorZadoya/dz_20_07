#include "String.h"

String :: String(const char* _string) {
	size_string = strlen(_string);
	string = new char[size_string + 1];
	for (int i = 0; i <= size_string; i++) {
		string[i] = _string[i];
	}
}

String::String() : size_string{1} {
	string = new char[size_string + 1];
	for (int i = 0; i <= size_string; i++) {
		string[i] = 0;
	}
}

String::String(const String& s) {
	string = s.string;
	size_string = s.size_string;
}

String::~String() {
	delete[] string;
}

int String::get_size() {
	return size_string;
}

void String::clear(){
	for (int i = 0; i <= size_string; i++) {
		string[i] = '\0';
	}
}

void String::show() {
	for (int i = 0; i <= size_string; i++) {
		cout << string[i];
	}
	cout << endl;
}

String& String::operator=(const String& s) {//перегрузка оператора присваивания
	delete[]string;
	size_string = s.size_string;
	string = new char[size_string + 1];
	strcpy_s(string, size_string + 1, s.string);
	return *this;
}

String& String::operator+(const String& s) {//конкантенация строк
	char* tmp = new char[size_string + s.size_string + 1];
	for (int i = 0; i < size_string; i++) {
		tmp[i] = string[i];
	}
	for (int i = 0; i < s.size_string; i++) {
		tmp[i + size_string] = s.string[i];
	}
	tmp[size_string + s.size_string] = '\0';

	delete[]string;
	size_string += s.size_string;
	string = new char[size_string + 1];
	strcpy_s(string, size_string + 1, tmp);
	delete[]tmp;
	return *this;
}

String& String::operator+=(const String& s) {//конкантенация строк
	char* tmp = new char[size_string + s.size_string + 1];
	for (int i = 0; i < size_string; i++) {
		tmp[i] = string[i];
	}
	for (int i = 0; i < s.size_string; i++) {
		tmp[i + size_string] = s.string[i];
	}
	tmp[size_string + s.size_string] = '\0';
	delete[] string;

	size_string += s.size_string;
	string = new char[size_string + 1];
	strcpy_s(string, size_string + 1, tmp);
	delete[] tmp;

	return *this;
}

bool String::operator==(const String& s) {//проверка на равенство
	if (strcmp(string, s.string) == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

bool String::operator!=(const String& s) {//проверка на неравенство
	if (strcmp(string, s.string) != 0) {
		return 1;
	}
	else {
		return 0;
	}
}
