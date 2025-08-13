#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n+2);
        a[0] = 0;
        a[n+1] = k;
        for (int i = 1; i <= n; i++) cin >> a[i];

        int maxi = 0;
        for(int i = 0 ; i<=n ; i++){
            maxi = max(maxi , a[i+1]-a[i]);
        }
        int back = k-a[n];
        if(maxi - back >= back){
            cout<<maxi;
        }else{
            cout<<(2 * back);
        }
        cout << endl;
    }
    
    return 0;
}