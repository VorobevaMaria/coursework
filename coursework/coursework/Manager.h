#pragma once

#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include "Dog.h"

#define N 100 // ������������ ������ �������� �����

class Manager
{
	Dog **mas;
	int max; // ������ �������

	void recreate(); // ������������ �������
	void resize(int); // ���������� �������
	std::string EntryNameFile();
	bool Save();
	void Menu_add();
public:
	Manager();
	~Manager();

	void Menu();
};

