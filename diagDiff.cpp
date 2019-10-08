#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    int sum=0, add=0, k=n-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i==j) sum=sum+a[i][j];
        } 
    }
    for(int i=0;i<n;i++){
        add=add+a[i][k];
        k--;
    }
    cout<<(abs(sum-add))<<endl;
}
    
