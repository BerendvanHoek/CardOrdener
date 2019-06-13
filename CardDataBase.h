#ifndef CARDDATABASE_H
#define CARDDATABASE_H

#include <vector>
#include "Serie.h"
#include "Card.h"
#include <iostream>
#include <fstream>
class CardDataBase
{

public:
	explicit CardDataBase();
	CardDataBase(const CardDataBase& source);
	~CardDataBase();

	Serie* getSerie(Serie::CardSerie serieName);

	void addSerie(Serie* serie);
	void addCard(Serie* serie, Card* card);
	void readSerieFileBS(CardDataBase& deck);

private:
	std::vector<Serie*> serieList;
};
#endif //SERIE_H
