#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<string> pre_ans;
bool ret=false;
struct Node
{
	Node *a[26];//As there are 26 alphabets
	Node()
	{
		for(int i=0;i<26;i++)
        {
			a[i]=NULL;
		}
	}
};
void inssert(Node *root,string s,int it)
{
	if(it==int(s.size()))
    {
		return ;
	}
	if(root->a[s[it]-'a']!=NULL)//s[i]-'a' to convert back into string
	{
		inssert(root->a[s[it]-'a'],s,it+1);
	}
	else
	{
		Node *temp=new Node();
		root->a[s[it]-'a']=temp;//s[i]-'a' to convert back into string
		inssert(temp,s,it+1);
	}
}
void find_prefix(Node *root,string s,int it)
{
    if(it==int(s.size()))
    {
        ret=true;
        return;
    }
    if(root->a[s[it]-'a']==NULL)
    {
        pre_ans.insert(s.substr(0,it+1));
        return;
    }else{
        find_prefix(root->a[s[it]-'a'],s,it+1);
    }
}
int main()
{
	ll n;
    vector<string> myvec;
    cin>>n;
    Node *root=new Node();
    while(n--)
    {
        char ch;
        cin>>ch;
        if(ch=='+')
        {
            string s;
            cin>>s;
            inssert(root,s,0);
        }
        else if(ch=='-')
        {
            string s;
            cin>>s;
            myvec.push_back(s);
        }
    }
    for(int i=0;i<int(myvec.size());i++)
    {
        find_prefix(root,myvec[i],0);
    }
    if(ret)
    {
        cout<<-1<<endl;
    }else{
        cout<<int(pre_ans.size())<<endl;
        /*set<string>::iterator iter;
        for(iter=pre_ans.begin();iter!=pre_ans.end();++iter)
        {
            cout<<*iter<<endl;
        }*/
        auto itr=pre_ans.begin();
		while(itr!=pre_ans.end())
		{
			cout<<*itr<<endl;
			itr++;
		}
    }
	return (0);
}
 
