#include<stdio.h>
int a=10;
void fun(){
	int x=20;
	printf("In fun\n");
}
void main(){
int x=30;
printf("Start main\n");
fun();
printf("End main\n");
}
