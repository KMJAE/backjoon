#include <iostream>
#include <algorithm>

using namespace std;
int n;
int arr[501][501];
int dp[501][501];


int main(void){
    int ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0];
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= i; j++){
            if(j == 0){
                dp[i][j] = dp[i-1][j] + arr[i][j];
            }
            else if(i == j){
                dp[i][j] = dp[i-1][j-1] + arr[i][j];
            }
            else {
                dp[i][j] = max(dp[i-1][j] + arr[i][j],dp[i-1][j-1] + arr[i][j]);
            }
        }
    }
    for(int i = 0; i< n; i++){
        if(dp[n-1][i] >= ans){
            ans = dp[n-1][i];
        }
    }
    cout << ans << endl;


    return 0;
}