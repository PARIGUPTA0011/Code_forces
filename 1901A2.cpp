#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n ;
        cin >> n ;
        vector<char> a(n);

        int count_action = 0;
        bool cont_empty = false;

        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < n; i++) {
            if (i + 2 < n && a[i] == '.' && a[i+1] == '.' && a[i+2] == '.') {
                cont_empty = true;
                break;
            }
            if (a[i] == '.') {
                count_action++;
            }
        }

        if (cont_empty) {
            cout << 2;
        } else {
            cout << count_action;
        }
        cout << endl;
    }
    return 0;
}
