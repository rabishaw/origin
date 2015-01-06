#include<stdio.h>
int main()
{
int d;
printf("Before loop\n");
printf ("\n %d " ,(int)sizeof( int ) );
 for(d = -1 ;d <= (int)sizeof(int); d++)
 {  
  printf("sizeof operator\n");
 }
 printf("After loop\n");
return 0;

}
