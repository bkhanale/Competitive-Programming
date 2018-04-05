#include <bits/stdc++.h>
using namespace std;
typedef int ll;
const int N = 110010;

ll n,q,block,tot;
ll a[N],p[N],l[N];
ll r[N],bel[N],xorr[N];
ll fnbhu[N*220][2],fnval[N*220],rt[N];

// The functions gtx and scan_integer were obtained from stackoverflow for faster input
char get() {
	static char buf[N], *p1 = buf, *p2 = buf;
	if (p1 == p2) {
		p2 = (p1 = buf) + fread(buf, 1, N, stdin);
		if (p1 == p2) return EOF;
	}
	return *p1++;
}
void scan_integer(ll &x) {
	x = 0;
	static char c;
	while (c > '9' || c < '0') c = get();
	while (c >= '0' && c <= '9') {
		x = x * 10 + c - '0';
		c = get();
	}
}

void ins(ll bhu,ll pp,ll tt){
	ll fnow=rt[bhu];
	int i=0,j=0;
	for(i=20;i>=0;i--){
		j=pp&1;
		if(!fnbhu[fnow][j]){
			tot++;
			fnbhu[fnow][j]=tot;
		}
		fnow=fnbhu[fnow][j];
		pp>>=1;
	}
	fnval[fnow]+=tt;
}

ll query(ll ii,ll xorrr){
	ll fnow=rt[ii];
	int i=0,j=0;
	for(i=20;i>=0;i--){
		j=xorrr&1;
		if(!fnbhu[fnow][j]){
			return 0;
		}
		fnow=fnbhu[fnow][j];
		xorrr>>=1;
	}
	return fnval[fnow];
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	//cin>>n>>q;
	//scanf("%lld%lld",&n,&q);
	int i,j;
	scan_integer(n);
	scan_integer(q);
	tot=n+1;
	ll block=(sqrt(n)/4+1)*3;
	for(i=1;i<=n;i++){
		//cin>>a[i];
		//scanf("%lld",&a[i]);
		scan_integer(a[i]);
		rt[i]=i;
		p[i]=p[i-1]^a[i];
		bel[i]=(i-1)/block+1;
		if(!l[bel[i]]){
			l[bel[i]]=i;
		}
		r[bel[i]]=i;
	}
	block=bel[n];
	for(i=1;i<=block;i++){
		for(j=l[i];j<=r[i];j++){
			ins(i,p[j],1);
		}
	}
	ll ch,qi,qk;
	while(q--){
		//cin>>ch>>qi>>qk;
		//scanf("%lld%lld%lld",&ch,&qi,&qk);
		scan_integer(ch);
		scan_integer(qi);
		scan_integer(qk);
		ll bhu=bel[qi];
		if(ch&1){
			qk^=a[qi];a[qi]^=qk;
			for(i=qi;i<=r[bhu];i++){
				ins(bhu,p[i],-1);p[i]^=qk;
				ins(bhu,p[i],1);
			}
			for(i=bhu+1;i<=block;i++){
				xorr[i]^=qk;
			}
		}else{
			ll ans=0;
			for(i=1;i<=bhu-1;i++){
				ans+=query(i,qk^xorr[i]);
			}
			for(i=l[bhu];i<=qi;i++){
				if((p[i]^xorr[bhu])==qk){
					ans++;
				}
			}
			printf("%lld\n",ans);
		}
	}
	return 0;
}

// I learned a new concept through this problem :-> SQRT Decomposition