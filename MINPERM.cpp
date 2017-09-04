#include <iostream>
#include<vector>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		if(n%2==0){
			n=n/2;
			int j=1;
			int i=2;
		while(n>0){
			if(n!=1){
		cout<<i<<" ";
		cout<<j<<" ";
		i=i+2;
		j=j+2;
		n--;	}
			else{
				cout<<i<<" ";
				cout<<j<<endl;
				n--;
			}
		}	
		}
		else{
			int k=n/2;
			int j=1;
			int  i=2;
			while(k>=2){
			cout<<i<<" ";
			cout<<j<<" ";
			i=i+2;
			j=j+2;
			k--;
			}
			cout<<n-1<<" ";
			cout<<n<<" ";
			cout<<n-2<<endl;
		}
		t--;
	}
 
	return 0;
} 