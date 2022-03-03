#ifndef FUNCTION_H_
#define FUNCTION_H_

#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <ctime>

using namespace std;

#define MAX_NUMBER_BAD_GUESS 6

void setWord(vector<string>& fullWord);
string chooseAWord(const vector<string>& fullWord);
char getAChar();
bool findChar(char guessChar, string secretWord);
void updateHadChar(string& guessWord, char guessChar, string secretWord);
void updateNotHadChar(int& numberBadGuess, set<char>& guessBadChar, char guessChar);

#endif // FUNCTION_H_
