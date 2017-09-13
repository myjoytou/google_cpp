#include <iostream>
using namespace std;

int main() {
  bool found = false;
  int x, y;
  for (x = 1; x < 6; x++) {
    for (y = 1; y < 21; y++) {
      if ((19*x + 5*y) == 100) {
        found = true;
        break;
      }
    }
    if (found) break;
  }
  cout << "No of horses: " << x << endl;
  cout << "No of pigs: " << y << endl;
  cout << "No of rabbits: " << (100 - x - y) << endl;
  return 0;
}
