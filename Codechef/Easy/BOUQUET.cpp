#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	long long int ar[4][4];
	long long int a,b,c,i,j,k;
	long long int test;
	scanf("%lld",&test);
	long long int sum1=0,max1=0,max2=0,sum2=0;
 
	while(test--)
	{
		long long int row[10]={0},col[10]={0};
 
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				scanf("%lld",&ar[i][j]);
			}
		}
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=3;j++)
			{
				//row type and col color
				row[i]=row[i]+ar[i][j];
				col[j]=col[j]+ar[i][j];
			}
		}
		sum1=0;
		max1=0;
		max2=0;
		sum2=0;
		for(i=1;i<=3;i++)
		{
			sum1=row[i];
			if(sum1>max1)
				max1=sum1;
		}
		for(i=1;i<=3;i++)
		{
			sum2=col[i];
			if(sum2>max2)
				max2=sum2;
		}
		//printf("%d %d",max1,max2);
		if(max1==0 && max2==0)
			printf("0\n");
		else{
 
			if(max1>max2){
				if(max1%2==0)
					printf("%lld\n",max1-1);
				else
					printf("%lld\n",max1);
			}
 
			else{
				if(max2%2==0)
					printf("%lld\n",max2-1);
				else
					printf("%lld\n",max2);
			}
		}
	}
	return 0;
}
 
