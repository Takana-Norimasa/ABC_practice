#include <bits/stdc++.h>
#define PI 3.141592653589793
#define rep(i,n) for (int i=0;i<(n);i++)
using namespace std;
using ll = long long;

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int N;
	int i,k;
	int ans=0;
	int ctr=0;

	cin >> N;

	ans=N%1000;
	if(ans)
		cout << 1000-ans << endl;
	else
		cout << 0 << endl;

	return 0;
}

