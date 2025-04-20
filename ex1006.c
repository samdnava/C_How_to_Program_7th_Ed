#include <stdio.h>

typedef struct customer {
    char lastName[15];
    char firstName[15];
    unsigned int customerNumber;

    struct {
        char phoneNumber[11];
        char address[50];
        char city[15];
        char state[3];
        char zipCode[6];
    } personal;
} customerRecord, *customerPtr;

int main(void) {
    customerRecord record1;
    customerPtr record1Ptr = &record1;
    record1.lastName;
    record1Ptr->lastName;

    record1.firstName;
    record1Ptr->firstName;

    record1.customerNumber;
    record1Ptr->firstName;

    record1.personal.phoneNumber;
    record1Ptr->personal.address;

    record1.personal.address;
    record1Ptr->personal.address;

    record1.personal.city;
    record1Ptr->personal.city;

    record1.personal.state;
    record1Ptr->personal.state;

    record1.personal.zipCode;
    record1Ptr->personal.zipCode;

    return 0;
}