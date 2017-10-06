    #include <iostream>
    #include<vector>
    using namespace std;
     
    int main() {
    	int t;
    	cin>>t;
    	while(t>0){
    		int n,k;
    		cin>>n>>k;
    		vector<int> a(300001,0);
    		for(int i=0;i<n;i++){
    			int z;
    			cin>>z;
    			a[z]++;
    		}
    		int j=0;
    		while(k>0){
    			if(a[j]==0){
    			a[j]++;
    			k--;
    			j++;
    			}else{
    				j++;
    			}
    			
    		}
    		for(int i=0;i<300001;i++){
    			if(a[i]==0){
    				cout<<i<<endl;
    				break;
    			}
    		}
    		t--;
    	}
    	return 0;
    } 