#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    
    int secretNum = rand() % 101;
    int guesses = 0;
    int userGuess;
    
    cout << "Let's play a guessing game!" << endl;
    cout << "Guess a number from 1 to 100. You get 5 guesses." << endl;
    
    while(guesses < 5)
    {
        cout << "Guess: ";
        cin >> userGuess;
        
        if(userGuess < secretNum)
        {
            cout << "Incorrect! Guess is too small." << endl;
            guesses++;
        } else if(userGuess > secretNum)
        {
            cout << "Incorrect! Guess is too big." << endl;
            guesses++;
        }else if(userGuess == secretNum)
        {
            cout << "Correct! You win!" << endl;
            break;
        }
        
        if(guesses == 5)
        {
            cout << "You lose!" << endl;
        }
    }
    
    return 0;
}
