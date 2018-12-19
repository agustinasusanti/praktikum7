#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int n, i, arr[10], search, first, last, middle;
    cout<<"Masukkan jumlah total elemen:";
    cin>>n;
    cout<<"Enter"<<n<<"number:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Masukkan nomor untuk menemukan:";
    cin>>search;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
        {
            first=middle+1;
        }
        else if(arr[middle]==search)
        {
            cout<<search<<"ditemukan dilokasi"<<middle+1<<"\n";
            break;
        }
        else
        {
            last=middle-1;
        }
        middle=(first+last)/2;
    }
    if(first>last)
    {
        cout<<"Tidak ditemukan!"<<search<<"tidak ada dalam daftar.";
    }
    getch();
}
