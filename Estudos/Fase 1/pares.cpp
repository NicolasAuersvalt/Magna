#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

bool possible(int k, vi &arr){
    if(arr.size()==1 && arr[0]==k) return true;
    // binary search
    for(int i=0; i<arr.size()-1; i++){
        int l=0, r = arr.size()-1;
        while(l<=r){
            int m = (l+r)/2;
            if(arr[m]+arr[i]==k) return true;
            else if(arr[m]+arr[i]<k) l=m+1;
            else r=m-1;
        }
    }
    return false;
}

int main(){

    int n, k; cin >> n >> k;
    vi arr;
    for(int i=0; i<n; i++){ 
        int a; 
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    possible(k, arr) ? cout << "SIM" << endl : cout << "NÃO" << endl;

    return 0;
}