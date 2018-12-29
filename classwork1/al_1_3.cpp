#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int T;
    int M;
    int N;
    cin >> T;
    //vector< vector<int> > result;
    for (int i = 0;i < T;i++) {
        cin >> M >> N;
        vector<int> A1(M);
        vector<int> A2(N);
        vector<int> result;
        vector<int> not_in_A2;
        for (int j = 0;j < M;j++){
            cin >> A1[j];
        }
        for (int j = 0;j < N;j++) {
            cin >> A2[j];
        }
        for (int j = 0;j < N;j++) {
            for (int k = 0;k < M;k++) {
                if (A1[k] == A2[j]) {
                    result.push_back(A1[k]);
                    //break;
                }
            }
        }
        for (int j = 0;j < result.size();j++) {
            for (int k = 0;k < A1.size();k++) {
                if (A1[k] == result[j]) {
                    A1.erase(A1.begin() + k);
                }
            }
        }
        not_in_A2 = A1;
        sort(not_in_A2.begin(), not_in_A2.end());
        for (int j = 0;j < not_in_A2.size();j++) {
            result.push_back(not_in_A2[j]);
        }
        for (int j = 0;j < M - 1;j++) {
            cout << result[j] << " ";
        }
        cout << result[result.size() - 1] << endl;
    }

    return 0;
}
