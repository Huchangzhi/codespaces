#include<bits/stdc++.h>
using namespace std;
int *shz;
int main(){
    int n;
    cin>>n;
    shz = new int [n+1];
    for(int i=1;i<=n;i++){
        cin>>shz[i];
    }    
    sort(shz+1,shz+1+n);
    for(int i=1;i<=n;i++){
        printf("%d ",shz[i]);
    }
    cout<<endl;
    for(int i=n;i>=1;i--){
        printf("%d ",shz[i]);
    }
    return 0;
}