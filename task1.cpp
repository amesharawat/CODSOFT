#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number, guess, attempts = 0;
    srand(time(0)); 
    number = rand() % 100 + 1; 

    std::cout << "Guess the Number Game\n";
    std::cout << "I have selected a number between 1 and 100. Try to guess it!\n";

    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;
        if (guess > number) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < number) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }
    } while (guess != number);

    return 0;
}