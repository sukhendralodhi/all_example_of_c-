#include <iostream>
using namespace std;

int main() {
  int num1, num2, temp;
  cout << "Enter the number 1 and 2: ";
  cin >> num1 >> num2;

  cout << "Before swap." << endl;
  cout << num1 << endl << num2 << endl;

  temp = num1;
  num1 = num2;
  num2 = temp;

  cout << "After swap." << endl;
  cout << num1 << endl << num2 << endl;
}