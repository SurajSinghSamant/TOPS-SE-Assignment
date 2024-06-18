//  WAP to perform Palindrome number using for loop and function
#include <stdio.h>

int palindrome(int num);

int main() {
  int number;

  printf("Enter An Integer : ");
  scanf("%d", &number);

  if (palindrome(number)) 
  {
    printf("%d Is A Palindrome.\n", number);
  } else {
    printf("%d Is Not A Palindrome.\n", number);
  }

  return 0;
}

int palindrome(int num) {
  int original_num = num;
  int reversed_num = 0;
  int digit;

  for (; num != 0; num /= 10) {
    digit = num % 10;
    reversed_num = reversed_num * 10 + digit;
  }
  
  return original_num == reversed_num;
}


