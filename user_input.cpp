#include <iostream>
#include <limits>

template <typename T> void safe_scan(const char *message, T target) {
  std::cout << message;

  if (!(std::cin >> target)) {
    std::cout << "You entered an invalid input." << std::endl;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }
}

template void safe_scan<char *>(const char *, char *);
