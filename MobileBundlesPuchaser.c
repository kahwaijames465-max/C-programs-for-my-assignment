/*
Name: Wangui James Kahwai 
Reg no:CT101/G/26490/25
Date:30/9/25
Description:c program for bundles purchasing 
*/

#include<stdio.h>

int main()
{
     //variable declaration 
      int cost;
      int choice;
      int bundles;
      
    printf("Available bundles options\n");
    printf("1.100MB-50KES\n");
    printf("2.500MB-200KES\n");
    printf("3.  1GB-350KES\n");
    printf("4.  2GB-600KES\n");
    //prompt the user to enter 
    printf("Enter your bundles choice (1-4)");
    scanf("%d", &choice);
    //switch statement display 
    switch(choice){
    case 1:
    printf("choice 1= 100MB-50KES\n");
              break;
    case 2:          
    printf("choice 2= 500MB-200KES \n");
              break;
    case 3:          
    printf("choice 3= 1GB-350KES \n",cost);
             break;
    case 4:
    printf("choice 4=  2GB-600KES \n",cost);
            break;
    default:        
    printf("Invalid choice\n");}
    
    return 0;
}