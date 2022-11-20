#include <iostream>
#include <vector>
using namespace std;



int main() {
    int n,k;
    cin >> n >> k;

    vector <int> a(n+1,0);
    for(int i=1;i<=n;++i){
        cin >> a[i];
    }

    for(int i=1;i<=n;++i){
        a[i]+=k;
    }

    for(int i=1;i<a.size();++i){
        if (a[i]>5) a.erase(a.begin()+i);
        i--;
    }
    int m;
    if (a.size()-1<3) m=0;
    else m=(a.size()-1)/3;
    cout << a.size() << endl;
    for (int i=1;i<a.size();++i){
        cout << a[i] << " ";
    }

    return 0;
}