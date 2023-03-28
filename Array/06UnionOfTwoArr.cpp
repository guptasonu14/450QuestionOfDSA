#include <bits/stdc++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m) {
    // create a set to store the unique elements
    set<int> s;

    // insert elements from array a into the set
    for(int i=0; i<n; i++) {
        s.insert(a[i]);
    }

    // insert elements from array b into the set
    for(int i=0; i<m; i++) {
        s.insert(b[i]);
    }

    // return the size of the set which gives the count of union elements
    return s.size();
}

int main() {
    int n, m;
    cin >> n >> m;
    int a[n], b[m];

    // input array a
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    // input array b
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }

    // call doUnion function to find the count of union elements
    int ans = doUnion(a, n, b, m);
    cout << ans << endl;

    return 0;
}
