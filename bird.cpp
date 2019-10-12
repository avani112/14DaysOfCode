#include <bits/stdc++.h>

using namespace std;

int bird(vector<int> a, int n){
    int ar[5];
    for(int i=1;i<=5;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==i) count++;
            ar[i-1]=count;              
        }
    }
    int max=ar[0], finalcount=0;
    for(int k=1;k<5;k++){
        if(ar[k]>max){
            max=ar[k];
            finalcount=k;
        }
    }
    return finalcount+1;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
    int result=bird(a,n);
    cout<<result<<" ";
    return 0;
}
