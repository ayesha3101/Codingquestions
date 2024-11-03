#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void printtemp(float temp[][5]){

	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%.1f ",temp[i][j]);
		}
		printf("\n");
	}	
}
void updatetemp(int col,int row, float arr[][5],float value){
	printf("\n");
	arr[row-1][col-1]=value;
	printf("Temperature successfully updated !\n");
	printtemp(arr);
}
void average(float temp[][5]){
	printtemp(temp);
	printf("\n");
	float sum=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		sum=sum+temp[i][j];
		}
	}
	float avg=sum/25;
	printf("%.2f",avg);
}
void maxtemp(float temp[][5]){
	printtemp(temp);
	float max=temp[0][0];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
		if(temp[i][j]>max){
			max=temp[i][j];
		}	
		}
	}
	printf("the overall maximum temperature recorded is %.2f",max);
}
int main(){
	float temp[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			temp[i][j]=16+(rand())%100;
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%.1f ",temp[i][j]);
		}
		printf("\n");
	}
	int choice;
	printf("enter 1 to update a specific temperature, 2 to find average temperature and 3 to find max temperature\n");
	scanf("%d",&choice);
	if(choice==1){
	int col,row;
	float newval;
	printf("enter the column and row you want to update \n");
	scanf("%d%d",&col,&row);
	printf("enter the new value \n");
	scanf("%f",&newval);
	updatetemp(col,row,temp,newval);
	
	}
	else if(choice==2){
		average(temp);
		
	}
	else if(choice==3){
		maxtemp(temp);
		
	}
}