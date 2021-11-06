// Activity 2: Number guessing game.
#include <iostream>
#include <string>
#include <random>

int main()
{
	// Declare variables.
	int guessCount;
	int minNumber;
	int maxNumber;
	int randomNumber;
	std::string input;
	bool bIsRunning = true;

	while (bIsRunning)
	{
		// Output instructions and get user inputs.
		std::cout << "***Number guessing game***\n";
		std::cout << "\nEnter the number of guesses: ";
		getline(std::cin, input);
		guessCount = std::stoi(input);

		std::cout << "Enter the minimum number: ";
		getline(std::cin, input);
		minNumber = std::stoi(input);

		std::cout << "Enter the maximum number: ";
		getline(std::cin, input);
		maxNumber = std::stoi(input);

		// Generate random number within range.
		srand((unsigned)time(nullptr));
		randomNumber = rand() % (maxNumber - minNumber + 1) + minNumber;

		// Process user guesses.
		for (int i = 0; i < guessCount; ++i)
		{
			int guess;

			std::cout << "\nEnter your guess: ";
			getline(std::cin, input);
			guess = std::stoi(input);

			if (guess == randomNumber)
			{
				std::cout << "Well done, you guessed the number!\n";
				break;
			}

			int guessesRemaining = guessCount - (i + 1);
			std::cout << "Your guess was too " << (guess < randomNumber ? "low. " : "high. ");
			std::cout << "You have " << guessesRemaining << (guessesRemaining > 1 ? " guesses" : " guess")
					  << " remaining";
		}

		std::cout << "\nEnter 0 to exit, or any number to play again: ";
		getline(std::cin, input);
		if (std::stoi(input) == 0)
		{
			bIsRunning = false;
		}
	}
}
