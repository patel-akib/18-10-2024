#include<stdio.h>
int main(){
	printf("enter number of students :");
	int size,max;
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
	max=student[0];
	for(i=0;i<=size-1;i++){
		if(max<student[i]){
			max=student[i];
		}
	}
	printf("%d",max);
}
