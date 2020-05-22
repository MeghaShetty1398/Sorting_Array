#include<iostream>
#include<conio.h>
using namespace std;
void get_input(int a[],int n)
{
	cout<<"Enter "<<n<<" numbers:\n ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void print_array(int a[],int n)
{
	cout<<"\n The numbers in array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void bubble_sort(int a[],int n)
{	cout<<"\n************************************************";
	cout<<"\nBUBBLE SORT";
	cout<<"\n************************************************";
	for(int i=1;i<n;i++)
	{	
		for(int j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}



int main()
{
	int n;
	cout<<"Number of element you want in array: ";
	cin>>n;
	int a[n];
	get_input(a,n);
	bubble_sort(a,n);
	print_array(a,n);
}

