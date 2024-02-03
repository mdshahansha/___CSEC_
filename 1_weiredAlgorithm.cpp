#include <iostream>
//  #include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

  int ans=0;
    int num=1;
    for(int i=1;i<n;i++){
        int prev=arr[i-1];
            if(arr[i]<=prev){
                while(true){
                    arr[i]+=1;
                    ans+=1;
                    if(arr[i]>=prev) break;

                }

            }
        
    }
    cout<<ans<<endl;
      for(int i=0;i<n;i++){
        cout<<arr[i];
    }


    return 0;
}
 
