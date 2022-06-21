#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <list>
using namespace std;

class Feeling{
public:
	int estadoA;
	//int estadoA = estado[estadoA][arista];
	int estadoF = dead;
	int arista;
	int estado[5][5];
	int happy = estado[1][0] || estado[2][1] || estado[2][4] || estado[3][1];
	int sad = estado[2][0] || estado[1][2] || estado[3][3];
	int angry = estado[3][0] || estado[2][2];
	int dead = estado[4][0] || estado[3][2];

	void options();
	void tamagotchi();
};

