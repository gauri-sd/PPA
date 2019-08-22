#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkPalindrome(char *str)
{
	char *start=NULL;
	char *end=NULL;
	if(str==NULL)
	{
		return -1;
		
	}
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<=end)
	{
		if(*start!=*end)
		{
			break;
		}
		start++;
		end--;
	}
	if(start>end)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()
{
	BOOL bRet=FALSE;
	char arr[50]={'\0'};
	printf("Enter String: ");
	scanf("%[^'\n']s",arr);
	bRet=chkPalindrome(arr);
	if(bRet==TRUE)
	{
		printf("TRUE\n");
	}
	else
	{
		printf("FALSE\n");
	}
	return 0;
}
