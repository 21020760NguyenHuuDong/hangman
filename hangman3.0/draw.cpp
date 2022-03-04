#include "draw.h"

void renderGame(int numberBadGuess, const set<char>& guessedBadChar, string guessWord)
{
    system("cls");
    cout << FIGURE[numberBadGuess];
    cout << "secret word: " << guessWord << endl;
    cout << "the number of guess wrong: " << numberBadGuess << endl;
    if(guessedBadChar.size() != 0)
    {
        cout << "the char of guessed wrong: ";
        for(auto i : guessedBadChar)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void renderResultGame(string guessWord, string secretWord)
{
    if(guessWord == secretWord)
    {
        renderResultWinGame();
    }
    else
    {
        renderResultLossGame(secretWord);
    }
}

void renderResultWinGame()
{
    int numberFigre = NUMBER_FIGURE_END_GAME;
    while(numberFigre--)
    {
        system("cls");
        int sizeOfFigure = sizeof(figureWinGame) / sizeof(string);
        int ramdomFigure = rand() % sizeOfFigure;
        cout << figureWinGame[ramdomFigure];
        cout << "you win, congratulation!";
        Sleep(500);
        if(kbhit())
        {
            break;
        }
    }

}

void renderResultLossGame(const string& secretWord)
{
    int numberFigre = NUMBER_FIGURE_END_GAME;
    while(numberFigre--)
    {
        system("cls");
        int sizeOfFigure = sizeof(figureLossGame) / sizeof(string);
        int ramdomFigure = rand() % sizeOfFigure;
        cout << figureLossGame[ramdomFigure];
        cout << "you loss, the secret word is: " << secretWord;
        Sleep(500);
        if(kbhit())
        {
            break;
        }
    }
}
