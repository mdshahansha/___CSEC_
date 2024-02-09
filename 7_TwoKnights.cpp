
#include <iostream>
//  #include <bits/stdc++.h>
using namespace std;
// "int32_t" data type "int" ko represent karta hai jo ek 32-bit signed integer hai. 
int32_t main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        long long  NoOfWays=(i*i)*(i*i - 1)/2;
        long long NoOfAttack=(4*(i-1)*(i-2));

        cout<<long(NoOfWays-NoOfAttack)<<endl;

    }
    

     

    return 0;
}
 
