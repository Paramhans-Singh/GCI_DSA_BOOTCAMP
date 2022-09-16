#include <iostream>
using namespace std;
void linearsearch(int a[], int n)
{
    int i;
    int temp = 1;
    for (i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            cout << "Element found at location:" << i + 1 << endl;
            temp = 0;
        }
    }
    if (temp == 1)
    {
        cout << "No element found" << endl;
    }
}

int main()
{
    int arr[5], i;
    cout << "Please enter 5 elements of an array :"<<endl;

    for (i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    int num;
    cout << "Please enter an element to search:";
    cin >> num;

    linearsearch(arr, num);
    return 0;
}