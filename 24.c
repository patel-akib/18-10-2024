#include<stdio.h>
int main(){
	printf("enter number of students :");
	int size;
	scanf("%d",&size);
	int student[size];
	int i;
	for(i=0;i<=size-1;i++){
		printf("student[%d]:",i);
		scanf("%d",&student[i]);
	}
	for(i=0;i<=size-1;i++){
		printf("student[%d]:%d\n",i,student[i]);
	}
}
