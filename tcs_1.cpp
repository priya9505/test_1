#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int add[], int n)
{
    int i = 0, j = 0, k = 0;
    while(i < n)
    {
        add[k++] = arr1[i++];
    }
    while(j < n)
    {
        add[k++] = arr2[j++];
    }
    sort(add, add+n+n);
}
int main()
{
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int add[n + n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for(int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    merge(arr1, arr2, add, n);
    for(int i = 0; i < n+n; i++)
    {
        cout << add[i] << " ";
    }
    cout << endl;
    int mid = (n + n)/2;
    int result = add[mid - 1] + add[mid]; 
    cout << result << endl;
}