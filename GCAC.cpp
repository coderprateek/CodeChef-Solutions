#include <iostream>
#include<vector>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t>0){
	int m;
	int n;
	cin>>n;
	cin>>m;
	vector<long long int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<vector <int>> b(m, vector<int> (3,0));
	for(int i=0;i<m;i++){
		for(int j=0;j<2;j++){
			cin>>b[i][j];
		}
	}
		for(int i=0;i<m;i++){
			b[i][2]=0;
		}
	vector<string> c(n);
	for(int i=0;i<n;i++){
	   cin>>c[i];
		}
	
	vector<int> d(n);
	for(int i=0;i<n;i++){
		long long int sum=0;
			int k=0;
		for(int j=0;j<m;j++){
			if(c[i][j]=='1'){
				if(b[j][1]>0){
					if(b[j][0]>sum){
						sum=b[j][0];
						k=j;
						}
				}
			}
		
		}
	
						if(sum>=a[i]){
							b[k][1]--;
							b[k][2]++;
						    k=k+1;
						    }
						    else{
						    	k=0;
						    }
			d[i]=k;
		
		
	}
long long	int sum=0;
	int l=0;
	for(int i=0;i<n;i++){
		if(d[i]>0){
			l++;
			sum=sum+b[d[i]-1][0];
		}
	}
	int z=0;
	for(int i=0;i<m;i++){
		if(b[i][2]==0){
		z++;	
		
		}
	}
	cout<<l<<" "<<sum<<" "<<z<<endl;
	t--;
}
	return 0;
} 