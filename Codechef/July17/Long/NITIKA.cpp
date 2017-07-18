#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    ll t;
    cin>>t;
    while(t--)
    {
        char s[100001];
        string res="";
        ll cnt=0,len,i=0,j=0;
        scanf("%[^\n]%*c",s);
        len = strlen(s);

        for(i=0;i<len;i++)
        {
            j=0;
            while(s[i]!=' ')
            {
                if(j==0)
                {
                    s[i]=toupper(s[i]);
                    cnt=i;
                    res+=s[i];
                    res+=". ";
                }else{
                    s[i]=tolower(s[i]);
                }
                j++;i++;
            }
        }
        //res[res.length()-1]='\0';
        //cout<<"cnt"<<cnt<<endl;
        j=res.length()-2;i=cnt+1;
        res[j]=s[i];
        i++;
        res[j+1]=s[i];
        i++;
        while(i<len)
        {
            res+=s[i];
            i++;
        }
        cout<<res<<endl;
        for(i=0;i<len;i++)
        {
            s[i]='\0';
        }
        for(i=0;i<res.length();i++)
        {
            res[i]='\0';
        }
    }
    return 0;
}
