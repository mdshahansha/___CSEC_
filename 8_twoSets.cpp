
#include <iostream>
#include <algorithm>

// #include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin>>n;
    int sum=0;
    vector<int> arr,arr3;
    for(int i=1;i<=n;i++){
        sum+=i;
        arr.push_back(i);
    }
    string ans="";
    vector<int> v1,v2;
    if(sum%2==0){
        ans="YES";
        cout<<"YES"<<endl;
            if(n%4==0){
                for(int i=1;i<=n/4;i++){
                    v1.push_back(i);
                }
                  for(int i=0;i<n/4;i++){
                    v1.push_back(n-i);
                }
                for(int i=n/4+1;i<=n - (n/4);i++){
                     v2.push_back(i);
                }

                cout<<v1.size()<<endl;
                for(int i=0;i<v1.size();i++){
                    cout<<v1[i]<<" ";
                }
                cout<<endl;
                cout<<v2.size()<<endl;
                for(int i=0;i<v2.size();i++){
                    cout<<v2[i]<<" ";
                }

            }else if(n%4==3){

                for(int i=4;i<=n;i++){
                arr3.push_back(i);
                 }
                v1.push_back(1);
                v1.push_back(2);
                v2.push_back(3);
                //with same procedure
                 for(int i=0;i<n/4;i++){
                    v1.push_back(arr3[i]);
                }
                  for(int i=0;i<n/4;i++){
                    v1.push_back(arr3[arr3.size()-i -1]);
                }
                for(int i=n/4;i<arr3.size() - (n/4);i++){
                     v2.push_back(arr3[i]);
                }
                cout<<v1.size()<<endl;
                for(int i=0;i<v1.size();i++){
                    cout<<v1[i]<<" ";
                }
                cout<<endl;
                cout<<v2.size()<<endl;
                for(int i=0;i<v2.size();i++){
                    cout<<v2[i]<<" ";
                }
            }
    }else{
        cout<<"NO";
    }
    return 0;
}