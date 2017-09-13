#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream details("vivek_details.txt");
  string line;
  if (details.is_open()) {
    while ( getline(details, line) ) {
      cout << line << endl;
    }
  }
  else cout << "Unable to open file vivek_details.txt";

  return 0;
}
