#include<iostream>
#include<climits>

using namespace std;
int main (){
    int t ;
    cin>>t;
    while(t--){
        int n ;
    cin>>n;
    int d[n];
    int s[n];
    
    for(int i =0;i<n;i++){
        cin>>d[i]>>s[i];
    }
    int k = INT_MAX;
    int add [n];
     for(int i =0;i<n;i++){
       k =min((d[i]+((s[i]-1)/2)),k);
    }
    
    cout<<k;

    }
    
}