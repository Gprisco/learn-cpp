#include <cstdlib>
#include <ctime>
#include <iostream>
#include <limits>
#include <random>

using namespace std;

int main() {
  int min = 0;
  int max = 100;
  int guess;
  srand(time(NULL));
  int secret_number = min + rand() % (max - min);

  cout << "Guess the number between " << min << " and " << max << "!\n";

  while (true) {
    cout << "Guess a number: ";
    cin >> guess;

    if (guess < min || guess > max) {
      cout << "Your guess is out of range. Try again!\n";
    } else if (guess == secret_number) {
      cout << "You guessed the secret number!\n";
      break;
    } else if (guess < secret_number) {
      cout << "Your guess is too low.\n";
    } else {
      cout << "Your guess is too high.\n";
    }
  }

  return 0;
}
