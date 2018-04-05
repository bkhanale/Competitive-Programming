#include<bits/stdc++.h>
using namespace std;
typedef struct point{
	int x;
	int y;
 
}point;
std::vector<point> v;
long long int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}	
long long int findPoints(point a,point b){
	if(a.x==b.x){
		return abs(a.y-b.y)-1;
	}else if(a.y==b.y){
		return abs(a.x-b.x)-1;
	}else{
		return gcd(abs(a.x-b.x),abs(a.y-b.y))-1;
	}
}
long long int findArea(point p[],int n){
	long long int res =0;
	for(int i=0;i<n-1;i++){
		res += (p[i].x+p[i+1].x)*(p[i].y-p[i+1].y);
	}
	res /=2;
	return res;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		point p[n];
		for(int i=0;i<n;i++){
			cin>>p[i].x>>p[i].y;
		}
		long long int area = findArea(p,n);
		long long int onLinePoints = n;
		for(int i=0;i<n-1;i++){
			onLinePoints += findPoints(p[i],p[i+1]);
		}
		long long int inPoints = area - onLinePoints +1;
		if(inPoints==0){
			cout<<-1<<endl;
		}else{
			int max = n/10;
			if(v.size()<=max){
				for(int i=0;i<v.size();i++){
					cout<<v[i].x<<" "<<v[i].y<<endl;
				}
			}else{
				for(int i=0;i<=max;i++){
					cout<<v[i].x<<" "<<v[i].y<<endl;
				}
			}
		}
	}
	return 0;
}