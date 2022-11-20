#include <iostream>
#include <map>
using namespace std;



int main() {
    int n;
    cin >> n;
    int tmp;
    map<int,int> m;//khai bao map

    for(int i=0;i<n;++i){
        cin >> tmp;
        m[tmp]++;
    }

    int count=0,max=m[tmp];
    for(auto x:m){
        count++;
        if(x.second > max)
            max = x.second;
    }

    cout << max << " " << count;

    return 0;
}
