#include<stdio.h>
#include<stdlib.h>

void task1(int arr[],int iSize)
{
	int i=0,iMax1=0,iMax2=0;
	for(i=0;i<iSize;i++)
	{
		if(iMax1<arr[i])
		{
			iMax1=arr[i];
		}
	}
	for(i=0;i<iSize;i++)
	{
		if((arr[i]!=iMax1) && (iMax2<arr[i]))
		{
			iMax2=arr[i];
		}
	}
	for(i=0;i<iSize;i++)
	{
		if((arr[i]!=iMax1)&&(arr[i]!=iMax2))
		{
			printf("%d\t",arr[i]);
		}
	}
}

int main()
{
	int *p=NULL;
	int iLen=0,i=0;

	printf("Enter how many elements u want : ");
	scanf("%d",&iLen);

	p=(int*)malloc(iLen*sizeof(int));

	if(p==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}

	printf("Enter %d elements: \n",iLen);
	for(i=0;i<iLen;i++)
	{
		printf("Enter %d ele: ",i+1);
		scanf("%d",&p[i]);
	}

	task1(p,iLen);
	
	free(p);
	return 0;
}
