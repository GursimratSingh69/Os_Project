#include<stdio.h>
int main()
{ int i,n,p[10]={1,2,3,4,5,6,7,8,9,10},min,k=1,burst=0,pri[10];
int bt[10],temp,temp1,j,at[10];
printf("\nenter the No. processes ");
scanf("%d",&n);
for(i=0;i<n;i++) {
printf("\tenter the burst time of %d process",i+1);
scanf("%d",&bt[i]);
printf("\tEnter the arrival time of %d process ",i+1);
scanf("%d",&at[i]);
printf("\tEnter the priority time of %d process",i+1);
scanf("%d",&pri[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(at[i]<at[j])/*sorting acc to arrival time*/
{
temp=p[j];
p[j]=p[i];
p[i]=temp;
temp=at[j];
at[j]=at[i];
at[i]=temp;
temp1=bt[j];
bt[j]=bt[i];
bt[i]=temp1;
}
}
}
for(j=0;j<n;j++)
{   burst=burst+bt[j];
   min=bt[k];
for(i=k;i<n;i++)/*main logic*/
{ min=pri[k];
if (burst>=at[i])
{
if(pri[i]<min)
{
temp=p[k];
p[k]=p[i];
p[i]=temp;
temp=at[k];
at[k]=at[i];
at[i]=temp;
temp1=bt[k];
bt[k]=bt[i];
bt[i]=temp1;
temp=pri[k];
pri[k]=pri[i];
pri[i]=temp;

}
}
}
k++;
}
}
