/*
 * Card.h
 *
 *  Created on: Jun 12, 2019
 *      Author: berend
 */

#ifndef CARD_H_
#define CARD_H_

#include <string>

class Card
{

public:
	explicit Card(std::string cardName, unsigned int number);

	Card(const Card& source) = delete;
	~Card();

	std::string getName();
	unsigned int getNumber();
	bool getOwned();

	void setName(std::string name);
	void setNumber(unsigned int number);
	void setOwned(bool owned);

	//getnextevolution


private:
	std::string m_cardName;
	unsigned int m_number;
	bool m_owned;
};

#endif //Card.h
