#include "user_input.h"
#include <iostream>

using namespace std;

int main() {
  char first_name[20], last_name[40];
  int age;

  char filename[20];

  // Collect the data
  safe_scan("Enter first name: ", first_name);
  safe_scan("Enter last name: ", last_name);

  cout << "First name: " << first_name << endl;
}
