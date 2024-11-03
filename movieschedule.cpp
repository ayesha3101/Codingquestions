#include<stdio.h>
#include<string.h>
void checkmovie(char movie[][20],int day,char name[20]){
	for(int i=0;i<strlen(name);i++){
		if(name[i]>=65 && name[i]<=90 && name[i]!=' '){
			name[i]=name[i]+32;              //to convert to lower case
		}
	}
	if(strcmp(movie[day-1],name)==0){
		printf("yes %s is scheduled for day %d",name,day);     //strcmp to check if movie is being scheduled for the mentioned date
	}
}
void schedule(char movie[][20]){
	printf("Here is the movie schedule for the week\n");  //loop to print each string
	for(int i=0;i<7;i++){
		printf("Day %d : %s",i+1,movie[i]);
		printf("\n");
	}
}
int main(){
	char movie[7][20]={"barbie","oppenhiemer","fast and furious","john wick","moana","tangled","harry potter"};
	int choice;
	printf("enter 1 to check if a movie is scheduled for a specific day and 2 to view movie schedule for a week\n");
	scanf("%d",&choice);
	getchar();      //when using fgets after scanf clear the next line left in the buffer using getchar
	if(choice==1){
	char name[20];
	int day;
	printf("enter the movie name ");
	fgets(name,sizeof(name),stdin);
	name[strcspn(name, "\n")] = '\0';        //to null terminate the string
	printf("enter the day ");
	scanf("%d",&day);
	checkmovie(movie,day,name);     //function call
	}
	else if(choice==2){
	schedule(movie);	
	}
	else{
		printf("invalid input\n");
	}
	return 0;
}