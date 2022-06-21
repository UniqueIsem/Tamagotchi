#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>
using namespace std;

class Feeling{
public:
	int happy;
	int sad;
	int angry;
	int dead;
	int arista;
	int estado[5][5];
	int estadoA = happy;
	int estadoF = dead;

	void interactuar();
	void tamagotchi();
};

