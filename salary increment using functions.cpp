// this program will check if any 3 out of 4 necessary conditions are being fulfilled and then run the program and increment the salary by 20%.
#include <iostream>
using namespace std;

void newSalary(double &salary) {
    salary = salary + (salary * 0.20);
}

int criteria(int res_proj, int profit, int tenure, int new_proj) {
    int criteria_count = 0;

    if (res_proj > 1) {
        criteria_count++;
    }
    if (new_proj > 1) {
        criteria_count++;
    }
    if (tenure > 12) {
        criteria_count++;
    }
    if (profit > 10000) {  
        criteria_count++;
    }

    return criteria_count;
}

int main() {
    string emp_name;
    int res_proj;
    int profit;
    int tenure;
    int new_proj;
    double salary; 

    cout << "Enter Employee Name: ";
    cin >> emp_name;
    cout << "Enter number of Research projects completed by the Employee: ";
    cin >> res_proj;
    cout << "Enter profit gained by the Employee till date: ";
    cin >> profit;
    cout << "Enter the no. of months passed since joining: ";
    cin >> tenure;
    cout << "Enter the no. of projects currently working on: ";
    cin >> new_proj;
    cout << "Enter salary: ";
    cin >> salary;

    int cri = criteria(res_proj, profit, tenure, new_proj);

    if (cri >= 3) {
        cout << "Employee is eligible for a salary increment.\n";
        newSalary(salary);
        cout << "New salary after 20% increment: " << salary << endl;
    }
    else {
        cout << "Employee is not eligible for a salary increment." << endl;
    }

    return 0;
}

/*
Output 1:
Enter Employee Name: PJ
Enter number of Research projects completed by the Employee: 2
Enter profit gained by the Employee till date: 199
Enter the no. of months passed since joining: 5
Enter the no. of projects currently working on: 2
Enter salary: 10000
Employee is not eligible for a salary increment.

Output 2:
Enter Employee Name: Pal
Enter number of Research projects completed by the Employee: 2
Enter profit gained by the Employee till date: 10001
Enter the no. of months passed since joining: 2
Enter the no. of projects currently working on: 7
Enter salary: 300000
Employee is eligible for a salary increment.
New salary after 20% increment: 360000
  */
