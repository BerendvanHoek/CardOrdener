#include "Serie.h"

Serie::Serie(Serie::CardSerie name, unsigned int maxCount)
{
	m_name = name;
	m_maxCount = maxCount;
}

Serie::~Serie()
{

}

Serie::CardSerie Serie::getName()
{
	return m_name;
}

unsigned int Serie::getMaxCount()
{
	return m_maxCount;
}

std::vector<Card*> Serie::getCardList()
{
	return m_cardList;
}

void Serie::setName(CardSerie name)
{
	m_name = name;
}

void Serie::setMaxCount(unsigned int maxCount)
{
	m_maxCount = maxCount;
}

void Serie::setCardList(std::vector<Card*> cardList)
{
	m_cardList = cardList;
}

void Serie::addCard(Card* card)
{
	m_cardList.push_back(card);
}
