#include<stdio.h>
int main()
{
	int i,a[10],n,k,temp[k];
	printf("enter the size");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("array befor rotation:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\nenter the no.of ratation:");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		temp[i]=a[i];
		
		
	}
	int x=k;
	for(i=0;x<n;i++)
	
	{
		a[i]=a[x++];
		
	}
	x=0;
	for(i=n-k;i<n;i++)
	{
		a[i]=temp[x++];
	}
	printf("rotation of array:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	
	
	
	return 0;
}
