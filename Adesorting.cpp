#include<iostream>
#include<climits>
using namespace std ;
int main()
{
      int t ;
      cin>>t;
      while(t--){
         int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int minimum = LONG_LONG_MAX;
        int steps = 0;
        int k =0 ;
        for(int  i =1;i<n;i++){
            if(a[i-1]>a[i]){
                cout<<steps;
                k++;
            }
        }
        for(int i =1;i<n;i++){
             
                int d = (a[i]-a[i-1]);
                minimum = min(d,minimum);
            
        }
        if(k==1){
            cout<<0<<endl;
        }
        else{
                if(minimum==0){
            cout<<minimum+1<<endl;
                }
             else{
            cout<<(minimum/2)+1<<endl;
             }
        
       
        }
      }
             
        
          return 0;
       }
          
          
      

        
        
        
        
    
