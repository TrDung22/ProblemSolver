#include <iostream>
#include <map>

using namespace std;



int main() {
    map <int,int> m;
    int n;
    cin >> n;
    int* arr=new int[n];
    for (int i=0;i<n;++i){
        cin >> arr[i];
        m[arr[i]]++;
    }

    int max=m[arr[0]];
    for(auto x:m){
        if(x.second>max) max=x.second;
    }

    if(n%2==0){
        if(max>(n/2)) cout << "NO";
        else cout << "YES";
    }
    else {
        if(max>(n+1)/2) cout << "NO";
        else cout << "YES";
    }

    delete []arr;
    return 0;
}
