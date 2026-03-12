#include <iostream>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> a(N);
    int Min_val = INT_MAX;
    for(int i = 0; i < N; i++) {
        cin >> a[i];
       
    }
    for(int i = 0; i < N; i++) {
        if(a[i] < 0){
            a[i] = -a[i];
        }
    }
    for(int i = 0; i < N; i++) {
        if(a[i] < Min_val){
            Min_val = a[i];
        }
    }
    cout << Min_val << endl;

    return 0;
}