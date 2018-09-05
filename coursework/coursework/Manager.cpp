#include "stdafx.h"
#include "Manager.h"
#include "Factory.h"

using namespace std;

Manager::Manager()
{
	mas = NULL;
	max = 0;
}


Manager::~Manager()
{
}

void Manager::Menu() {
	int c = 0;

	while (1) {
		system("cls");
		cout << "1.Show \n2.Add \n3.Delete all\n4.Save in file \n0.Exit\n";
		cin >> c;

		switch (c) {
		case 0:
			return;
		case 1:
			if (max <= 0)
			{
				cout << "No Dogs\n";
				break;
			}
			for (int i = 0; i < max; ++i)
			{
				std::cout << i + 1 << std::endl;
				mas[i]->Show();
			}
			_getch();
			break;
		case 2:
			Menu_add();
			break;
		case 3:
			recreate();
			break;
		case 4:
			if (Save())
				cout << "Save complite\n";
			else
				cout << "File Erroe\n";
			_getch();
			break;
		}

		Sleep(1000);
		c = 0;
	}
}

void Manager::recreate() {
	if (mas != NULL && max != 0) {
		int i = 0;
		for (i = 0; i < max; ++i)
			delete mas[i];
		mas = NULL;
		max = 0;
	}
}

void Manager::resize(int a) {
	Dog**temp = NULL;
	int i = 0;
	if ((max == 0) && (mas == NULL)) {
		mas = new Dog*[a];
		max = a;
		return;
	}
	if (a == max)
		return;
	if (a > max) {
		temp = new Dog*[max];
		for (i = 0; i < max; ++i) {
			temp[i] = mas[i];
		}
		delete mas;
		mas = new Dog*[a];
		for (i = 0; i < max; ++i) {
			mas[i] = temp[i];
		}
		delete temp;
		max = a;
	}
	else {
		temp = new Dog*[max];
		for (i = 0; i < max; ++i) {
			temp[i] = mas[i];
		}
		delete mas;
		mas = new Dog*[a];
		for (i = 0; i < a; ++i) {
			mas[i] = temp[i];
		}
		for (; i < max; ++i) {
			delete temp[i];
		}
		delete temp;
		max = a;
	}
	return;
}

bool Manager::Save() {
	string NameFile = EntryNameFile();
	ofstream file(NameFile);
	if (!file.is_open()) return false;
	if (mas == NULL || max == 0) return false;

	file << max << "\n";

	for (int i = 0; i < max; ++i) {
		mas[i]->save(file);
	}

	file.close();
	return true;
}

string Manager::EntryNameFile() {
	char str[N] = "";
	cout << "Entry name file: ";
	cin >> str;
	return str;
}

void Manager::Menu_add() {
	int i = 0;
	int c = 0;
	Dog* temp;

	while (1)
	{
		system("cls");
		for (i = 0; i < MAX; ++i) {
			temp = Equipment_created_factory[i]->created();
			std::cout << i << ".";
			temp->Show_name();
			std::cout << std::endl;
			delete temp;
		}
		std::cout << std::endl << MAX << ".Exit\n\n";

		std::cin >> c;
		if (c > MAX) {
			continue;
		}
		if (c == MAX) {
			break;
		}
		resize(max + 1);
		mas[max - 1] = Equipment_created_factory[c]->created();
		mas[max - 1]->Filling();
	}
}

