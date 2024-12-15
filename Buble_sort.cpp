#include <bits/stdc++.h>
using namespace std;

void bsort(vector<int> &arr){
    int n= arr.size();
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v={1,5,8,9,7,4,5,6,6,3,2,1,4,7,9,9,6,1,4,5,8,8,7,9,9,6,6,5,5,4,4,8,8,5};
    bsort(v);
    for(int x: v) cout<<x<<" ";
    return 0;
}