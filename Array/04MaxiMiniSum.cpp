#include<bits/stdc++.h>
using namespace std;

int findSum(int arr[], int n) {
    int minEle = INT_MAX;
    int maxEle = INT_MIN;
    
    // Traverse the array to find the minimum and maximum element
    for(int i=0; i<n; i++) {
        if(arr[i] < minEle) {
            minEle = arr[i];
        }
        if(arr[i] > maxEle) {
            maxEle = arr[i];
        }
    }
    
    // Calculate the sum of minimum and maximum element
    int sum = minEle + maxEle;
    return sum;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int ans = findSum(arr, n);
    cout << ans << endl;
    return 0;
}
