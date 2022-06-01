#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B;
	
	for(cin>>T;T>0;T--){
	    int l=0,b=0,count=0;
	    cin>>A>>B;
	    while(1){
	        count++;
	        if(count%2){
	            l+=count;
	            if(l>A){
	                cout<<"Bob"<<endl;
	                break;
	            }
	        }else
	        {
	            b+=count;
	            if(b>B){
	                cout<<"Limak"<<endl;
	                break;
	            }
	        }
	    }
	}
	return 0;
}
