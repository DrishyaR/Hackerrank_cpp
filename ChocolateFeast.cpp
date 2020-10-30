#include <bits/stdc++.h>

using namespace std;

int main(){

    int a,b,c,d,ans = 0;
    cin >> a;
    while(a--){
        cin >> b >> c >> d;
        int tmp = ans = b/c;
        while(tmp >= d){
            ans++;
            tmp-=d;
            tmp++;
        }
        cout << ans << endl;
    }
    return 0;
}
