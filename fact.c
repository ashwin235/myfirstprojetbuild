#include<stdio.h>  
void factnumber()    
{    
 int i,fact=1,number=6;    
 printf("Enter a number: ");    
      
    for(i=1;i<=number;i++){    
      fact=fact*i;    
  }    
  printf("Factorial of %d is: %d",number,fact);    

}   
