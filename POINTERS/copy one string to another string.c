/* Write a program using pointer to copy one string to another string. */

#include<stdio.h> 
void copystr(char*,char*); 
void main() 
{ 
	char* str1="BVM Engineering college"; 
	char* str2[30]; 
	copystr(str2,str1); 
	printf("%s",str2); 
} 
void copystr(char *dest, char *src) 
{ 
	while(*src!='\0') 
	{
		*dest=*src;
		src++;
		dest++; 
	}
	*dest='\0'; 
}
