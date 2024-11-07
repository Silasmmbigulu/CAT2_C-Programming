//A C program that define employee structure
//processor directives
#include <stdio.h>
#include <string.h>
struct employee{
char name[25];
int id;
char depertment[20];
float salary;
char email[50];
} ;

//declaration
int main () {
struct employee employee={
"John Doe",
12345,
"Human Resource",
55000.50,
"john.doe@company.com"
};
//print the output
printf("Name:%s\n",employee.name);
printf("ID:%d\n",employee.id);
printf("Depertment:%s\n",employee.depertment);
printf("Salary:%.2f\n",employee.salary);
printf("Email:%s\n", employee.email);

return 0;
}
