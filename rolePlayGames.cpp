#include <iostream>

using namespace std;


int main() {
    int s,q;
    cin >> s >> q;
    int n=q*2;
    int* arr=new int[n];
    for (int i=0;i<n;++i){
        cin >> arr[i];
    }
    
    for (int i=0;i<n-1;i+=2){
        for (int j=2;j<n;j+=2){
            if(arr[j]<arr[i]){
                int tmp=arr[j];
                arr[j]=arr[i];
                arr[i]=tmp;

                int tmp1=arr[j+1];
                arr[j+1]=arr[i+1];
                arr[i+1]=tmp1;
            }
        }
    }

    /*for (int i=0;i<n;i+=2){
        if (s>arr[i]) s+=arr[i+1];
        else {
            s=0;
            break;
        }
    }



    if(s=0) cout << "NO";
    else cout << "YES";*/

    for(int i=0;i<n;++i){
        cout << arr[i] << " ";
    }

    delete []arr;
    return 0;
}
