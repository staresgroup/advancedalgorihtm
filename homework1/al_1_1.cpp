#include <iostream>
using namespace std;
int max_in_arr(int arr[], int length){
    int max = arr[0];
    for (int i = 1;i < length;i++) {
        max = max > arr[i] ? max : arr[i];
    }
    return max;
}
int min_in_arr(int arr[], int length){
    int min = arr[0];
    for (int i = 1;i < length;i++) {
        min = min < arr[i] ? min : arr[i];
    }
    return min;
}
int main()
{
    int arr[100];
    int num;
    int count = 0;
    int length = 0;
    int current_max = 0;
    int current_min = 0;
    while (cin >> arr[length]) {
        length++;
    }
    length = length - 1;
    num = arr[length];
    for (int i = 0;i < length;i++) {
        current_max = arr[i];
        current_min = arr[i];
        for (int j = i;j < length;j++) {
            for (int k = i;k <= j;k++) {
                current_max = current_max > arr[k] ? current_max : arr[k];
                current_min = current_min < arr[k] ? current_min : arr[k];
            }
            if ((current_max - current_min) > num) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
