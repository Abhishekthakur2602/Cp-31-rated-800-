//#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n);
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> a[i];
            maxi = max(maxi , a[i]);
            mini = min(mini , a[i]);
        }

        int sum = 0;
        bool flag = false;

        if(maxi == mini){
           cout << "No" << endl;
        }

        else{
        flag = true;
        for(int i=0;i<n;i++){

            if(i < n && (sum == a[i])){
                flag = true;
                int val = a[i-1];
                a[i-1] = a[i];
                a[i] = val;
            }
            sum += a[i];
        }
    }

    if(flag){
        cout << "Yes" << endl;
        for(int i=0;i<n;i++){
            cout << a[i];
        }
        cout << endl;
    }
    }
    return 0;
}