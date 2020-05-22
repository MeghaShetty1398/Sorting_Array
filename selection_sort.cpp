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
int min(int a[],int n,int k)
{
	int loc=k;
	int min=a[k];
	for(int i=k+1;i<=n-1;i++)
	{
		if(min>a[i])
		{
			min=a[i];
			loc=i;
		}
	}
	return loc;
}
void selection_sort(int a[],int n)
{
	cout<<"\n************************************************";
	cout<<"\nSELECTION SORT";
	cout<<"\n************************************************";
	for(int k=0;k<=n-2;k++)
	{
		int loc=min(a,n,k);
		int temp;
		temp=a[k];
		a[k]=a[loc];
		a[loc]=temp;
	}
}
int main()
{
	int n;
	cout<<"Enter number of element you want in array:\n";
	cin>>n;
	int a[n];
	get_input(a,n);
	selection_sort(a,n);
	print_array(a,n);
}

