#include "limits"
#include <iostream>
#include <limits>

using namespace std;

/* ----------Euclidean algorithm-----------
    1.	Calculate the remainder of the division (large / small)
    2.	Replace the larger number with the smaller number.
    3.	Replace the smaller number with the remainder from step 1.
    4.	Repeat steps 1-3 until the remainder is zero.
    5.	The last non-zero remainder is the GCD.
   ---------------------------------------- */

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

int recursive_gcd(int *low, int *high) {
  int res = *high % *low;

  if (res <= 0) {
    return *low;
  }

  *high = *low;
  *low = res;
  return recursive_gcd(low, high);
}

int get_number_from_stdin_and_validate(string msg) {
  int a = -1;
  while (a <= 0) {
    cout << msg;
    get_from_stdin_or(&a, -1);

    if (a <= 0) {
      cout << "The number must be >= 0" << endl;
    }
  }

  return a;
}

int main() {
  int a = get_number_from_stdin_and_validate("Enter number a: ");
  cout << endl;
  int b = get_number_from_stdin_and_validate("Enter number b: ");

  cout << "Greatest Common Divider: " << gcd(a, b) << endl;
  cout << "Greatest Common Divider (recursively calculated): " << gcd(a, b)
       << endl;

  return 0;
}
