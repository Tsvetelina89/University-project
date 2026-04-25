#include <iostream>
#include <iomanip>
#include <string>
#include "works.h"

using namespace std;
string works_to_string(Works work){
    switch(work){
        case sales_consultant: return "Sales consultant!";
        case product_manager: return "Product manager!";
        case it_specialist: return "IT Specialist!";
        default: return "Unknown!";
    };
}

void work_counter(Profesions employees[], int C, int counter[COUNT]){
    for(int i = 0; i < C; i++){
        if(employees[i].sex == true){
            counter[employees[i].work]++;
            }
    }
}
void most_expensive_women(Profesions employees[], int C){

    double max_salary = 0;

    for(int i = 0; i < C; i++){
        if(employees[i].salary > max_salary && employees[i].sex == true){
            max_salary = employees[i].salary;
        }
    }
    cout << "Most expensive women profession is: ";
    for(int i = 0; i < C; i++){
        if(employees[i].salary == max_salary){
            cout << works_to_string(employees[i].work);
        }

    }
    cout << endl;


}
void average_salary(Profesions employees[], int C){
    int counter[COUNT] = {0};
    work_counter(employees, C, counter);

    double sum_profesions[COUNT] = {0};
    double average_salary_women[COUNT] = {0};

    for(int i = 0; i < C; i++){
        if(employees[i].work == sales_consultant && employees[i].sex == true){
            sum_profesions[sales_consultant] += employees[i].salary;
            average_salary_women[sales_consultant] = sum_profesions[sales_consultant] / counter[sales_consultant];
            }
    }
    cout << "Average salary for women of Sales Consultant profession is: " << average_salary_women[sales_consultant] << endl;

    for(int i = 0; i < C; i++){
        if(employees[i].work == product_manager && employees[i].sex == true){
            sum_profesions[product_manager] += employees[i].salary;
            average_salary_women[product_manager] = sum_profesions[product_manager] / counter[product_manager];

        }
    }
    cout << "Average salary for women of Product manager profession is: " << average_salary_women[product_manager] << endl;
    for(int i = 0; i < C; i++){
        if(employees[i].work == it_specialist && employees[i].sex == true){
            sum_profesions[it_specialist] += employees[i].salary;
            average_salary_women[it_specialist] = sum_profesions[it_specialist] / counter[it_specialist];

        }
    }
    cout << "Average salary for women of IT Specialist profession is: " << average_salary_women[it_specialist] << endl;


}
void add_empoyee(Profesions employess[], int &C, int N){

    if (C >= N){
        cout << "You have reached the maximum limit for adding employees!"<<" " << "Maximum limit = " << " " << N << endl;
        return;
    }

    int new_work;
    do{
        cout << "Please add new work (0 - IT Specialist, 1 - Product manager, 2 - Sales consultant) " << endl;
        cin >> new_work;
        if (new_work < 0 || new_work > 2){
            cout << "Invalid choice! Please enter a number between 0 and 2." << endl;
        }
    }while (new_work < 0 || new_work > 2);

    employess[C].work = (Works)new_work;
    cout << "Please add salary for employee!: " << endl;
    cin >> employess[C].salary;
    cout << "Please add your identify (sex) - for women: 1/ for man: 0 " << endl;
    cin >> employess[C].sex;

    C++;

}
void print_all_employees(Profesions employess[], int C){
    for(int i = 0; i < C; i++){
        cout << "Profession: " << works_to_string(employess[i].work) << " "
        << "Salary in leva: " << employess[i].salary << " " << "Women-1 / Man-2: " <<
        employess[i].sex << endl;
    }
}


