 #include <iostream>
using namespace std;
//first print even ,then odd
int main(){
    int n;
    cin>>n;
if(n==1){
    cout<<"1";
    return 0;
}
    if(n<=3){
        cout<<"NO SOLUTION";
        return 0;
    } 
    if(n==4){
        cout<<"2 4 1 3";
        return 0;
    }   
    if(n%2==0){
        int num=n-1;
        while(n>0){
            cout<<n<<" ";
            n-=2;       
        }
        while(num>=1){
            cout<<num<<" ";
            num-=2;
        }
        return 0;
    }else{
         int num=n-1;
        while(n>0){
            cout<<n<<" ";
            n-=2;       
        }
        while(num>=1){
            cout<<num<<" ";
            num-=2;
        }
        return 0; 
    }

     

    return 0;
}
 
