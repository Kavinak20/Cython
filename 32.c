#include<stdio.h> 
#include<conio.h> 
 void main() 
 { 
 int i,c=0; 
 char a[100];
 clrscr(); 
 printf("Enter the line"); 
 gets(a); 
 for(i=0;a[i]!='\0';i++) 
 { 
 if(a[i]!=' ') 
 { 
 } 
 else 
 { 
 c++; 
 } 
 c++; 
 } 
 printf("%d",c); 
 getch(); 
 }
