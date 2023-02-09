#include<stdio.h>

int main()

{
char letter = 'a';
int number  = 9;
printf("%c\n%d\n", letter, number);

 int x = 10;
 printf("%5d\n",x);



 int *pointer = 5;
 printf("%p\n", pointer);
 


 int num;
 printf("Enter an integer number");
 scanf("%d", &num);
 printf("\nnum %d\n", num); 

/*
  char word[256];
  printf("Enter the word\t");
  scanf("%s", word);
  printf("The entered Word : %s\n", word);
 */ 

 char word;
  for (int i=0;i<256; i+=1){
   scanf("%s", &word[i]);
  }

}
