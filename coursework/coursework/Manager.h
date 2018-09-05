#pragma once

#include <Windows.h>
#include <iostream>
#include <conio.h>
#include <fstream>
#include "Dog.h"

#define N 100 // Максимальная длинна названия файла

class Manager
{
	Dog **mas;
	int max; // Размер массива

	void recreate(); // Пересоздание массива
	void resize(int); // расширение массива
	std::string EntryNameFile();
	bool Save();
	void Menu_add();
public:
	Manager();
	~Manager();

	void Menu();
};

