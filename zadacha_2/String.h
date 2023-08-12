#pragma once
#include <iostream>

using namespace std;

class String
{
protected:
	char* string;
	int size_string;
public:
	String(const char* _string);//����������� � ����� ����������
	String();//����������� �� ���������
	String(const String& s);//���������� �����������
	~String();//����������
	int get_size();//�������
	void clear();//������� ������
	void show();//����� ������
	String& operator=(const String& s);//���������� ��������� ������������
	String& operator+(const String& s);//������������� �����
	String& operator+=(const String& s);//������������� �����
	bool operator==(const String& s);//�������� �� ���������
	bool operator!=(const String& s);//�������� �� �����������
};



