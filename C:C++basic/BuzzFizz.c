#include<stdio.h>
#include<stdlib.h>

int main()
{
  int i;

  for(i=1;i<=100;i++)
  {
    if(i%3==0&&i%5==0){
      printf("BuzzFizz\n");
    }
    else if(i%5==0){
      printf("Fizz\n");
    }
    else if(i%3==0){
      printf("Buzz\n");
    }
    else{
      printf("%d \n", i);
      continue;
    }
  }
return 0;
}