#include <iostream>
#include <string>
#include "libraries/calc.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  int a, b;
  float c, d;
  cout << "Main program" << endl;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;
  cout << "The sum is : " << sum(a, b) << endl;
  return 0;
}
