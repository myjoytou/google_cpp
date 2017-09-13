#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

string get_message_for_bad_guess(int guessed_number, int random_number) {
  string message;
  if (random_number > guessed_number) {
    if ((random_number - guessed_number) > 20) {
      message = "That is too low";
    }
    else {
      message = "That is low";
    }
  }
  else {
    if ((guessed_number - random_number) > 20) {
      message = "That is too high";
    }
    else {
      message = "That is high";
    }
  }
  return message;
}

int main() {
  int random_number, guessed_number, counter;

  srand(time(NULL));

  random_number = rand() % 100;
  counter = 0;

  cout << "The random number is: " << random_number << endl;
  while(counter < 7) {
    counter++;
    cout << "Guess our number (1 to 100)" << endl;
    if (!(cin >> guessed_number)) {
      cout << "Please enter only numbers" << endl;
    }
    else {
      if (guessed_number == random_number) {
        cout << "Great! You guessed it correct!" << endl;
        break;
      }
      else {
        cout << get_message_for_bad_guess(guessed_number, random_number) << endl;
      }
    }
  }
  return 0;
}
