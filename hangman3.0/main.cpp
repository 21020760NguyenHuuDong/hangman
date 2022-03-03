
#include "function.h"
#include "draw.h"


vector<string> fullWord;
set<char> guessedBadChar;

int main()
{
    string secretWord = chooseAWord();
    int longSecretWord = secretWord.length();
    string guessWord = string(longSecretWord, '-');
    int numberBadGuess = 0;

    while(numberBadGuess <= MAX_NUMBER_BAD_GUESS && guessWord != secretWord)
    {
        renderGame(numberBadGuess, guessedBadChar, guessWord);
        char guessChar = getAChar();
        if(findChar(guessChar, secretWord))
        {
            updateHadChar(guessWord, guessChar, secretWord);
        }
        else
        {
            updateNotHadChar(numberBadGuess, guessedBadChar, guessChar);
        }
    }

    renderResultGame(guessWord, secretWord);
    return 0;
}

