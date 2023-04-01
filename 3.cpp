#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student {
    char name[50];
    int roll_number;
    int birth_day;
    int birth_month;
    int birth_year;
    int admission_day;
    int admission_month;
    int admission_year;
};

int calculate_age(int birth_day, int birth_month, int birth_year, int admission_day, int admission_month, int admission_year) {
    int age = admission_year - birth_year;
    if (admission_month < birth_month) {
        age--;
    }
    else if (admission_month == birth_month && admission_day < birth_day) {
        age--;
    }
    return age;
}

int main() {
    struct student s;

    printf("Enter student name: ");
    fgets(s.name, 50, stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter date of birth in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &s.birth_day, &s.birth_month, &s.birth_year);

    printf("Enter admission date in format DD/MM/YYYY: ");
    scanf("%d/%d/%d", &s.admission_day, &s.admission_month, &s.admission_year);

    int age = calculate_age(s.birth_day, s.birth_month, s.birth_year, s.admission_day, s.admission_month, s.admission_year);

    printf("Name: %s", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Age at the time of admission: %d\n", age);

    return 0;
}


