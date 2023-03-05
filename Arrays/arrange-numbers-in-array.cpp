#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "************************ Arrange Numbers in Array **************************** \n Enter size of the array: ";
    cin >> size;
    int arr[60];

    int i = 0;
    int j = 59;
    int k = 1;

    while (i < j)
    {
        arr[i] = k;
        k++;
        i++;
        arr[j] = k;
        k++;
        j--;
    }

    for (int i = 0; i < 60; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}