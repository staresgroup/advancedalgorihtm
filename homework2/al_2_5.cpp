#include <iostream>
using namespace std;
int main()
{
    int n;
    while (cin >> n) {
        int array[n];
        int tmp;
        for (int i = 0;i < n;i++) {
            cin >> array[i];
        }
        for (int i = 0;i < n;i++) {
            for (int j = i;j < n - 1;j++) {
                if (array[i] > array[j + 1]) {
                    tmp = array[j + 1];
                    array[j + 1] = array[i];
                    array[i] = tmp;
                }
            }
        }
        for (int i = 0;i < n - 1;i++) {
            cout << array[i] << " ";
        }
        cout << array[n - 1] << endl;
    }
    return 0;
}
