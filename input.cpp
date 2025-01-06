#include <iostream>

using namespace std;

int main() {
  int number = 0;

  do {
    cout << "Enter a number: ";

    if (!(cin >> number)) {
      cout << "You entered an invalid number." << endl;
      break;
    }

    if (number != 0) {
      cout << "You entered " << number << endl;
    }
  } while (number != -1);

  cout << "Goodbye!" << endl;
  return 0;
}
