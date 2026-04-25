#include <iostream>
#include <iomanip>
#include <string>
#include "works.h"

using namespace std;
const int N = 10;
int main()
{
    int counter[COUNT] = {0};
    int C = 6;
    Profesions employees[N] = {
        {sales_consultant, 2400.00, true},
        {product_manager, 5350.00, true},
        {it_specialist, 7365.00, true},
        {sales_consultant, 2700.00, false},
        {sales_consultant, 2400.00, true},
        {it_specialist, 8880.00, true}

    };

    int choice;
    do{
        cout << "Please enter your choice from: 1 - 4! For end please enter 0!: " << endl;
        cout << "1: Most expensive women profession!" << endl;
        cout << "2: Average salary only for women!" << endl;
        cout << "3: Add employee!" << endl;
        cout << "4: View all employees!" << endl;
        cin >> choice;
        switch(choice){
            case 0: cout << "Exiting program ..... "; break;
            case 1: most_expensive_women(employees, C); break;
            case 2: average_salary(employees, C); break;
            case 3: add_empoyee(employees, C, N); break;
            case 4: print_all_employees(employees, C); break;
            default: cout << "Invalid choice! Please try again!"; break;
        }

    }while (choice != 0);

    return 0;
}
