#include <iostream>
using namespace std;
struct FIO
{
    string name;
    string surName;
    string fatherName;
};
struct WorkINF
{
    int dep;
    string jobT;
    int salary;
};
struct Rab
{
    FIO fio;
    WorkINF work;
};

int main()
{
    int n, maxSalary; cin>>n;
    Rab *a = new Rab[n];
    for (int i = 0; i<n;i++)
    {
        cout<<"Input Name, Surname, Fathername"<<endl;
        cin>>a[i].fio.name>>a[i].fio.surName>>a[i].fio.fatherName;
        cout<<"Input work information: department, job title & salary"<<endl;
        cin>>a[i].work.dep>>a[i].work.jobT>>a[i].work.salary;
    }
    maxSalary = a[0].work.salary;
    int b;
    cout<<"Input otdel"; cin>>b;
    for (int i =0;i<n;i++)
    {
        if (a[i].work.dep == b && a[i].work.salary>maxSalary) maxSalary = a[i].work.salary;
    }
}