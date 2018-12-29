#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int getMinSwaps(vector<int> &A)
{
    //  排序
    vector<int> B(A);
    sort(B.begin(), B.end());
    map<int, int> m;
    int len = (int)A.size();
    for (int i = 0; i < len; i++)
    {
        m[B[i]] = i;    //  建立每个元素与其应放位置的映射关系
    }

    int loops = 0;      //  循环节个数
    vector<bool> flag(len, false);
    //  找出循环节的个数
    for (int i = 0; i < len; i++)
    {
        if (!flag[i])
        {
            int j = i;
            while (!flag[j])
            {
                flag[j] = true;
                j = m[A[j]];    //  原序列中j位置的元素在有序序列中的位置
            }
            loops++;
        }
    }
    return len - loops;
}
int main()
{
    int T;
    int N;
    cin >> T;
    int swap_count[T] = {0};
    for (int i = 0;i < T;i++) {
        cin >> N;
        vector<int> vec(N);
        for (int j = 0;j < N;j++){
            cin >> vec[j];
        }
        swap_count[i] = getMinSwaps(vec);
    }
    for (int i = 0;i < T;i++) {
        cout << swap_count[i] << endl;
    }
    return 0;
}
