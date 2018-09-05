#include "stdafx.h"
#include "Dog.h"


Dog::Dog(){

}

Dog::~Dog(){
	 
}


void Dog::Filling() {
	char Temp[LENGHT];

	cout << "Add dog.\n";

	cout << "Nickname: ";
	cin >> Temp;
	Nickname = Temp;

	cout << "Color: ";
	cin >> Temp;
	Color = Temp;

	cout << "Floor: ";
	cin >> Temp;
	Floor = Temp;

	cout << "Date_of_Birth: ";
	cin >> Temp;
	Date_of_Birth = Temp;

	cout << "Size: ";
	cin >> Temp;
	Size = Temp;

	cout << "bearer_name: ";
	cin >> Temp;
	bearer_name = Temp;

	cout << "cattery_name: ";
	cin >> Temp;
	cattery_name = Temp;

	cout << "Character: ";
	cin >> Temp;
	Character = Temp;

	cout << "Description_of_care_for_the_coat: ";
	cin >> Temp;
	Description_of_care_for_the_coat = Temp;
}

bool Dog::save(std::ofstream &file) {
	if (!file.is_open())
		return false;

	file << Breed << "\n";

	file << Nickname << "\n";
	file << Color << "\n";

	file << Floor << "\n";
	file << Date_of_Birth << "\n";
	file << Size << "\n";
	file << bearer_name << "\n";
	file << cattery_name << "\n";
	file << Character << "\n";
	file << Description_of_care_for_the_coat << "\n";

	return true;
}

void Dog::Show() {
	cout << "Breed: " << Breed << endl;

	cout << "Nickname: " << Nickname << endl;
	cout << "Color: " << Color << endl;
	cout << "Floor: " << Floor << endl;
	cout << "Date_of_Birth: " << Date_of_Birth << endl;
	cout << "Size: " << Size << endl;
	cout << "bearer_name: " << bearer_name << endl;
	cout << "cattery_name: " << cattery_name << endl;
	cout << "Character: " << Character << endl;
	cout << "Description_of_care_for_the_coat: " << Description_of_care_for_the_coat << endl;
}

Labrador::Labrador(){
	Breed = "Labrador";
}

void Labrador::Show_name() {
	cout << "Labrador";
}

Husky::Husky() {
	Breed = "Husky";
}

void Husky::Show_name() {
	cout << "Husky";
}

Schnauzer::Schnauzer() {
	Breed = "Schnauzer";
}

void Schnauzer::Show_name() {
	cout << "Schnauzer";
}

Chihuahua::Chihuahua() {
	Breed = "Chihuahua";
}

void Chihuahua::Show_name() {
	cout << "Chihuahua";
}

Poodle::Poodle() {
	Breed = "Poodle";
}

void Poodle::Show_name() {
	cout << "Poodle";
}

Spaniel::Spaniel() {
	Breed = "Spaniel";
}

void Spaniel::Show_name() {
	cout << "Spaniel";
}

