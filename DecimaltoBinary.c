/*Lab9 PartC, Noah Guthrie, 2021-11-22*/

#include <stdio.h>

//function prototype
long long DtoB(int n);

int main(void) 
{
int decimal;
long long binary;

//ask user for a number to convert to binary
puts("Please enter a decimal number");
scanf("%d", &decimal);
//call function and print decimal as binary number
printf("%d in binary is %lld", decimal, DtoB(decimal));
}

//function defintion
long long DtoB(int decimal)
{
long long binary = 0;
  int rem, i = 1;

//loop to convert digits of a given number to 1 or 0
  while (decimal!=0) 
  {
    rem=decimal%2;
    decimal=decimal/2;
    binary=binary+rem*i;
    i=i*10;
  }
return binary;
}