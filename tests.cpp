#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "funcs.h"

// Task A. Print all numbers in range
TEST_CASE("Task A") {
  CHECK(printRange(0,10) == "0 1 2 3 4 5 6 7 8 9 10 ");
  CHECK(printRange(-10,0) == "-10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 ");
  CHECK(printRange(20,10) == "");
  CHECK(printRange(0,0) == "0 ");
  CHECK(printRange(-1,-1) == "-1 ");
}

// Task B. Sum of numbers in range
TEST_CASE("Task B") {
  CHECK(sumRange(1,100) == 5050);
  CHECK(sumRange(0,0) == 0);
  CHECK(sumRange(-5,0) == -15);
  CHECK(sumRange(0,1) == 1);
  CHECK(sumRange(1,1000) == 500500);
}

// Task C. Sum of elements in array
TEST_CASE("Task C") {
  int array[10];
  CHECK(sumArray(array, 0) == 0);

  array[0] = -5; array[1] = -4; array[2] = -3; array[3] = -2; array[4] = -1; array[5] = 0;
  array[6] = 1; array[7] = 2; array[8] = 3; array[9] = 4; array[10] = 5;
  CHECK(sumArray(array, -5) == 0);
  CHECK(sumArray(array, 5) == -15);
  CHECK(sumArray(array, 11) == 0);
}

// Task D. Is string alphanumeric?
TEST_CASE("Task D") {
  CHECK(isAlphanumeric("     ") == false);
  CHECK(isAlphanumeric("123 -1-2-3") == false);
  CHECK(isAlphanumeric("abc123 :)") == false);
  CHECK(isAlphanumeric("abc123") == true);
  CHECK(isAlphanumeric("hello (-_-)") == false);
}

// Task E (Bonus). Nested parentheses
TEST_CASE("Task E") {
  CHECK(nestedParens("") == true);
  CHECK(nestedParens("()") == true);
  CHECK(nestedParens("(())") == true);
  CHECK(nestedParens("((()))") == true);
  CHECK(nestedParens(")(") == false);
}
