#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int prob[7]={0};
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            if(s=="cakewalk"){
                prob[0]++;
            }
            else if(s=="simple"){
                prob[1]++;
            }
            else if(s=="easy"){
                prob[2]++;
            }
            else if(s=="easy-medium"){
                prob[3]++;
            }
            else if(s=="medium"){
                prob[4]++;
            }
            else if(s=="medium-hard"){
                prob[5]++;
            }
            else if(s=="hard"){
                prob[6]++;
            }
        }
        if(prob[0]>=1 && prob[1]>=1 && prob[2]>=1 && (prob[3]>=1 || prob[4]>=1) && (prob[5]>=1 || prob[6]>=1)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}  