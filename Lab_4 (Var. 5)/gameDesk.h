#pragma once
#include "banker.h"
#include "player.h"
#include "deck.h"

class GameDesk {
public:
	GameDesk();
	~GameDesk();

	void test();

	void startTheGame();

private:
	double bet;

	Banker banker;
	Player player;
	Deck* decks;
};
