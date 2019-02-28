#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area){
    // Complete this function
    int h = 0 ;
    h =  2 * area  / base ;
    if ( ( 0.5 * base * h ) >= area )
        return h ;
    else 
        return h + 1 ;
}

int main() {
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}


