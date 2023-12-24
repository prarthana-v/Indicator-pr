#include<stdio.h>
#include<string.h>
main(){
	
	char str[100];
	int i,length=0;
	char *ptr;
	
	printf("Enter any string:");
	gets(str);
	
	ptr=str;
	
	while(*ptr!='\0'){
		length++;
		ptr++;
	}
	printf("The length of a string is: %d",length);
}
