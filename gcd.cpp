#include "limits"
#include <iostream>
#include <limits>

using namespace std;

void get_from_stdin_or(int *var, int fallback) {
  if (!(cin >> *var)) {
    cout << "You entered an invalid number." << endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    *var = fallback;
  }
}

int gcd(int low, int high) {
  int res = numeric_limits<int>::max();

  while (res > 0) {
    res = high % low;

    if (res <= 0) {
      return low;
    }

    high = low;
    low = res;
  }

  return res;
}

int main() {
  int a, b;

  cout << "Enter a number" << endl;
  get_from_stdin_or(&a, -1);

  cout << "Enter another number" << endl;
  get_from_stdin_or(&b, -1);

  cout << gcd(a, b) << endl;

  return 0;
}
