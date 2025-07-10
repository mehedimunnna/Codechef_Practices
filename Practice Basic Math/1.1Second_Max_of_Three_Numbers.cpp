//Problem link : https://www.codechef.com/practice/course/basic-math/BASICMATH/problems/SNDMAX

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    if(x>y && x>z){
	        if(y>z)
	            cout<<y<<endl;
	        
	        else
	            cout<<z<<endl;
	        
	    }
	    
	    if(y>x && y>z){
	        if(x>z)
	            cout<<x<<endl;
	        
	        else
	            cout<<z<<endl;
	        
	    }
	    
	    if(z>x && z>y){
	        if(y>x)
	            cout<<y<<endl;
	        
	        else
	            cout<<x<<endl;
	        
	    }
	    
	}

}
