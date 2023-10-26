// Matthew Medina and Kevin Arias
// matt.medina@csu.fullerton.edu
// @matt-medina
// Partners: @K-Arias

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int number_of_argument{static_cast<int>(arguments.size()) - 1};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number";
    return 1;
  }
  double sum{0};
  bool first{true};
  for (std::string& argument : arguments) {
    if (first) {
      first = false;
      continue;
    }
    double number{std::stod(argument)};
    sum += number;
  }
  double average{0};
  average = sum / number_of_argument;
  std::cout << "average = " << average << "\n";
  return 0;
}
