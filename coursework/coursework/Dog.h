#pragma once

#include <string>
#include <iostream>
#include <fstream>

#define LENGHT 100 // ћаксимальна€ длина названий

using namespace std;

class Dog
{
public:
	string Breed;
	string Nickname;
	string Color;
	string Floor;
	string Date_of_Birth;
	string Size;
	string bearer_name;
	string cattery_name;
	string Character;
	string Description_of_care_for_the_coat;

	virtual void Filling();
	virtual bool save(std::ofstream &file); // сохранение
	virtual void Show();
	virtual void Show_name() = 0;

	Dog();
	~Dog();
};

class Labrador : public Dog
{
public:
	Labrador();
	void Show_name();
};

class Husky : public Dog
{
public:
	Husky();
	void Show_name();
};

class Schnauzer : public Dog
{
public:
	Schnauzer();
	void Show_name();
};

class Chihuahua : public Dog
{
public:
	Chihuahua();
	void Show_name();
};

class Poodle : public Dog
{
public:
	Poodle();
	void Show_name();
};

class Spaniel : public Dog
{
public:
	Spaniel();
	void Show_name();
};
