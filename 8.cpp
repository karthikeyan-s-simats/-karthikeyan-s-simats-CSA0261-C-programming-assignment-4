#include <stdio.h>

union Data {
  int i;
  float f;
};

int main() {
  union Data data;
  int choice;

  printf("Enter a value:\n");
  printf("1. Integer\n");
  printf("2. Float\n");
  scanf("%d", &choice);

  if (choice == 1) {
    printf("Enter an integer value: ");
    scanf("%d", &data.i);
    printf("You entered an integer value: %d\n", data.i);
  } else if (choice == 2) {
    printf("Enter a float value: ");
    scanf("%f", &data.f);
    printf("You entered a float value: %f\n", data.f);
  } else {
    printf("Invalid choice\n");
  }

  return 0;
}

