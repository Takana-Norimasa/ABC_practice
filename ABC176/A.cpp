#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N,X,T;
	int i,k;
	int ans=0;
	int ctr=0;

	cin >> N >> X >> T;

	
	if(N%X==0)
		ans=(N/X)*T;
	else 
		ans=(N/X+1)*T;

	cout << ans << endl;
	return 0;
}

