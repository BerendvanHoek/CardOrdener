/*
 * Card.cpp
 *
 *  Created on: Jun 12, 2019
 *      Author: berend
 */

#ifndef SRC_CARD_CPP_
#define SRC_CARD_CPP_

#include "Card.h"

Card::Card(std::string cardName, unsigned int number)
{
	m_cardName = cardName;
	m_number = number;
	m_owned = true;
}

Card::~Card()
{

}

//----------------------------------------------gets
std::string Card::getName()
{
	return m_cardName;
}

unsigned int Card::getNumber()
{
	return m_number;
}

bool Card::getOwned()
{
	return m_owned;
}
//--------------------------------------------sets

void Card::setName(std::string name)
{
	m_cardName = name;
}

void Card::setNumber(unsigned int number)
{
	m_number = number;
}

void Card::setOwned(bool owned)
{
	m_owned = owned;
}

#endif /* SRC_CARD_CPP_ */
