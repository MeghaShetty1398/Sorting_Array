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

void insertion_sort(int a[],int n)
{	cout<<"\n************************************************";
	cout<<"\nINSERTION SORT";
	cout<<"\n************************************************";
	int i,j,temp;
	i=1;
	while(i<n)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
		i=i+1;
	}
}
int main()
{
	int n;
	cout<<"Enter number of element you want in array:\n";
	cin>>n;
	int a[n];
	get_input(a,n);
	insertion_sort(a,n);
	print_array(a,n);
}

