#pragma once

#include "Dog.h"

#define MAX ( sizeof( Equipment_created_factory ) / 4 ) // всего подключенных документов

class Factory {
public:
	virtual Dog* created() = 0;
};

template <class T>
class Factory_doc : public Factory {
public:
	Dog * created() { return (new T); }
};

Factory *Equipment_created_factory[] =
{
	new Factory_doc<Labrador>,
	new Factory_doc<Husky>,
	new Factory_doc<Schnauzer>,
	new Factory_doc<Chihuahua>,
	new Factory_doc<Poodle>,
	new Factory_doc<Spaniel>
};


