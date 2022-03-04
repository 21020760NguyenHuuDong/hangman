#ifndef DO_PLAYER_H_
#define DO_PLAYER_H_

#include "function.h"
#include "draw.h"

void gameStart(bool& hasPlay);
void readyStart();
void doGamePlayer(const vector<string>& fullWord);
void endGame(bool& hasPlay);
#endif // DO_PLAYER_H_
