#include <bits/stdc++.h>
using namespace std;
bool checkprime(int n){
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    bool ans=checkprime(n);
    if(ans){
        cout<<n<<" Is prime Number\n";
    }
    else{
        cout<<n<<" Is not a prime Number\n";
    }
    return 0;
}
// 7
// 7 Is prime Number


// === Code Execution Successful ===
