#include <iostream>

using namespace std;

long long Calculate(long long a, long long b, long long c){
    long long res=abs(a*b*c);
    for(int i=-1;i<=1;i+=2){
        for(int j=-1;j<=1;j+=2){
            res = min(res,abs(a+i*b+j*c));
            res = min(res,abs(a*b+j*c));
        }
        res = min(res,abs(a+i*b*c));
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c;
        cin >> a >> b >> c;
        cout << Calculate(a,b,c) << endl;
    }
    return 0;
}