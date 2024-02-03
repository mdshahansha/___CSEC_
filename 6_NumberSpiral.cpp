#include <iostream>
//  #include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;

        long long maxi=max(x,y);
        long long sq=(maxi-1)*(maxi-1);
    long long ans=0;
        if(maxi%2==0){
            if(x>y){
                ans=(maxi)*(maxi) -y+1;
            }else{
                ans=sq+x;
            }
        }else{
            if(x>y){
                ans=sq+y;
            }else{
                ans=(maxi*maxi) -x+1;
            }
        }

    cout<<ans<<endl;

    }

     

    return 0;
}
 
