#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int getMinSwaps(vector<int> &A)
{
    //  ����
    vector<int> B(A);
    sort(B.begin(), B.end());
    map<int, int> m;
    int len = (int)A.size();
    for (int i = 0; i < len; i++)
    {
        m[B[i]] = i;    //  ����ÿ��Ԫ������Ӧ��λ�õ�ӳ���ϵ
    }

    int loops = 0;      //  ѭ���ڸ���
    vector<bool> flag(len, false);
    //  �ҳ�ѭ���ڵĸ���
    for (int i = 0; i < len; i++)
    {
        if (!flag[i])
        {
            int j = i;
            while (!flag[j])
            {
                flag[j] = true;
                j = m[A[j]];    //  ԭ������jλ�õ�Ԫ�������������е�λ��
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
