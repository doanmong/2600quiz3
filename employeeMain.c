//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 

#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToConstEmployee matchPtr;
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "313-555-1215");

    if (matchPtr != NULL)
        printf("Employee phone number 310-555-1215 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number is NOT found in the record\n");

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if (matchPtr != NULL)
        printf("Employee with the salary of 6.34 is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee with the salary of 6.34 is NOT found in the record\n");
}