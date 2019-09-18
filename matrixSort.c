#include<stdio.h>
#include<stdlib.h>

void disp(int **arr,int r,int c)
{
	int i=0,j=0,k=0,p=0,temp=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<r;k++)
			{
				for(p=0;p<c;p++)
				{
					if(arr[i][j]<arr[k][p])
					{
						temp=arr[i][j];
						arr[i][j]=arr[k][p];
						arr[k][p]=temp;
					}
				}
			}
		}
	}
}

int main()
{
	int **p=NULL;
	int r=0,c=0,i=0,j=0;
	
	printf("How many rows: ");
	scanf("%d",&r);
	
	printf("How many cols: ");
	scanf("%d",&c);
	
	p=(int**)malloc(r*sizeof(int));
	
	for(int i=0 ; i<c ; i++){
		*(p+i)=(int *)malloc(sizeof(int)*c);
	}
	
	printf("Enter %d ele: \n",r*c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	
	disp(p,r,c);
	
	printf("Sorted matrix is : \n");
	for(i=0;i<r;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",p[i][j]);
			}
		}
		else
		{
			for(j=c-1;j>=0;j--)
			{
				printf("%d\t",p[i][j]);
			}	
		}
		printf("\n");
	}
	return 0;
}
