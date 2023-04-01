#include <stdio.h>

union student {
  char name[50];
  float gpa;
};

int main() {
  union student s;

  printf("Enter student's name: ");
  fgets(s.name, 50, stdin);

  printf("Enter student's GPA: ");
  scanf("%f", &s.gpa);

  printf("Student's name: %s\n", s.name);
  printf("Student's GPA: %f\n", s.gpa);

  return 0;
}

