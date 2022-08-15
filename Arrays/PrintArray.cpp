#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; ++i){
        cout<<arr[i]<<" ";
    }
}
   
int main(){
    int n=7;
    int arr[7]={1,2,2,1,1,2,1};
   printarray(arr,n);
    return 0;
}