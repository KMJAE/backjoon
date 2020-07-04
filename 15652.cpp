#include <iostream>
using namespace std;
int N,M;
int tmp = 1;
int arr[9];
bool check[9] = {0,};

void dfs(int count){
    if(count == M){
        for(int i = 0; i < M; i++){
            cout << arr[i]<< " ";
            
        }
        cout << "\n";
        return;
    }
    for(int i = (count == 0) ? 1 : arr[count - 1]; i <= N; i++){
        if(!check[i]){
            arr[count] = i;
            dfs(count+1);
        }
        
    }
    tmp++;
}

int main(void){

    cin >> N >> M;
    dfs(0);
    return 0;
}