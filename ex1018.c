#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct starterProfile {
    char firstName[20];
    char lastName[20];
    char gender[20];
    struct {
        unsigned month;
        unsigned day;
        unsigned year;
    } dateOfBirth;
    double height;
    double weight;
} HealthProfile, *profilePtr;

unsigned checkDate(unsigned, unsigned, unsigned);
HealthProfile profileSet();
unsigned profileAge(HealthProfile);
unsigned profileMaxHeartRate(HealthProfile);
unsigned profileTarHeartRate(HealthProfile);
double profileBMI(HealthProfile);
void profilePrint(HealthProfile);

int main(void) {
    printf("\nComputerization of Health Records\n=====================================\n");
    HealthProfile newProfile = profileSet();
    profilePrint(newProfile);
    printf("\n");
    return 0;
}

unsigned checkDate(unsigned month, unsigned day, unsigned year) {
    time_t t = time(NULL);
    struct tm date;
    if ((t == (time_t)(-1)) || (gmtime_r(&t, &date) == NULL))
        return 1;
    if (month > 12 || day > 31 || year > (date.tm_year + 1900))
        return 2;
    else if (month == 2) {
        if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
            if (day > 29)
                return 3;
        } else if (day > 28)
            return 4;
    } else if (day > (31 - ((month - 1) % 7 % 2)))
        return 5;
    return 0;
}
HealthProfile profileSet() {
    HealthProfile tempProfile;

    printf("Enter first Name : "), scanf(" %19s", tempProfile.firstName);
    printf("Enter last Name  : "), scanf(" %19s", tempProfile.lastName);
    printf("Enter gender     : "), scanf(" %19s", tempProfile.gender);

    printf("Enter date of birth\n| MM/DD/YYYY |   : ");
    scanf(" %2u%*c %2u%*c %4u", &tempProfile.dateOfBirth.month, &tempProfile.dateOfBirth.day, &tempProfile.dateOfBirth.year);
    while (checkDate(tempProfile.dateOfBirth.month, tempProfile.dateOfBirth.day, tempProfile.dateOfBirth.year)) {
        printf("Invalid date\nEnter date of birth\n| MM/DD/YYYY |   : ");
        scanf(" %2u%*c %2u%*c %4u", &tempProfile.dateOfBirth.month, &tempProfile.dateOfBirth.day, &tempProfile.dateOfBirth.year);
    }
    printf("Enter height(in) : "), scanf(" %lf", &tempProfile.height);
    printf("Enter weight(lb) : "), scanf(" %lf", &tempProfile.weight);

    return tempProfile;
}
unsigned profileAge(HealthProfile profile) {
    time_t t = time(NULL);
    struct tm date;
    if ((t == (time_t)(-1)) || (gmtime_r(&t, &date) == NULL))
        return 1;
    int age = ((date.tm_year + 1900) - profile.dateOfBirth.year);
    if (((date.tm_mon + 1) > profile.dateOfBirth.month) || (((date.tm_mon + 1) == profile.dateOfBirth.month) && (date.tm_mday >= profile.dateOfBirth.day)))
        return age;
    else
        return (age - 1);
    return 0;
}
unsigned profileMaxHeartRate(HealthProfile profile) {
    return (220 - profileAge(profile));
}
unsigned profileTarHeartRate(HealthProfile profile) {
    unsigned max = profileMaxHeartRate(profile);
    return (((max * 0.85) + (max * 0.5)) / 2);
}
double profileBMI(HealthProfile profile) {
    return ((profile.weight * 703) / (profile.height * profile.height));
}
void profilePrint(HealthProfile profile) {
    printf("\nHealth Profile Information\n=====================================");
    printf("\nFirst Name  : %s", profile.firstName);
    printf("\nLast Name   : %s", profile.lastName);
    printf("\nGender      : %s", profile.gender);
    printf("\nD.O.B       : %u/%u/%u", profile.dateOfBirth.month, profile.dateOfBirth.day, profile.dateOfBirth.year);
    printf("\nHeight      : %.2lf inches", profile.height);
    printf("\nWeight      : %.2lf pounds", profile.weight);
    printf("\nAge : %u years", profileAge(profile));
    printf("\nBMI : %.2lf\n------------------------------------\nBMI Values\nUnderweight : less than 18.5\nNormal      : between 18.5 and 24.9\nOverweight  : between 25 and 29.9\nObese       : 30 or greater\n------------------------------------", profileBMI(profile));
    printf("\nMax Heart Rate    : %u", profileMaxHeartRate(profile));
    printf("\nTarget Heart Rate : %u", profileTarHeartRate(profile));
}