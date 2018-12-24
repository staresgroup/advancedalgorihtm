#include<iostream>
using namespace std;
void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int length){
    int i;
    int j;
    int min_index;
    for(i = 0;i < length - 1;i++){
        min_index = i;
        for(j = i + 1;j < length;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[min_index], &arr[i]);
    }
}
int main()
{
    int arr[100];
    int first_range_index;
    int end_range_index;
    int length = 0;
    int k = 0;
    while(cin >> arr[length]){
        length++;
    }
    length = length - 3;
    first_range_index = arr[length];
    end_range_index = arr[length + 1];
    k = arr[length + 2];
    int temp_arr[end_range_index - first_range_index + 1];
    for(int i = 0;i <= end_range_index - first_range_index + 1;i++){
        temp_arr[i] = arr[first_range_index -1 + i];
    }
    selectionSort(temp_arr, end_range_index - first_range_index + 1);
    cout << temp_arr[k -1] << endl;
    return 0;
}
