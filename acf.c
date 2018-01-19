#include<stdio.h>
 
int main() {
   int a[30], i, num, minimum;
 
   printf("\nEnter no of elements :");
   scanf("%d", &num);
 
  
   for (i = 0; i < num; i++)
      scanf("%d", &a[i]);
 
   
  minimum= a[0];
 
   for (i = 0; i < num; i++) {
      if (a[i] < minimum) {
         minimum= a[i];
      }
   }
 
   
   printf("\nminimum Element : %d", minimum;
 
   return (0);
}
