#include<stdio.h>
int main()
{
int n,i,c=0;
printf("Enter a number :");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("Given number is a Prime number");
}
else{
printf("Given number is not a Prime number");
}
return 0;
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
