#include<stdio.h>
int x=10;
void main() {
	int y=20;
	int ans;
	ans= ++x + ++y;
	printf("%d\n",ans);

	printf("In main\n");
		printf("%d\n",x);
	printf("End main\n");
}

