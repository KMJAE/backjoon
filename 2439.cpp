#include <iostream>

using namespace std;

int main(void){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(n+1-i > j){cout <<" ";}
            else{cout <<"*";}
        }
        cout <<'\n';
    }
}