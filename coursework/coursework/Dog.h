#pragma once

#include <string>
#include <iostream>
#include <fstream>

#define LENGHT 100 // Максимальная длина названий

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

	Dog();
	~Dog();
};

class Labrador : public Dog
{
	Labrador();
};

class Husky : public Dog
{
	Husky();
};

class Schnauzer : public Dog
{
	Schnauzer();
};

class Chihuahua : public Dog
{
	Chihuahua();
};

class Poodle : public Dog
{
	Poodle();
};

class Spaniel : public Dog
{
	Spaniel();
};
