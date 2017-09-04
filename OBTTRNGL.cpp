#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t>0){
	long long int n,A,B;
	cin>>n>>A>>B;
	long long int d=n/2;
	long long int e=abs(A-B);
	if(n%2==0){
		if(e<d){
			cout<<e-1<<endl;
		}
		if(e==d){
			cout<<"0"<<endl;
		}
		if(e>d){
			cout<<n-e-1<<endl;
		}
	}
	else{
			if(e<=d){
			cout<<e-1<<endl;
		}
			if(e>d){
			cout<<n-e-1<<endl;
		}
	}
	t--;
}
	return 0;
} 