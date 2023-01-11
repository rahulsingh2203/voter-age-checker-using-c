#include<stdio.h>
#include<conio.h>
void main(){
	int age;
	printf("Enter Your Age:");
	scanf("%d",&age);
	if(age>=18){
		printf("You're eligible to vote");
	}
	else{
		printf("You're not allowed to cast vote.");
	}
}
