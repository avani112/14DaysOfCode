#include <bits/stdc++.h>

using namespace std;

int rest(int l, int b){
    int c;
    while(l!=0){
        c=l;
        l=b%l;
        b=c;
    }return b;
}

int main(){
    int t, no=0;
    cin>>t;
    for(int i=0;i<t;i++){
        int l,b;
        cin>>l>>b;
        cout<<(l/rest(l,b) * b/rest(l,b))<<endl;
    }
    return 0;
}
