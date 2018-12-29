#include <iostream>

#include <iostream>

#include <climits>

using namespace std;

int sum(int* arr,int a,int b){

    int s=0;

    for(int i=a;i<=b;i++)

        s += arr[i];

    return s;

}
int fun(int* arr,int n,int k,int** dp){

    if(k==1)

        return sum(arr,0,n-1);

    if(n==1)

        return arr[0];

    if(dp[n][k]!=-1)

        return dp[n][k];

    int best = INT_MAX;

    for(int i=0;i<n;i++){

        best = min(best,max(fun(arr,i,k-1,dp),sum(arr,i,n-1)));

    }

    return dp[n][k]=best;

}
int main() {

    //code

    int t;

    cin >> t;

    while(t--){

        int k,n;

        cin >> k >> n;

        int* arr = new int[n];

        for(int i=0;i<n;i++)

            cin >> arr[i];

        int** dp =  new int*[n+1];

        for(int i=0;i<=n;i++){

            dp[i] = new int[k+1];

        }

        for(int i=0;i<=n;i++){

            for(int j=0;j<=k;j++)

                dp[i][j]=-1;

        }

        cout << fun(arr,n,k,dp) << endl;

    }

    return 0;

}