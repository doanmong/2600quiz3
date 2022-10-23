#include <string.h>
#include "employee.h"
PtrToEmployee searchEmployeeBySalary(PtrToConstEmployee ptr, int tableSize, double targetSalary) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++) {
        if(ptr->salary == targetSalary)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToConstEmployee searchEmployeeByPhone(PtrToConstEmployee ptr, int tableSize, char * targetPhone) {
    const PtrToConstEmployee endPtr = ptr + tableSize;
    for(; ptr < endPtr; ptr++) {
        if(strcmp(ptr->phone,targetPhone) == 0)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}