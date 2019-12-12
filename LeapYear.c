/* Katherine Wilsdon
 * No IDE, using Atom / Cygwin
 * Compiler flag: -o
 * Windows
 * September 19, 2019
 * Description: Determines whether a year is a leap year. The user can enter a
 * year as command line argument or the program will prompt the user for a year.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isLeapYear(unsigned int);

int main(int argc, char** argv){
  unsigned int inputYear;
// When a command line argument is entered, set the input year
  if(argv[1] != NULL && atoi(argv[1]) != 0) {
    inputYear = atoi(argv[1]);
  } // If there is no command line argument, prompt the user for a year and set input year
  else {
    printf("Enter a year: \n");
    // Assign user input to inputYear
    scanf("%u", &inputYear);
  }


  bool is_leap_year = isLeapYear(inputYear);
  if (is_leap_year){
    // Print this year is a leap year
    printf("%u is a leap year.\n", inputYear);
  } else {
    // Print this year in not a leap year
    printf("%u is not a leap year.\n", inputYear);
  }

  return 0;
}

/**
* Determines whether the year is a leap year
*/
bool isLeapYear(unsigned int year){
  // Leap years are evenly divisible by 400
  if (year % 400 == 0){
    return true;

  } // Leap years are evenly divisible by 4 except when the year is evenly divisible by 100
  else if (year % 100 != 0 && year % 4 == 0) {
    return true;
  } // The year is not a leap year
  else {
    return false;
  }
}
