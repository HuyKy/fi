#include<iostream>
using namespace std;

void nhap(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"nhap phan tu thu "<<i<<" : ";cin>>a[i];
    }
    
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    cout<<"so lon nhat la: "<<max<<endl;
    return max;
}

void uocso(int a[], int n, int maximum)
{
    int count = 0;
    int mang[n], j =0;
    for (int i = 0; i < n; i++)
    {
        if (maximum%a[i] == 0)
        {
            mang[j] = a[i];
            count+=1;
            j+=1;
        }
        
    }
    cout<<"co "<<count<<" so chia het cho so lon nhat trong mang la: ";
    for (int k = 0; k < j; k++)
    {
        cout<<mang[k]<<",";
    }
    
}

void nguyen(int a[], int n)
{
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            sum+=a[i];
        }
        
    }
    cout<<"\ntong cac so nguyen duong la: "<<sum<<endl;
    
}

int main()
{
    int n, maximum;
    cout<<"nhap n: ";cin>>n;

    int arr[n];

    nhap(arr, n);
    maximum = max(arr, n);
    uocso(arr, n, maximum);
    nguyen(arr, n);
    return 0;
}
