#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int MAXVAL = 1e3+1e2;
int cal_shifty(char s)
{
    if(s=='D'){
        return 1;
    }
    else if(s=='U'){
        return -1;
    }
    return 0;
}
int cal_shiftx(char s)
{
    if(s=='L'){
        return -1;
    }
    else if(s=='R'){
        return 1;
    }
    return 0;
}
int grid[MAXVAL][MAXVAL];
int new_mat_location[MAXVAL][MAXVAL];
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long int t;
    cin>>t;
    while(t--)
    {
        vector<pair<int,int> > vecpair;
        int sx=0,sy=0,count1=0,count0,ans=0,i,j,k;
        vector<int> vec;
        ll l,n;
        vec.push_back(0);
        cin>>l>>n;
        set<pair<int,int> > setpair;
        count0=4*n;
        vecpair.push_back({sy,sx});
        string s;
        setpair.insert(vecpair[0]);
        cin>>s;
        for(i=0;i<l;i++)
        {
            sy=sy+cal_shifty(s[i]);
            //cout<<"sy="<<sy<<endl;
            sx=sx+cal_shiftx(s[i]);
            //cout<<"sx="<<sx<<endl;
            if(setpair.find({sy,sx})==setpair.end())
            {
				vecpair.push_back({sy, sx});
				vec.push_back(i);
				setpair.insert({sy,sx});
			}
        }
        for(i=0;i<MAXVAL;i++)
        {
            for(j=0;j<MAXVAL;j++)
            {
                grid[i][j]=0;
            }
        }
        for(i=1;i<=n;i++)
        {
			for(j=1;j<=n;j++)
			{
				char ch;
				cin>>ch;
				if(ch!='#')
				{
					grid[i][j]=1;
				}else{
					grid[i][j]=0;
				}
				new_mat_location[i][j] =(1<<29);
			}
		}
		/*for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(grid[i][j]==0)
                {
                    count0++;
                }else{
                    count1++;
                }
            }
        }*/
        for(i=1;i<=n;i++)
        {
			for(j=1;j<=n;j++)
			{
				if(grid[i][j]==1)
				{
					new_mat_location[i][j]=l;
					for(k=0;k<vecpair.size();k++)
					{
						if(!grid[i+vecpair[k].first][j+vecpair[k].second])
						{
							new_mat_location[i][j]=vec[k];
							break;
						}
					}
				}
			}
		}
 
		/*for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<new_mat_location[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;*/
 
		for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=ans^new_mat_location[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
 
