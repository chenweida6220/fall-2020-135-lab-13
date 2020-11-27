#include <iostream>
using namespace std;

#include "funcs.h"

int main() {
  // Task A. Print all numbers in range
  cout << "Left: -2 \t Right: 10" << endl << printRange(-2,10) << endl;

  cout << "--------------------" << endl << endl;

  // Task B. Sum of numbers in range
  cout << "Left: 1 \t Right: 3" << endl << "Total: " << sumRange(1,3) << endl; // 6
  cout << endl;
  cout << "Left: -2 \t Right: 10" << endl << "Total: " << sumRange(-2,10) << endl; // 52

  cout << "--------------------" << endl << endl;

  // Task C. Sum of elements in array
  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;

  int sum1 = sumArray(arr, size); // Add all elements
  cout << "Sum is " << sum1 << endl;  // Sum is 43

  int sum2 = sumArray(arr, 5); // Add up first five elements
  cout << "Sum is " << sum2 << endl;  // Sum is 34

  delete[] arr;         // deallocate it

  cout << "--------------------" << endl << endl;

  // Task D. Is string alphanumeric?
  cout << isAlphanumeric("ABCD") << endl;        // true (1)
  cout << isAlphanumeric("Abcd1234xyz") << endl; // true (1)
  cout << isAlphanumeric("KLMN 8-7-6") << endl;  // false (0)

  cout << "--------------------" << endl << endl;

  // Task E (Bonus). Nested parentheses
  cout << nestedParens("((()))") << endl;      // true (1)
  cout << nestedParens("()") << endl;          // true (1)
  cout << nestedParens("") << endl;            // true (1)

  cout << nestedParens("(((") << endl;         // false (0)
  cout << nestedParens("(()") << endl;         // false (0)
  cout << nestedParens(")(") << endl;          // false (0)
  cout << nestedParens("a(b)c") << endl;       // false (0)

  cout << "--------------------" << endl << endl;
}
