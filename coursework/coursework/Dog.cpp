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

Labrador::Labrador(){
	Breed = "Labrador";
}

Husky::Husky() {
	Breed = "Husky";
}

Schnauzer::Schnauzer() {
	Breed = "Schnauzer";
}

Chihuahua::Chihuahua() {
	Breed = "Chihuahua";
}

Poodle::Poodle() {
	Breed = "Poodle";
}

Spaniel::Spaniel() {
	Breed = "Spaniel";
}

