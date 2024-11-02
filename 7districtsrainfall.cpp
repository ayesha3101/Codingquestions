#include<stdio.h>
#include<stdlib.h>
int main(){
	float rainfall[7][7];
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			rainfall[i][j]=1.00+(rand())%9;
		}
	}
	printf("rainfall chart for 7 districts\n");
	for(int i=0;i<7;i++){
		printf("District %d",i+1);
		for(int j=0;j<7;j++){
			printf(" %.1f ",rainfall[i][j] );
		}
		printf("\n");
	}
	printf("\n");
	float sum;
	for(int i=0;i<7;i++){
		sum=0;
		for(int j=0;j<7;j++){
			sum=sum+rainfall[i][j];
		}
		printf("the total weekly rainfall for district %d is %.2f\n ",i+1,sum);
	}
	printf("\n");
	int max,index;
	for(int i=0;i<7;i++){
		max=rainfall[i][0];
		for(int j=0;j<7;j++){
			if(rainfall[i][j]>max){
				max=rainfall[i][j];
				index=j;
			}
		}
		printf("Day with maximuma rainfall in District %d is %d\n",i+1,index+1);
	}
}