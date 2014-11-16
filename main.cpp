#include <stdio.h>
#include <iostream>
#include <string>
#include <exception>
#include "person.h"
using namespace std;


void QuickSort(int *array, int left, int right)
{
	cout<<"recursing"<<endl;
	int pivot =  array[(left+right)/2];
	int i=left;
	int j=right;

	while(i<=j)
	{
		while (array[i]<pivot)
			i++;
		while (array[j]>pivot)
			j--;
		if(array[i]>=array[j])
		{
			int temp;
			temp = array[i];
			array[i]=array[j];
			array[j]=temp;
			//swap
			i++;
			j--;
		}

	}
	if (left<j)
		QuickSort(array,left,j);
	if (right >i)
		QuickSort(array,i,right);
}
int fib(int n)
{
	if (n==1) return 1;
	if (n==0) return 0;

	return(fib(n-1)+fib(n-2));
}
void reverseString(char *c)
{
	try
	{
	char *ptr1, *ptr2;
	ptr1=c;
	ptr2=c;
	int count=0;
	while(*ptr2!='\0')
	{
		count++;
		cout<<*ptr1<<endl;
		ptr2++;
	}
	ptr2--;
	count = count/2;
	while (count!=0)
	{
		char temp;
		temp =   *ptr1;
		*ptr1= *ptr2;
		*ptr2 = temp;
		ptr1++;ptr2--;count--;
	}
	cout<<"the count" <<count;
	string cs;
	cs = string(c);
	cout<<cs;
	}
	catch(int i)
	{
		cout<<i<<"has occured"<<endl;
	}
	
	
	return;
	
}

int main()
{
	// #reverse String
/*	char c[11]  = "char g";
	reverseString(c);
	*/
	// #fib
	cout<<fib(12)<<endl;

	// testing neatly made talbe
	printf("%4d, %.6f",22,0.23423432);

	//testing quick sort
	int arr[7]= {12,24,1,5,63,0,1};
	for(int i=0;i<7;i++)
		cout<<arr[i]<<endl;
	QuickSort(arr,0,6);
	for(int i=0;i<7;i++)
		cout<<arr[i]<<endl;
	//testing the hex bin and other conversions.


	//testing oops concepts
	person *p; 
	p = new employee();
	employerr

	return 1;

}
