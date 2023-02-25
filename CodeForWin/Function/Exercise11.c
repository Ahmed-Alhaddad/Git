/*****************************************
 *
 *@file   :  
 *@Brief  :   Write a C program to print all natural numbers between 1 to n using recursion.
 *@Auther :  Ahmed Waheed
 *****************************************
 */

/*************** Include section strat ***************************/
#include <stdio.h>
/*************** Include section end *****************************/

/*************** Globel Variable section start *******************/


/*************** Globel Variable section end *********************/

/*************** Decleration section start *********************/
int Print(int Number);
/*************** Decleration section end *********************/

int main()
{
	int Number = 0;
	printf("Please Enter the Number : ");
	scanf("%d", &Number);
	Print(Number);
	

	return 0;
}

/*************** Defenation Variable section start *********************/
int Print(int Number)
{
	if(Number >= 1)
	{
		printf("%d \n",Number);
	
		Print(++Number);
	}
}



/***************Defination Variable section end *********************/

/**************************************************
 *User                    Date                Brief
 **************************************************
 *Ahmed Waheed            				Write a C program to print all natural numbers between 1 to n using recursion.
 *****************************************************/

