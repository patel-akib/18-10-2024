#include<stdio.h>
int main(){
	printf("enter number of students :");
	int size,min;
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
	min=student[0];
	for(i=0;i<=size-1;i++){
		if(min>student[i]){
			min=student[i];
		}
	}
	printf("%d",min);
}
