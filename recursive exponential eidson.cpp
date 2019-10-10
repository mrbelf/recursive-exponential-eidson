#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

void print_exp_eidson(int x){
    if(x == 0){
        cout << "eidson" << endl;
        return;
    }
    print_exp_eidson(x-1);
    print_exp_eidson(x-1);
}

int main(){
    int x;
    cout << "type any negative number to exit" << endl;
    cin >> x;
    while(x >= 0){
        print_exp_eidson(x);
        cin >> x;
    }
    return 0;
}