#include <iostream>
#include<vector>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		vector<int> b(11,0);
		int k=0;
		for(int j=0;j<(n+1)/2;j++){
			int l=0;
			int s=1;
			if(a[j]==a[n-1-j]){
				int h=a[j];
				b[h]++;
			
				if(a[j]==s){
					if(s>l){
						continue;
					}
					else{
						k=1;
						break;
					}
				}
				else{
					l=s;
					s=a[j];
				}
				if(s<=7){
			}
			else{
				k=1;
				break;
			}
			}
			else{
				k=1;
				break;
			}
		}
			for(int j=1;j<8;j++){
			if(b[j]>0){
				continue;
			}
			else{
				k=1;
				break;
			}
		}
	
		if(k==0){
			cout<<"yes"<<endl;
		}
		if(k==1){
			cout<<"no"<<endl;
		}
	}
	return 0;
} 