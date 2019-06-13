/*
 * CardDataBase.cpp
 *
 *  Created on: Jun 12, 2019
 *      Author: berend
 */

#include "CardDataBase.h"

CardDataBase::CardDataBase()
{

}

CardDataBase::~CardDataBase()
{
	for(Serie* serie : serieList)
	{
		delete serie;
	}
}

Serie* CardDataBase::getSerie(Serie::CardSerie serieName)
{
	for(Serie* serie : serieList)
	{
		if(serie->getName() == serieName)
		{
			return serie;
		}
	}
	return 0;
}

void CardDataBase::addSerie(Serie* serie)
{
	serieList.push_back(serie);
}

void CardDataBase::addCard(Serie* serie, Card* card)
{
	for(Serie* toggleSerie : serieList)
	{
		if(toggleSerie->getName() == serie->getName())
		{
			if(card->getNumber() <= serie->getMaxCount() && card->getNumber() > 1)
			{
				serie->addCard(card);
			}
		}
	}
}

void CardDataBase::readSerieFileBS(CardDataBase& deck)
{
	std::string fileString = "../../csvfiles/BS.csv";

	std::string name;
	std::string number;

	std::ifstream myfile (fileString);
	while(myfile.good())
	{
		getline(myfile,name,',');
		getline(myfile,number,'\n');
		std::cout << "the read line says: " << name << " and number: " << number << std::endl;

		addCard(deck.getSerie(Serie::CardSerie::BS), new Card(name, number));
	}
	myfile.close();
}
