#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std; 

//Ryan Thammakhoune. Palindrome. This program takes an input and checks if the input is a palindrome.

int main() {
  char input[81]; //Initialize variables
  cin.get(input, 81); //Get the input
  cin.get();
  int length = strlen(input); //Get length of input
  char str[81];
  int num = 0;
  int len = 0;
  bool isPal = true;
  for (int i = 0; i < length; i++) { //For loop that puts only allowed characters into the new cstring.
    if ((int) input[i] <= 57 && (int) input[i] >=48) {
      str[num++] = input[i];
      len++;
    }
    else if ((int) input[i] <=122 && (int) input[i] >= 97) {
      str[num++] = input[i];
      len++;
    }
    else if ((int) input[i] <=90 && (int) input[i] >=65) {
      int n = (int) input[i] + 32;
      str[num++] = (char) n;
      len++;
    }
  }
  str[num] = '\0';
  cout << str << endl;
  for (int a = 0; a < strlen(str); a++) { //Checks to see if the first char is the same as the last etc.
    if (str[a] != str[strlen(str)-1-a]) {
      isPal = false;
    }
  }
  if (isPal == true) {
    cout << "Palindrome" << endl;
  }
  else {
    cout << "Not a palindrome" << endl;
  }
}
