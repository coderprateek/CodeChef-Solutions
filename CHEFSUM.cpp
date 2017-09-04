#include <iostream>
#include<vector>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		vector<int> a(n,0);
		for(int i=0; i<n;i++){
			cin>>a[i];
		}
		int k=a[0];
		int out=0;
		for(int i=0;i<n;i++){
			if(k>a[i]){
				k=a[i];
				out=i;
			}
			
		}
		out=out+1;
		cout<<out<<endl;
		t--;
	}
 
	return 0;
} 