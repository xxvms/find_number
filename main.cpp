#include <iostream>
#include <random>

int main() {
  std::random_device
      rd;  // Will be used to obtain a seed for the random number engine
  std::mt19937 gen(rd());  // Standard mersenne_twister_engine seeded with rd()
  std::uniform_int_distribution<> dis(1, 600);

  int guess = 0;
  int result = dis(gen);

  std::cout << "result: " << result << '\n';

  do {
    std::cout << "please type your number: ";
    std::cin >> guess;

    if (result == guess)
    {
      std::cout << " spot on !" << '\n';
    }
    else if (result < guess) {
      std::cout << "your number is to big" << '\n';
    } else {
      std::cout << " your number is too small" << '\n';
    }

  } while (guess != result);

  return 0;
}