//inserting element in an array
#include<iostream>

int main()
{
	int size,poss,b;
	std::cout <<"Enter the size of the array :";
	std::cin >>size;
	int a[size];
	
	for(int i=0;i<size;i++)
	{
		std::cout <<"enter the "<<i+1<<" element of the array : ";               //getting the array from the user
		std::cin >>a[i];                         
	}
	
	std::cout <<"Enter the possition from which the element is to be removed :";
	std::cin >>poss;
	poss--;
	
	for(int k=size;k<=poss;k--)
	{
	a[k-1]=a[k];
	}
	a[poss]=b;
		
	for(int j=0;j<=size;j++)
	{
		std::cout <<a[j];
	}	
}

