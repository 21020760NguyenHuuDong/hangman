#include "function.h"
#include "draw.h"
#include "doPlayer.h"

vector<string> fullWord;

int main()
{
    srand(time(NULL));
    setWord(fullWord);

    bool hasPlay = true;
    gameStart(hasPlay);
    while(hasPlay)
    {
        readyStart();
        doGamePlayer(fullWord);
        endGame(hasPlay);
    }
    return 0;
}
