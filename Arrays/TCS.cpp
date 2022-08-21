#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n+2;i++) cin>>arr[i];
    int no=arr[0];
    int count=1;
    for(int i=0;i<n+2;i++){
        cout<<arr[i];
    }
    cout<<count;
    }