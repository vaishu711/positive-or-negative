#include<stdio.h>
int main()
{
int array[50],n,c,d,swap;
printf("Enter number of elements\n");
scanf("%d",&n);
printf("enter %d integers\n",n);
for(c=0;c<n;c++)
scanf("%d",&array[c]);
for(c=0;c<(n-1);c++)
{
for(d=0;d<n-c-1;d++)
{
if(array[d]>array[d+1])
{
swap=array[d+1];
array[d]=array[d+1];
array[d+1]=swap;
}
}
}printf("SORTED LIST IS:\n");
for(c=0;c<n;c++)
printf("%d\n",array[c]);
return 0;
}
