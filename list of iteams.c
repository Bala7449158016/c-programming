#include<stdio.h>
#include<string.h>

int main(){
	
	int i,j;
	char array[7][10]={"laptop","bag","pencil","paper","books","phone","cable"};  // initialize the iteams inside array
	char temp[10];
	for(i=0;i<7;i++){
		printf("%s\n",array[i]);
	}
	
	for(i=0;i<7;i++){                               // display the iteams name in alphabetical order
		for(j=i+1;j<7;j++){
			if(strcmp(array[i],array[j])>0){
				strcpy(temp,array[i]);
				strcpy(array[i],array[j]);
				strcpy(array[j],temp);
			}
			
		}
	}
	printf("\n");
	printf("Alphabetical order of  the iteams name:\n");
	printf("\n");
	for(i=0;i<7;i++){
		printf("%s\n",array[i]);
	}
	
	printf("\n");
	
	char search[10];
    int	count=0;   
	int place;                     //display the iteam name , enter by user and print the iteam & it's position
	printf("enter the item name:");
	gets(search);
	for(i=0;i<7;i++){
		if(strcmp(array[i],search)==0){
			printf("iteam name:%s position:%d\n",array[i],i);
			place=i;
			break;
		}
		else{
			count=count+1;
		}
	}
	if(count>=6){
		place=7;
		printf("NO Such item inside ");
	}
	
	printf("\n");                   //remove the iteam enter by user, and display the remaining iteams.
	for(i=0;i<7;i++){
		
		if(i==place){
			
			for(j=place;j<7;j++){
				
			  strcpy(array[j],array[j+1]);
			}
			
		}
	}
	for(i=0;i<7;i++){ 
	printf("%s\n",array[i]);
	}
	printf("\n");	
	return 0;
}
