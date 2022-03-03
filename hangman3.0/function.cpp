
#include "function.h"

char getAChar()
{
    cout << "enter the character of your choice: ";
    char guessChar; cin >> guessChar;
    return guessChar;
}

void setWord(vector<string>& fullWord)
{
    fstream inFile("data//Ogden_Picturable_200.txt");
    string word;
    while(inFile >> word)
    {
        fullWord.push_back(word);
    }

}
string chooseAWord()
{

    return "hello";
}

bool findChar(char guessChar, string secretWord)
{
    for(int i = 0; i < secretWord.length(); i++)
    {
        if(guessChar == secretWord[i])
        {
            return true;
        }
    }
    return false;
}

void updateHadChar(string& guessWord, char guessChar, string secretWord)
{
    for(int i = 0; i < guessWord.length(); i++)
    {
        if(secretWord[i] == guessChar)
        {
            guessWord[i] = guessChar;
        }
    }

}

void updateNotHadChar(int& numberBadGuess, set<char>& guessBadChar, char guessChar)
{
    numberBadGuess++;
    guessBadChar.insert(guessChar);
}
