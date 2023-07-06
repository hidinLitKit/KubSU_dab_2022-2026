#include <iostream>
using namespace std;
struct Reysi
{
    int num;
    string pOt;
    string pPr;
    int distance;
    string type;
    int price;
};
void MassInput(Reysi *a,int n)
{
    for (int i =0;i<n;i++)
    {
        cout<<"Input Reis in this order: Number, Departion point, Arrival Point, Distance (km) , Plane type, Price: ";
        cin>>a[i].num>>a[i].pOt>>a[i].pPr>>a[i].distance>>a[i].type>>a[i].price;
        cout<<"\n";
    }
}
string typeOfPLane(Reysi *a, int n)
{
    int minkm =(int) a[0].price/a[0].distance;
    string minT = a[0].type;
    for (int i = 0;i<n;i++)
    {
        if ((int) a[i].price/a[i].distance<minkm)
        {
            minkm = (int) a[i].price/a[i].distance;
            minT = a[i].type;
        }
    }
    return minT;
}
void BubbleSort(Reysi *a, int n)
{
    Reysi temp;
    for(int i = n-1;i>0;i--)
    {
        for (int j = 0; j<i;j++)
        {
            if (int(a[j].price/a[j].distance)> int(a[j+1].price/a[j+1].distance))
            {
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
            }
        }
    }
}
void QuickSort(Reysi *a, int first, int last)
{
    Reysi temp;
    int mid;
    int f = first; int l = last;
    mid = a[f+1/2].price;
    do
    {
        while (a[f].price<mid) f++;
        while(a[l].price>mid) l--;
        if (f<=1)
        {
            temp = a[f];
            a[f]=a[l];
            a[l] = temp;
            f++;
            l--;
        }
    }
        
     while (f<1);
    if(first<l) QuickSort(a,first,l);
    if (f<last) QuickSort(a,f,last);
}
int main()
{
    cout<<"Input number of planes: ";
    int n; cin>>n;
    Reysi *a = new Reysi[n];
    MassInput(a,n);
    //cout<<typeOfPLane(a,n);
    BubbleSort(a,n);
    cout<<a[0].type<<a[1].type<<a[2].type;
}



