#include <bits/stdc++.h>
#define SIZE 10
using namespace std;
typedef long long ll;

ll stair(ll x){
	ll ret=1;
	while(x>1){
		ret*=x--;
	}
	return ret;
}

ll ncr(ll n,ll r,ll n_stair){
	return n_stair/(stair(r)*stair(n-r));
}

int main(void){
	cin.tie(0);
	ios::sync_with_stdio(false);

	int n,a,b;
	int i,j;
	int tmp;
	ll all=0;
	ll answer;
	ll n_stair;
	ll modulo=pow(10,9)+7;
	int counter=0;
	double ave;
	vector<int> given;

	cin >> n >> a >> b;
	
	n_stair=stair(n);
	
	all=pow(2,n)-1;

	cout << answer << endl;

	return 0;
}

