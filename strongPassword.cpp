#include <iostream>

using namespace std;



int main() {
    string s;
    cin >> s;
    int n=s.length();
    bool has_upper=false,has_lower=false,has_digit=false,has_special_character=false;
    string special_character="!@#$%^&*()-_+.";
    //check strong password
    for (int i=0;i<n;i++){
        if(islower(s[i])) has_lower=true;
        if(isupper(s[i])) has_upper=true;
        if(isdigit(s[i])) has_digit=true; //check co so thap phan khong
        size_t x=special_character.find(s[i]);
        if(x!=string::npos) has_special_character=true;//string::npos tra gia tri null  
    }

    if (has_digit&&has_lower&&has_special_character&&has_upper&&n>8&&n<50) cout << "true";
    else cout << "false";


    return 0;
}
