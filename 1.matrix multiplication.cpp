#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
    int a[100][100],b[100][100],mul[100][100];
	int rows,columns,i,j,k;
	system("cls");  
	printf("enter the number of rows : ");    
	scanf("%d",&rows);    
	printf("enter the number of columns : ");    
	scanf("%d",&columns);    
	printf("enter the first matrix element : \n");    
	
	for(i=0;i<rows;i++)    
	{    
	    for(j=0;j<columns;j++)    
		{    
		    scanf("%d",&a[i][j]);    
        }    
    }    
	printf("enter the second matrix element=\n");    
	for(i=0;i<rows;i++)    
    {    
        for(j=0;j<columns;j++)    
        {    
            scanf("%d",&b[i][j]);    
        }    
    }    
    
	printf("multiply of the matrix=\n");    
	for(i=0;i<rows;i++)    
	{    
        for(j=0;j<columns;j++)    
		{     
            mul[i][j]=0;    
            for(k=0;k<columns;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }      
    for(i=0;i<rows;i++)    
    {    
        for(j=0;j<columns;j++)    
        {    
            printf("%d\t",mul[i][j]);    
        }    
        printf("\n");    
    }    
	
	return 0;  
} 
