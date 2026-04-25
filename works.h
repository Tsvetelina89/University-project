#ifndef WORKS_H_INCLUDED
#define WORKS_H_INCLUDED
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

enum Works{
    it_specialist, product_manager, sales_consultant, COUNT
};
struct Profesions{
    Works work;
    double salary;
    bool sex;
};
string works_to_string(Works work);
void work_counter(Profesions employees[], int C, int counter[COUNT]);
void most_expensive_women(Profesions employees[], int C);
void average_salary(Profesions employees[], int C);
void add_empoyee(Profesions employess[], int &C, int N);
void print_all_employees(Profesions employees[], int C);




#endif // WORKS_H_INCLUDED
