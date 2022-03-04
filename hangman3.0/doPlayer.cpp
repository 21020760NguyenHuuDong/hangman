#include "doPlayer.h"

void gameStart(bool& hasPlay)
{
    system("cls");
    cout << "WELCOME TO THE GAME" << endl;
    cout << "With each play, you will have to 7 wrong picks, be careful." << endl;
    cout << "Are you ready[y/n]: ";
    char choicePlayer; cin >> choicePlayer;
    if(choicePlayer == 'y' || choicePlayer == 'Y')
    {
        hasPlay = true;
    }
    else
    {
        hasPlay = false;
        exit(1);
    }
}

void doGamePlayer(const vector<string>& fullWord)
{
    set<char> guessedBadChar;
    string secretWord = chooseAWord(fullWord);
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
}

void endGame(bool& hasPlay)
{
    cout << endl;
    cout << "Do you want play again[y/n]: ";
    char choicePlayer; cin >> choicePlayer;
    if(choicePlayer == 'y' || choicePlayer == 'Y')
    {
        hasPlay = true;
    }
    else
    {
        hasPlay = false;
    }
}

void readyStart()
{

    for(int i = 3; i >= 0; i--)
    {
        system("cls");
        cout << "GOOD LUCK!" << endl;
        if(i != 0)
        {
            cout << "Game start in: " << i << "s";
        }
        else
        {
            cout << "GAME START!";
        }
        Sleep(1000);
    }

}
