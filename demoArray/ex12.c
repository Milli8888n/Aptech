#include <stdio.h>

   //Define struct
   typedef struct 
   {
       int no;
       char name[30];
   } Employee;
   void employee(Employee emp);
int main()
{
    //Use struct
    Employee emp1= {1, "Nam"};
    Employee emp2= {2, "Nga"};
    employee(emp1);
    employee(emp2);
    return 0;
}
void employee(Employee emp)
{
    printf("Emp - no: %d, name: %s\n", emp.no, emp.name);
}
    
    