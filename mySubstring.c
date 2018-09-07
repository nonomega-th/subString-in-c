/*
 *
 * Filename:    mySubstring.c
 * Author:      Timanon Losupanphorn
 * Description: My substring function not include string main function.
 *
 *
 */ 

#include<stdio.h>
char *mySubstring(char *mainStr,int start,int length){
    char *subStr;
    subStr = mainStr+(start-1);
    subStr[length] = '\0';
    return subStr;
}
int main(){
    char mainStr[1000];
    int startPoint,length = 0;
	printf("Enter your String: ");
    scanf("%[^\n]s",mainStr);
    while(1){ // Retry input start point
        printf("Enter the position: ");
        if(scanf("%d",&startPoint) != 1){ //character entered
            printf("Invalid input value, please try again.\n");
            scanf("%*s");//clear the invalid character(s) from stdin
        }
        else{ break; }
    }
    while(1){ // Retry input end pointx
        printf("Enter length of sub string: ");
        if(scanf("%d",&length) != 1){ //character entered
            printf("Invalid input value, please try again.\n");
            scanf("%*s");//clear the invalid character(s) from stdin
        }
        else{ break; }
    }
    printf("Your string: %s\n",mainStr);
    printf("Sub string:  %s\n",mySubstring(mainStr,startPoint,length));
	return 0;
}
