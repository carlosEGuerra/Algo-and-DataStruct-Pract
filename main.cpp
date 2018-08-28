#include <iostream>

using namespace std;

int gcd(int a, int b);

int main() {
  //initializes the variables
  int a;
  int b;

  //Gets the user input
  cout << "Enter your two numbers you want to find their GCD" << endl;
  cout << "Largest Number: ";
  cin >> a;
  cout << "Smaller Number: ";
  cin >> b;

  //Calculates the gcd of the two inputs
  cout << gcd(a, b) << endl;
  return 0;
}

/*
Euclids Algorithm:
  if b is zero, the GCD is a
  else mod a by b and continue until b == 0
*/
int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  int r = a % b;
  return gcd(b, r);
}
