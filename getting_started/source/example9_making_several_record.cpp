#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string first_name, last_name, file_name, line;
  int age;
  cout << "Enter File name: "; cin >> file_name;
  ofstream people(file_name);

  for (int i = 0; i < 3; i++) {
    cout << "Enter first Name: "; cin >> first_name;
    cout << "Enter last Name: "; cin >> last_name;
    cout << "Enter your age: "; cin >> age;

    people << first_name << endl << last_name << endl << age << endl;
    people << endl;
  }
  people.close();

  ifstream people_in(file_name);

  if (people_in.is_open()) {
    while (people_in >> first_name >> last_name >> age) {
      cout << "First Name: " << first_name << endl;
      cout << "Last Name: " << last_name << endl;
      cout << "Age: " << age << endl;
      cout << endl;
    }
  }
  return 0;
}
