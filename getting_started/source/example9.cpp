#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string first_name, last_name, file_name;
  int age;

  cout << "Enter First Name: "; cin >> first_name;
  cout << "Enter Last Name: "; cin >> last_name;
  cout << "Enter Age: "; cin >> age;
  cout << endl;
  cout << "Enter the name of the file: "; cin >> file_name;

  // Create an ofstream called People, open the stream for output.

  ofstream People(file_name);

  People << first_name << endl << last_name << endl << age << endl;

  return 0;
}
