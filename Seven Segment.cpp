#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"-------------------------------"<<"\n";
    string ar[n][n];



    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
                string s = "";
            for(int k = 0; k < m; k++){
                if(arr[i][k] != arr[j][k]){
                    s += 'a' + k;
                }
            }
            ar[i][j] = s;
        }

    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<ar[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}


//the input

/*



10 7
1 1 1 1 1 1 0
0 1 1 0 0 0 0
1 1 0 1 1 0 1
1 1 1 1 0 0 1
0 1 1 0 0 1 1
1 0 1 1 0 1 1
1 0 1 1 1 1 1
1 1 1 0 0 0 0
1 1 1 1 1 1 1
1 1 1 1 0 1 1

*/

