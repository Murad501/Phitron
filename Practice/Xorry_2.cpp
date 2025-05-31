#include <bits/stdc++.h>
using namespace std;


bool is_kth_bit_on (int n, int k) {
    return ((n>>k)&1);
}

int main() {
	int t; cin>>t;
	while (t--) {
	    int x; cin>>x;
	    int MSB = __lg(x);
	    int A = 1<<MSB, B = x^A;
	    int sum = A;
	    int cnt = 0;
        bitset<7>b(B);
        bitset<7>c(A);
        int mn = (__lg(A), __lg(B));
        cout<<mn<<endl;
        
	    // for (int i=0; i<=MSB; i++) {
	    //     if (!is_kth_bit_on(A,i) && !is_kth_bit_on(B,i) && sum+(1<<i) <= x) {

	    //         cnt++;
        //         cout<<i<<endl;
        //         // cout<<"sum"<<sum<<endl;
	    //         sum += (1<<i);
	    //     }
	    // }
        // cout<<cnt<<endl;
	    // cout << (1<<cnt) << endl;
	}
	return 0;
}