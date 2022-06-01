#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,b;
	    cin >> n >> b;
	    int m = -1;
	    for(int i = 0; i < n; i++){
	        int w,h,p;
	        cin >> w >> h >> p;
	        if(b >= p){
	            m = max(m,w*h);
	        }
	    }
	    if(m == -1)cout << "no tablet\n";
	    else cout << m <<endl;
	}
	return 0;
}
