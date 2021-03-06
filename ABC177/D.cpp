#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

struct UnionFind{
	vector<int> d;
	UnionFind(int n=0): d(n,-1) {}
	int find(int x){
		if(d[x]<0) return x;
		return d[x]=find(d[x]);
	}
	bool unite(int x,int y){
		x=find(x);
		y=find(y);
		if(x==y) return false;
		if(d[x]>d[y]) swap(x,y);

		d[x]+=d[y];
		d[y]=x;
		return true;
	}
	bool same(int x,int y){return find(x)==find(y);}
	int size(int x){return -d[find(x)];}
};

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,M;
	int i,k;
	int ans=0;
	int ctr=0;

	cin >> N >> M;

	UnionFind uni(N);
	rep(i,M){
		int x,y;
		cin >> x >> y;
		x--;y--;
		uni.unite(x,y);
	}

	rep(i,N) ans=max(ans,uni.size(i));
	cout << ans << endl;

	return 0;
}

