#include <string.h>
#include <stdlib.h>
#include "employee.h"
int main(void){
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * NameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * PhoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double targetSalary);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByNumber(EmployeeTable,EmployeeTableEntries, 1045);

    if (matchPtr != NULL)
        printf("Employee ID 1045 is in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    //Example found

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    //Example of phone number found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134");
    if(matchPtr != NULL)
        printf("Employee phone number: 909-555-2134 is found in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number: 909-555-2134 is NOT found in the record\n");

    //Example of phone number not found
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "a");
    if(matchPtr != NULL)
        printf("Employee phone number: 879-662-2325 is found in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee phone number: 879-662-2325 is NOT found in the record\n");
    
    //Example of salary found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 7.80);
    if(matchPtr != NULL)
        printf("Employee salary 7.80 is found in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 7.80 is NOT found in the record\n");

    //Example of salary not found
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 9.55);
    if(matchPtr != NULL)
        printf("Employee salary 9.55 is found in the record %d\n", matchPtr - EmployeeTable);
    else
        printf("Employee salary 9.55 is NOT found in the record\n");

    return EXIT_SUCCESS;
}