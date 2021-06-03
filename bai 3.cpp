#include<iostream>
using namespace std;

struct Quanli
{
    int so_luong;
    string ten_san_pham;
};


int main()
{
    Quanli danh_sach[3];
    for (int i = 0; i < 3; i++)
    {
        cout<<"nhap ten cua loai vai thu "<<i+1<<": ";getline(cin, danh_sach[i].ten_san_pham);
        cout<<"nhap so luong cua loai vai thu "<<i+1<<": ";cin>>danh_sach[i].so_luong;
        cin.ignore(1);
    }
    
    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
        sum += danh_sach[j].so_luong;
    }
    
    if (sum>=2000)
    {
        cout<<"Con it thoi.";
    }
    else if ((sum>=1500) && (sum < 2000))
    {
        cout<<"Len phuong an thanh ly.";
    }
    else if ((sum>=1000) && (sum < 1500))
    {
        cout<<"Co gang ban.";
    }
    else if ((sum >= 500) && (sum < 1000))
    {
        cout<<"Can thanh ly gap.";
    }

    cout<<"Trong kho con "<<sum<<" xe: Trong do ";

    for (int k = 0; k < 3; k++)
    {
        cout<<danh_sach[k].ten_san_pham<<": "<<danh_sach[k].so_luong<<" tan; ";
    }
    

    return 0;
}
