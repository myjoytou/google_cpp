#include <iostream>
#include <vector>
using namespace std;

int get_input_from_user(string evaluation_type)  {
  int marks;
  cout << "Enter the score for the " << evaluation_type << ": ";
  while (!(cin >> marks)) {
    cout << "Enter only numbers" << endl;
    cout << "Enter the score for the " << evaluation_type << endl;
  }

  return marks;
}

void display_assignment_marks(vector<int>& assignment_marks) {
  for (auto ptr = assignment_marks.begin(); ptr != assignment_marks.end(); ptr++) {
    cout << "Marks: " << *ptr << endl;
  }
}

int sum_of_marks_for_assignment(vector<int>& assignment_marks) {
  int sum_of_marks = 0;
  for (auto& n : assignment_marks) {
    sum_of_marks += n;
  }
  return sum_of_marks;
}

double get_final_grade(
    int assignment_marks, int midterm_marks,
    int final_marks, int section_marks) {

  double final_grade = 0.0;
  double assignment_average = assignment_marks / 4;
  final_grade =
    (assignment_average * 0.4) +
    (midterm_marks * 0.15) +
    (final_marks * 0.35) +
    (section_marks * 0.1);
  return final_grade;
}

int main() {
  vector<int> assignment_marks;
  for (int i = 0; i < 4; i++) {
    string evaluation_type = to_string(i) + " assignment";
    assignment_marks
      .push_back(get_input_from_user(evaluation_type));
  }
  int total_assignment_marks =
    sum_of_marks_for_assignment(assignment_marks);

  int midterm_marks = get_input_from_user("midterm");
  int final_marks = get_input_from_user("final");
  int section_marks = get_input_from_user("section");
  double final_grade =
    get_final_grade(
      total_assignment_marks,
      midterm_marks,
      final_marks,
      section_marks
    );

  cout.precision(1);
  cout << "The final grade is: " << fixed << final_grade << endl;
  return 0;
}
