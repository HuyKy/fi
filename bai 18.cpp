#include<iostream>
using namespace std;

float GiaiThua(int x)
{
    int mul = 1;
    for (int i = 1; i <= x; i++)
    {
        mul = mul * i;
    }
    return mul;
}

int main()
{
    int n, a, b, c;
    float sum = 0, g, h, k;

    cout<<"nhap n:";cin>>n;
    // câu lệnh for dưới đây dùng để tính S
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (1.0/i);
    }
    
    cout<<"gia tri cua S la: "<<sum<<endl;
    cout<<"====================================================="<<endl;

    cout<<"nhap a, b, c: ";cin>>a>>b>>c;
    //các câu lệnh ở dưới dùng để tính P
    g = GiaiThua(a);
    h = GiaiThua(b);
    k = GiaiThua(c);
    
    cout<<"ket qua cua P la:"<<(g/h) - (h/k)<<endl;

    return 0;
}
