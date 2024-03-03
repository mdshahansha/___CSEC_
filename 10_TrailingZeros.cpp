#include<iostream>
#include<algorithm>
using namespace std;

// NOTES -> : https://ninjasfiles.s3.amazonaws.com/fecf5613a2ece5b7d1afd28fb96a80d2_mohammad_attachment_trailing%20zeros.png

int main() {
    int n;
    cin >> n;
    long long int fact = 1;
    int ans = 0;


    // Calculate factorial
    for (int i = 5; n/i >=1; i*=5) {
      ans+=n/i;
    // ans++;
    }
 
    cout << ans << endl;

    return 0;
}
