
#include "CardDataBase.h"





int main() {
	CardDataBase deck;
	deck.addSerie(new Serie(Serie::CardSerie::BS, 102));
	deck.readSerieFileBS(&deck);



	//CardDataBase deck;

	//deck.addSerie(new Serie(Serie::CardSerie::JU, 64));
	//deck.addCard(deck.getSerie(Serie::CardSerie::BS), new Card("Alakazam", 1));
}


