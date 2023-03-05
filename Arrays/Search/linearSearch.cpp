#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int item)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == item)
            return i;
    }
    return -1;
}

int main()
{

    cout << "******************* LINEAR SEARCH *******************" << endl;
    cout << "Array:{2,4,1,7,8,8,56}" << endl;

    cout << "Enter item to find : ";
    int item;
    cin >> item;
    int arr[7] = {2, 4, 1, 7, 8, 8, 56};
    // cout << sizeof(arr) / sizeof(arr[0]);
    cout << linearSearch(arr, 7, item);
}