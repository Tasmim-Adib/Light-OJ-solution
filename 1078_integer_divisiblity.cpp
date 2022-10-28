#include<bits/stdc++.h>
using namespace std;
int main(){
    int test, caseno=0;
    cin >> test;
    while(test--){
        int a, b;
        long long cnt = 0;
        cin >> a >> b;
        int x = b;
        while(1){
            b = b % a;
            if(b == 0){
                cnt++;
                break;
            }
            else{
                cnt++;
                b = b * 10 + x;
                
            }
        }
        printf("Case %d: %lld\n", ++caseno,cnt);
    }
    return 0;
}