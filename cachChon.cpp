#include <iostream>
#include <math.h>

using namespace std;

int giaithua(int n){
    if(n==1) return 1;
    return n*giaithua(n-1);
}

int main() {
    int q;
    cin >> q;
    int n=q*2;
    int a[n];
    for(int i=0;i<n;++i){
        cin >> a[i];
    }

    for(int i=0;i<n-1;i+=2){
        int toHop=giaithua(a[i])/(giaithua(a[i+1])*giaithua(a[i+1]-a[i]));
        cout << toHop << endl;
    }

    return 0;
}
