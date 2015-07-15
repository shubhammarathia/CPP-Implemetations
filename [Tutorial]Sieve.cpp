#include<bits/stdc++.h>
using namespace std;

int main(){
	typedef long long int lli;
	lli i ,j, z=1;
	vector<lli> v(100001,1);
	lli n;
	cin>>n;
	for(i=2;i<n;i++){
		if(v[i]){
			for(j=i;i*j<n;j++)
			v[i*j]=0;
		}
	}
	for(i=2;i<n;i++)
	if(v[i])
	cout<<i<<endl;
	return 0;
}
