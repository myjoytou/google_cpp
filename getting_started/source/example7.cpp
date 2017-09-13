#include <iostream>
using namespace std;

// constants which are used throughout the program

#define PricePerUnit 225    // average price of a pair of shoes
#define WeeklyWage 600      // current weekly wage - method 1
#define Salary  7.0         // hourly salary - Method 2
#define HoursPerWeek 40     // number of hours worked - Method 2
#define Commission2 0.10    // commission - Method 2
#define Commission3 0.20    // commission - Method 3
#define BonusPerUnit 20     // bonus - Method 3

double calculate_salary_for_method1(double weekly_sales) {
  cout << "The weekly sales was " << weekly_sales << endl;
  return WeeklyWage;
}

double calculate_salary_for_method2(double weekly_sales) {
  double compansation =
    (HoursPerWeek * Salary) + (weekly_sales * Commission2);
  return compansation;
}

double calculate_salary_for_method3(double weekly_sales) {
  int pair_of_shoes_sold = static_cast<int>(weekly_sales / PricePerUnit);
  double compansation =
    ((weekly_sales * Commission3) + 20 * pair_of_shoes_sold);
  return compansation;
}

int main() {
  double weekly_sales;
  cout << "Enter the weekly sales" << endl;
  if (!(cin >> weekly_sales)) {
    cout << "Please enter valid data" << endl;
  }
  else {
    double salary1 = calculate_salary_for_method1(weekly_sales);
    double salary2 = calculate_salary_for_method2(weekly_sales);
    double salary3 = calculate_salary_for_method3(weekly_sales);
    if (salary1 > salary2) {
      if (salary1 > salary3) {
        cout << "Take salary method 1" << endl;
      }
      else {
        cout << "Take salary method 3" << endl;
      }
    }
    else if (salary1 < salary2) {
      if (salary2 > salary3) {
        cout << "Take salary method 2" << endl;
      }
      else {
        cout << "Take salary method 3" << endl;
      }
    }
  }

  return 0;
}
