#include <iostream>
using namespace std;

int find_gcd(int num1, int num2) {
  int temp;
  while(num2 != 0) {
    temp = num1 % num2;
    num1 = num2;
    num2 = temp;
  }

  return num1;
}

int main() {
  int num1, num2;

  do {
    cout << "Enter the numbers for GCD (-999 to exit)" << endl;

    if(!(cin >> num1 >> num2)) {
      cout << "Please enter only numbers" << endl;
    }
    else {
      cout << "The GCD for " << num1 << " and "
        << num2 << " is: " << find_gcd(num1, num2) << endl;
    }
  } while(num1 != -999 && num2 != -999);

  return 0;
}
