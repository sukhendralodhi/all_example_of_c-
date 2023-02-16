#include <iostream>
using namespace std;

int main() {

  // swap number using third variable
  /*
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
  */

  // swap number without using third variable

  // int num1, num2;
  // cout << "Enter the number 1 and 2: ";
  // cin >> num1 >> num2;

  // cout << "Before swap: " << endl << num1 << endl << num2 << endl;

  // num1 = num1 + num2;
  // num2 = num1 - num2;
  // num1 = num1 - num2;

  // cout << "After swap: " << endl << num1 << endl << num2 << endl;

  // square of given number
  /*
  int num;
  cout << "Enter the number: ";
  cin >> num;
  cout << "Square of number: " << num * num << endl;
  */

  // find number is positive or negative
  int number;
  cin >> number;
  if (number > 0) {
    cout << "Number is positive\n";
  } else if (number == 0) {
    cout << "Number is Zero\n";
  } else {
    cout << "Number is negative\n";
  }
}