#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int>a(n);
        int count_1 = 0;
        int count_1pos = 0;

        for(int i=0;i<n;i++){
            cin >> a[i];

            if(a[i] > 0) count_1pos++;
            else if(a[i] < 0) count_1++;
        }

        int ops = 0;

        if(count_1 > count_1pos){
            int num = count_1 - count_1pos;
            int k = (num + 1)/2;
            ops += k;
            count_1 -= k;   // IMPORTANT: update negatives
        }

        if(count_1 % 2 == 1){
            ops++;
        }

        cout << ops << endl;
    }

    return 0;
}