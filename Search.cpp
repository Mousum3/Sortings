#include <bits/stdc++.h>
using namespace std;

int search_f(int arr[],int n, int t){
    for(int i=0; i<n; i++)
        if(arr[i] == t) return i;
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v[]={1,5,8,9,7,4,5,6,6,3,2,1,4,7,9,9,6,1,4,5,8,8,7,9,9,6,6,5,5,4,4,8,8,5};
    int n = sizeof(v) / sizeof(v[0]);
    cout<<search_f(v,n,9);
    //for(int x: v) cout<<x<<" ";
    return 0;
}