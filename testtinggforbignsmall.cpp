/*
============================================================================
 FILE        : sanielCr_LE7_11.c,
 AUTHORS      : SANIEL, CRIS VILLEM P. 
 DESCRIPTION : The program helps the user to choose for what math problem or equation they want to calculate.
 COPYRIGHT   : created by SANIEL, CRIS VILLEM P and SALIVIO, MOSES ANDREW 
 REVISION HISTORY
 Date:               By: 	      			  			Description:
11/11/2023		Moses Andrew Salivio		Finished coding
11/14/2023		Cris Villem P. Saniel		Debugging
============================================================================
*/

#include<stdio.h>
int numberCheck(int num[i]);
int numberList(int num[i]);

int main()
{
	int num[10], i=0, bigNum, smallNum, checkNum;
	
	while(i<10)
	{
		printf("Enter a number: ");
		scanf("%d", &num[i]);
		
		checkNum = numberCheck(num[i]);
		if(!i)
		{
			bigNum = num[i];
			smallNum = num[i];
		}
		else if(num[i]>bigNum)
		{
			bigNum = num[i];
		}
		else if(num[i]<smallNum)
		{
			smallNum = num[i];
		}
		i++;
	}
	
	printf("\nThe entered numbers were:\n");
	i=0;
	while(i<10)
	{
		printf("%d\n", num[i]);
		i++;
	}
	printf("\nThe largest number: %d\nThe smallest number: %d", bigNum, smallNum);
	return 0;
}

int numberCheck(int num[i])
{
	
}
