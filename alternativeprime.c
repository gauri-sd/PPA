#include<stdio.h>
#include<stdlib.h>

void Task2(int arr[],int isize)
{
	int i=0,j=0,iCnt=0;
	for(i=0;i<isize;i++)
	{
		for(j=2;j<=(arr[i]/2);j++)
		{
			if(arr[i]%j==0)
			{
				break;
			}
		}
		if(j>(arr[i]/2))
		{
			iCnt++;
			if(iCnt%2!=0)
			{
				printf("%d\t",arr[i]);
			}
		}	
	}
}

int main()
{
	int *p=NULL;
	int i=0,iLen=0;
	
	printf("Enter how many elements u want : ");
	scanf("%d",&iLen);
	
	p=(int*)malloc(sizeof(int)*iLen);
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elemrnts : \n",iLen);
	for(i=0;i<iLen;i++)
	{
		printf("Enter %d ele : ",i+1);
		scanf("%d",&p[i]);
	}
	Task2(p,iLen);
	
	free(p);
	return 0;
}
