
//A program calculating an employee total salary and the total salary of all staff.
#include <iostream>
 using namespace std;
 int main() {
   // declaring variables
   int numEmployee;
   double basicSalary, pensionContribution, totalEmployee_Salary;
   double totalSalary_all = 0;
   char nameEmployee[50];
   int a = 0;
   //Accepting input from user.
   cout << "Please enter the number of employees: ";
   cin >> numEmployee;
   cout << "Number of employees is: " << numEmployee << endl;
   while( a < numEmployee) {  
   cout << "Please enter the basic salary of employee: ";
   cin >> basicSalary;
   cout << "The basic salary is: " << basicSalary << endl;
   cout << "Please enter the name of employee: ";
   cin >> nameEmployee;
   cout << "Name of employee is: " << nameEmployee << endl;
   // Calculating and displaying salary of each employee.
   pensionContribution = 0.05*basicSalary;
   totalEmployee_Salary = basicSalary + pensionContribution;
   cout << "Employee total salary is: " << totalEmployee_Salary << endl;
   //Dispaying the employee salary against name of the employee
   cout << nameEmployee  << "  " <<"$"<<totalEmployee_Salary << endl;
   // Calculating and displaying total salary for all employees.
   totalSalary_all = totalSalary_all + totalEmployee_Salary;
   a++;
   
   }
   
   cout << "Total salary for all staff is:  " <<"$"<<totalSalary_all;
 return 0;
}
