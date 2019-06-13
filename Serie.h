#ifndef SERIE_H
#define SERIE_H

#include <vector>
#include "Card.h"

class Serie
{

public:

	enum class CardSerie {BS, JU, FO, B2, TR, G1, G2, N1, N2, N3, N4, LC, EX, AQ, SK, RS, SS, DR, MA, HL, FG, TRR, DX,
						EM, UF, DS, LM, HP, CG, DF, PK, DP, MT, SW, GE, MD, LA, SF, PL, RR, SV, AR, HS, UL, US, TM, COL,
						BLW, EPO, NVI, NXD, DEX, DRX, BCR, PLS, PLF, PLB, LTR, XY, FLF, FFI, PHF, PRC, ROS, AOR, BKT,
						BKP, GEN, FCO, STS, EVO, SUM, GRI, BUS, SLG, CIN, UPR, FLI, CES, DRM, LOT, TEU, DEP, UNB};

	explicit Serie(CardSerie name, unsigned int maxCount);
	Serie(const Serie& source) = delete;
	~Serie();

	CardSerie getName();
	unsigned int getMaxCount();
	std::vector<Card*> getCardList();

	void setName(CardSerie name);
	void setMaxCount(unsigned int maxCount);
	void setCardList(std::vector<Card*> cardList);

	void addCard(Card* card);

private:
	CardSerie m_name;
	unsigned int m_maxCount;
	std::vector<Card*> m_cardList;
};
#endif //SERIE_H
