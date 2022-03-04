#ifndef DRAW_H_
#define DRAW_H_

#include "function.h"
#include "figure.h"

using namespace std;

const int NUMBER_FIGURE_END_GAME = 8;
void renderGame(int numberBadGuess, const set<char>& guessedBadChar, string guessWord);
void renderResultGame(string guessWord, string secretWord);
void renderResultWinGame();
void renderResultLossGame(const string& secretWord);

#endif // DRAW_H_
