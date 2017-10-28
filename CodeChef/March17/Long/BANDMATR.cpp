#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
class ones{
	public:
	bool operator()(const int &a, const int &b){
		return a < b;
	}
};
class zeroes{
	public:
	bool operator()(const int &a, const int &b){
		return a > b;
	}
};
// class ones and zeroes are obtained from stackoverflow as custom comparators functions to learn how to use them
class mycomparison
{
  bool reverse;
public:
  mycomparison(const bool& revparam=false)
    {reverse=revparam;}
  bool operator() (const int& lhs, const int&rhs) const
  {
    if (reverse) return (lhs>rhs);
    else return (lhs<rhs);
  }
};
// class mycomparison copied from: http://www.cplusplus.com/reference/queue/priority_queue/priority_queue/
// so as to learn priority queue and implement here
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,count1=0,i,j,cnt=0,t1,t2,ans;
        cin>>n;
        ll input;
        //priority_queue<ll,vector<ll>,mycomparison>one;
        //priority_queue<ll,vector<ll>,mycomparison>zero;
        priority_queue<int, vector<int>, ones> one;
		priority_queue<int, vector<int>, zeroes> zero;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>input;
                if(input==1)
                {
                    one.push(abs(j-i));
                }else{
                    zero.push(abs(j-i));
                }
            }
        }
        while(!one.empty()&&!zero.empty()&&one.top()>zero.top())
        {
            one.pop();
            zero.pop();
        }
        if(!one.empty()&&!zero.empty())
        {
            cout<<one.top()<<endl;
        }
        else if(one.empty()&&zero.empty())
        {
            cout<<(n-1)/2<<endl;
        }
        else if(one.empty())
        {
            ll z = zero.top()-1 < 0 ? 0 : zero.top()-1;;
            cout<<z<<endl;
        }
        else if(zero.empty())
        {
            cout<<one.top()<<endl;
        }
    }
    return 0;
}
 
