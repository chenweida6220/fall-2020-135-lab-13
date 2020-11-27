#include <iostream>
#include <sstream>
using namespace std;

#include "funcs.h"

// Task A. Print all numbers in range
string printRange(int left, int right) {
  stringstream ss;
  if (left <= right) {
    // cant do printRange(left++, right)
    ss << left << " " << printRange(left+1, right);
  }
  return ss.str();
}

// Task B. Sum of numbers in range
int sumRange(int left, int right) {
  int sum = 0;
  if (left <= right) {
    sum += left + sumRange(left+1, right);
  }
  return sum;
}

// Task C. Sum of elements in array
int sumArray(int *arr, int size) {
  return sumArrayInRange(arr, 0, size-1);
}

int sumArrayInRange(int *arr, int left, int right) {
  int sum = 0;
  if (left <= right) {
    sum += arr[left] + sumArrayInRange(arr, left+1, right);
  }
  return sum;
}

// Task D. Is string alphanumeric?
bool isAlphanumeric(string s) {
  if (s == "" && s.length() == 0) {
    return true;
  }
  else if (!isalnum(s[0])) {
    return false;
  }
  else {
    return isAlphanumeric(s.substr(1));
  }
}

// Task E (Bonus). Nested parentheses
bool nestedParens(string s) {
  int tracker = 0;
  if (s == "" && s.length() == 0) {
    return true;
  }
  else if (s[0] != '(' && s[0] != ')') {
    return false;
  }
  else {
    if (s[0] == '(') {
      tracker++;
    }
    else if (s[0] == ')') {
      tracker--;
    }
    cout << tracker+2;
  }
  nestedParens(s.substr(1));

  if (tracker == 0) {
    return true;
  }
  else {
    return false;
  }
}
