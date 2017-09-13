#include <iostream>
using namespace std;

double get_temperature(int no_of_chirps) {
  return (no_of_chirps + 40)/4;
}

int main() {
  int no_of_chirps_per_minute;
  cout << "Enter the number of chirps in a minute" << endl;
  cout.precision(1);

  if (!(cin >> no_of_chirps_per_minute)) {
    cout << "Please enter only numbers" << endl;
  }
  else {
    cout
      << "The temperature is: "
      << fixed
      << get_temperature(no_of_chirps_per_minute)
      << " degrees."
      << endl;
  }
  return 0;
}
