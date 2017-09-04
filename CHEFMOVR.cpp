#include <iostream>
#include<vector>
using namespace std;
 
int main() {
int t;
cin>>t;
for(int i=0;i<t;i++){
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector< long long int> a(n);
    long	long	int sum=0;
   long	    long	int q=0;
	for(int j=0;j<n;j++){
		cin>>a[j];
		sum = sum+a[j];
	}
	if(sum%n==0){
		sum = sum/n;
		for(int j=0;j<n-k;j++){
			if(a[j]==sum){
				continue;
			}
		long long 	int h=0;
			if(a[j]<sum){
				h=sum-a[j];
			
				a[j]+=h;
				a[j+k]=a[j+k]-h;
				q=q+h;
				
			
				}
				if(a[j]>sum){
				h=a[j]-sum;
				a[j]=a[j]-h;
				a[j+k]=a[j+k]+h;
				q=q+h;
			}
			
		}
		for(int j=n-k;j<n;j++){
			if(a[j]== sum){
				continue;
			}
			else{
				q=-1;
				break;
			}
		}
	}
	else{
	q=-1;	
	}
	cout<<q<<endl;
}
 
	return 0;
}	  