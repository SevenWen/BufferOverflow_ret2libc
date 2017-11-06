#include<stdio.h>
#include "penguin.h"
#include "tuxsay.h"
#include<string.h>
#include <stdlib.h>

#define main real_main

// gcc -m32 -fno-stack-protector -c tucksay.c -o tsay.o
// gcc -m32 -z execstack tsay.o -o tsay

//esp            0xffffcf70	0xffffcf70
//ebp            0xffffcfc8	0xffffcfc8
// buffer 0xffffcf89

int get_max();
void printp(char *arr[],int n);

int vuln(char* str)
{
	char *string="Did it";
	char i=0;
	char buffer[20];
	strcpy(buffer,str);
}

int main(int argc,char *argv[])
{

    vuln(argv[1]);
    int width=get_max(argv,argc);   //width will be used to determine the number of "*" (s) to be used in first line
    
    int col=0,num=1;  // num is the variable through which we'll traverse the input command line arguments
    //ideally we don't want to print the name of the originating file (in this case tucksay.c),that's why num is initialized to 1
    int counter=0,flag=0;      //in case when the width of the terminal has been reduced heavily so the for loop won't terminate unless,we put some flag on it;
    printp(argv,argc);    //temporarily creating a function to print the pattern,I aim to use the below given function finally
    /*
    for(;col<=width || num<argc;col++)
    {
    	//printf("LINE 25\n");
    	if(col==0)
    		printf("| ");
    	else if(col==width)
    	{
    		printf(" |\n");
    		col=-1;
    	}
    	else
    	{
    			if(strlen(argv[num])<=(width-col))
    			{
    				printf("%s ",argv[num]);
    				col+=strlen(argv[num])-1;
    				num++;
    			}
    			else
    			{
    				int j;
    				for(j=1;j<=(width-col);j++)
    					printf(" ");
    				col=0-1;
    			}
    		
    	}
    	counter++;
    	if(counter==10000)
    	{
    		flag=1;
    		break;
    	}
    
    } 
    if(flag==1)
    	printf("\nERROR !\n");
    */
    print_tux();
    return 0;
}
int get_max(char *str[],int n)
{
	int i,max=0;
	for(i=0;i<n;i++)
	{
		if(strlen(str[i])>max)
			max=strlen(str[i]);
	}
	return max;
}
void printp(char *arr[],int n)
{
	int count=1;
	int i=0;
	int max=get_max(arr,n);
	max*=3;
	int col=0;
	for(;i<max+5;i++)
    	printf("*");
    printf("\n");
	while(count<n)
	{
		if(col==0)
		{
			printf("| ");
			col++;
		}
		else if(strlen(arr[count])<=(max-col))
		{
			printf("%s ",arr[count]);
			col+=strlen(arr[count]);
			count++;
		}
		else
		{
			int j=0;
			for(;j<(max-col);j++)
				printf(" ");
			printf("|\n");
			col=0;
		}
		//count++
	}
	int j=0;
	for(;j<(max-col);j++)
		printf(" ");
	printf("|\n");
	i=0;
    for(;i<max+5;i++)
    	printf("*");
    printf("\n");
}
