#include<stdio.h>
void printarrangment(int arr[][6]){
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
void addstudents(int arr[][6],int n){
	int itr=0;
	for(int i=0;i<5;i++){
		if(itr==n){
			printf("successfully added!\n");
			break;
		}
		for(int j=0;j<6;j++){
			if(itr==n){
				break;
			}
			if((arr[i][j]==0) && j>0){
				arr[i][j]=(arr[i][j-1])+1;
				itr++;
			}
			else if((arr[i][j])==0&&j==0){
				arr[i][j]=(arr[i-1][j+5])+1;
				itr++;
			}
		}
		if(i==4&&itr!=n){
			printf("sorry! we could not accomodate %d students. No other seats left\n",n-itr);
	}
}
	  printarrangment(arr);

}
void removeseat(int arr[][6],int seatno){
	int found=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			if(arr[i][j]==seatno){
				arr[i][j]=0;
				found=1;
				break;
			}
			if(found==1){
				break;
			}
		}
	}
}
int main()
{
	int seating[5][6]={  {1,2,0,4,5,0},
	{7,0,9,10,11,12},
	{0,0,15,16,17,18},
	{19,20,0,22,23,0},
	{25,26,27,28,29,30}
	};
	int choice;
	printf("enter 1 to see current arrangement , enter 2 to add student in vacant seat(if available), enter 3 to remove a student\n");
	scanf("%d",&choice);
	if(choice==1){
		printarrangment(seating);
	}
	else if(choice==2){
		int no;
		printf("enter number of students you want to accomodate \n");
		scanf("%d",&no);
		addstudents(seating,no);
	}
	else if(choice==3){
		int seatno;
		printf("the seat number you want to remove \n");
		scanf("%d",&seatno);
		removeseat(seating,seatno);
	}
	else{
        printf("invalid input\n");
		return 0;
		}
}
	