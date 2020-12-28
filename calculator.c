// accept any numerical data-- integers and floats
// accept a numeric operator-- addition, subtraction, multiplication, division

#include <stdio.h>

int main(){
  double a, b, sum, subtraction, multiplication, division;
  int input;
  char again;

  do {

  printf("Input your first number\n");
  scanf("%lf", &a);
  printf("Input your second number\n");
  scanf("%lf", &b);

  printf("Enter 1 for addition\n");
  printf("Enter 2 for subtraction\n");
  printf("Enter 3 for multiplication\n");
  printf("Enter 4 for division \n");
  scanf("%d", &input);

  switch (input) {
    case 1:
      sum = a + b;
      printf("The answer is %lf\n", sum);
      break;
    case 2:
      subtraction = a - b;
      printf("%lf\n", subtraction);
      break;
    case 3:
      multiplication = a * b;
      printf("%lf\n", multiplication);
      break;
    case 4:
      division = a / b;
      if (b == 0)
        printf("%s\n", "Oops! Try again!");
      else
      printf("%lf\n", division);
    break;
  }
  printf("%s","Do you want to do something else? Enter y/n. \n");
  scanf("%s", &again);
}
while (again == 'y');
return 0;
if (again == 'n')
  printf("%s", "Thank you! Come back again soon!" );

}
