#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n) {
  if(n == 0){
    return n;
  }
  return (n%10)+(digit_sum((n/10)));
}

int main(void) {
  char *a = readline("Enter an int: ");
  int num = (int) atof(a);
  printf("sum of digits of %d is %d.\n",num,digit_sum(num));
  return 0;
}