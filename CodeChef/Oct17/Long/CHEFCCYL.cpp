#include <bits/stdc++.h>
using namespace std;

struct CYCLE
{
	int num_nodes,source,dest;
	vector<int>weight;
	vector<int>sum_weight;

	int bhushan_does_this(int a,int b)
	{
		if(a==b)
			return 0;
		if(a>b)
			swap(a,b);
		int temp=sum_weight[b-1]-(a==0?0:sum_weight[a-1]);
		return min(temp,sum_weight[num_nodes-1]-temp);
	}
};

CYCLE C[100005];
int pathCin[100005];
int pathCout[100005];
int sum_all;
int connection[100005][3];

int min_within_cycle(int c,int a,int b)
{
	return C[c].bhushan_does_this(a,b);
}

int min_from_cycle(int c1,int c2,int t)
{
	if(c1>c2)
		swap(c1,c2);
	if(t==0)
	{
		return pathCin[c2-1]-(c1==0?0:pathCin[c1-1])+pathCout[c2-1]-pathCout[c1];
	}else{
		return sum_all-C[c1].bhushan_does_this(C[c1].dest,C[c1].source)-C[c2].bhushan_does_this(C[c2].dest,C[c2].source)-(pathCin[c2-1]-(c1==0?0:pathCin[c1-1])+pathCout[c2-1]-pathCout[c1]);
	}
	return 0;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		for(int i=0;i<n;i++)
		{
			int ai;
			cin>>ai;
			C[i].weight.resize(ai);C[i].num_nodes=ai;
			for(int j=0;j<ai;j++)
			{
				cin>>C[i].weight[j];
			}
			C[i].sum_weight.resize(ai);
			C[i].sum_weight[0]=C[i].weight[0];
			for(int j=1;j<ai;j++)
			{
				C[i].sum_weight[j]=C[i].sum_weight[j-1]+C[i].weight[j];
			}
		}


		for(int i=0;i<n;i++)
		{
			cin>>connection[i][0]>>connection[i][1]>>connection[i][2];
			connection[i][0]--;connection[i][1]--;
		}

		sum_all=0;
		for(int i=0;i<n;i++)
		{
			if(i==0)
			{
				C[i].source=connection[n-1][1];
				C[i].dest=connection[i][0];
			}else{
				C[i].source=connection[i-1][1];
				C[i].dest=connection[i][0];
			}
			sum_all+=C[i].bhushan_does_this(C[i].dest,C[i].source)+connection[i][2];
		}

		pathCout[0]=C[0].bhushan_does_this(C[0].dest,C[0].source);
		pathCin[0]=connection[0][2];
		for(int i=1;i<n;i++)
		{
			pathCin[i]=pathCin[i-1]+connection[i][2];
			pathCout[i]=pathCout[i-1]+C[i].bhushan_does_this(C[i].dest,C[i].source);
		}

		while(q--)
		{
			int v1,c1,v2,c2;
			cin>>v1>>c1>>v2>>c2;
			v1--;c1--;v2--;c2--;
			if(c1>c2)
			{
				swap(c1,c2);swap(v1,v2);
			}
			cout<<min(min_within_cycle(c1,v1,C[c1].dest)+min_from_cycle(c1,c2,0)+min_within_cycle(c2,v2,C[c2].source),min_within_cycle(c1,v1,C[c1].source)+min_from_cycle(c1,c2,1)+min_within_cycle(c2,v2,C[c2].dest))<<endl;
		}
	}
	return 0;
}