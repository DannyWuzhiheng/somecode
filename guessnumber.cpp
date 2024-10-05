#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
using namespace std;

class NumberGuesser {
private:
    static bool seeded;
    void seed() {
        if (!seeded) {
            srand(static_cast<unsigned int>(time(0))); // Seed the random number generator once
            seeded = true;
        }
    }
public:
    int randint(int n) {
        seed();
        return rand() % (n + 1);
    }
    int generateRandomNumber(int max) {
        return randint(max);
    }
};

bool NumberGuesser::seeded = false; 

void playGuessingGame(int maxGuesses, int maxValue) {
    NumberGuesser guesser;
    int secretNumber = guesser.generateRandomNumber(maxValue);
    int guess;
    bool gameWon = false;
    int guessCount = 0; // New variable to track the number of guesses

    cout << "Guess a number between 0 and " << maxValue << ":" << endl;

    for (int attempt = 0; attempt < maxGuesses; ++attempt) {
        cin >> guess;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer." << endl;
            continue;
        }

        guessCount++; // Increment the guess count
        if (guess == secretNumber) {
            cout << "Well done! You guessed the number in " << guessCount << " attempts." << endl;
            gameWon = true;
            break;
        } else if (guess > secretNumber) {
            cout << "Too big. Try again. Attempt " << guessCount << " of " << maxGuesses << endl;
        } else {
            cout << "Too small. Try again. Attempt " << guessCount << " of " << maxGuesses << endl;
        }
    }

    if (!gameWon) {
        cout << "Sorry, you've run out of attempts. The number was " << secretNumber << ". You made " << guessCount << " attempts." << endl;
    }
}

int main() {
    const int MAX_GUESSES = 15;
    const int MAX_VALUE = 100;
    playGuessingGame(MAX_GUESSES, MAX_VALUE);
	cin.get();
	return 0;
}