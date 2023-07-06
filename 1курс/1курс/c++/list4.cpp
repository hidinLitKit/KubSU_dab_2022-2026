#include <iostream>
using namespace std;
struct SingleList
{
    int info;
    SingleList* next;
};

SingleList * SingleListFill()
{
    SingleList * head = new SingleList;
    int x; cin>>x;
    if (x!=0)
    {
        head -> info = x;
        head -> next = NULL;
        cin>>x;
        SingleList *p = head;
        while (x!=0)
        {
            SingleList *r = new(SingleList);
            r->info = x;
            r->next = NULL;
            p ->next = r;
            p = r;
            cin>>x;
        }
    }
    return head;
}
bool isProst(int x)
{
    if (x==1) return false;
    for(int i = 2;i<x;i++)
    {
        if (x%i==0) return false;
    }
    return true;
}
bool ifOne(int x)
{
    while(x)
    {
        if(x%10==1) return true;
        x/=10;
    }
    return false;
}
bool isSov(int x)
{
    if (x==1) return false;
    int k = 0;
    for(int i = 1;i<x;i++)
    {
        if (x%i==0) k += i;
    }
    return k==x;
}
float SredAr(SingleList* head)
{
    float s = 0, k = 0;
    if (head==NULL) return 0;
    while(head!=NULL)
    {
        s+=head->info;
        k++;
        head = head->next;
    }
    return s/k;
}
SingleList * formNewSingleListSov(SingleList *head)
{
    SingleList *p1;
    SingleList *h1 = new SingleList;
    h1->next = NULL;
    p1 = h1;
    SingleList *p = head;
    while (p!=NULL)
    {
        if(isSov(p->info))
        {
            SingleList *q1 = new SingleList;
            q1->info = p->info;
            q1->next = NULL;
            p1->next = q1;
            p1 = q1;
        }
        p = p->next;
    }
    h1 = h1->next;
    return h1;
}

SingleList *formOutOfTwo(SingleList *head,SingleList *head2)
{
    SingleList *h1 = new SingleList;
    h1->next=NULL;
    SingleList *p1 = h1;

    SingleList *p = head;
    SingleList *p2 = head2;

    float sr1 = SredAr(head);
    float sr2 = SredAr(head2);
    while(p!=NULL)
    {
        if(p->info>sr1)
        {
            SingleList *q1 = new SingleList;
            q1->info = p->info;
            q1->next = NULL;
            p1->next = q1;
            p1 = q1;
        }
        p = p->next;
    }
    h1 = h1->next;

    while(p2!=NULL)
    {
        if(p2->info>sr2)
        {
            SingleList *q1 = new SingleList;
            q1->info = p2->info;
            q1->next = NULL;
            p1->next = q1;
            p1 = q1;
        }
        p2 = p2->next;
    }

    return h1;
}

//recursion
float Avg(SingleList *p, int &k, int &sum)
{
    if (p==NULL)
    {
        if(k==0) return 0;
        else return (float)sum/k;
    }
    if(p->info>0)
    {
        sum+=p->info;
        k++;
    }
    return Avg(p->next,k,sum);
}

void Kvadr(SingleList *p)
{
    if( p!=NULL)
    {
        if(p->info>0) p->info = p->info*p->info; 
        return Kvadr(p->next);
    }
    
}

int kol35(SingleList *p, int &k)
{
    if (p!=NULL)
    {
        if(p->info%5==0 && p->info%3!=0) k++;
        return kol35(p->next,k); 
    }
    return k;
}

int sumProst(SingleList *p)
{
    if(p!=NULL)
    {
        if (isProst(p->info)) return sumProst(p->next) + p->info;
        else return sumProst(p->next); 
    }
    return 0;
}

int sumOne(SingleList *p)
{
    if(p!=NULL)
    {
        if (ifOne(p->info)) return sumOne(p->next) + p->info;
        else return sumOne(p->next); 
    }
    return 0;
}

void AddIfAfterChet(SingleList *p, int x)
{
    if(p!=NULL)
    {
        if(p->info%2==0)
        {
            SingleList *r = new SingleList;
            r->info = x;
            r->next = p->next;
            p->next = r;
            p = r;
        }
        AddIfAfterChet(p->next,x);
    }
}


void printSingleList( SingleList *head)
{
    SingleList *p = head;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p = p->next;
    }
    cout<<endl;
}
void DeleteSingleList(SingleList *head)
{
    if(head!=NULL)
    {
        DeleteSingleList(head->next);
        delete head;
    }
}

int main()
{
    SingleList *head = SingleListFill();
    // SingleList *head2 = SingleListFill();
    // SingleList *head3 = formOutOfTwo(head,head2);
    // printSingleList(head);
    // printSingleList(head2);
    // printSingleList(head3);


    //recursion
    //task 1
    // int k = 0, sum = 0;
    // cout<<Avg(head,k,sum)<<endl;

    //task 2
    // SingleList* p = head;
    // Kvadr(p);
    // printSingleList(head);

    //task 3
    //SingleList *p = head;
    //int k = 0;
    //cout<<kol35(p,k);

    //task4 
    // SingleList *p = head;
    // cout<<sumProst(p)<<endl;

    //task 5
    // SingleList *p = head;
    // cout<<sumOne(p)<<endl;

    //task 2.1
    SingleList *p = head;
    AddIfAfterChet(p,sumProst(p));
    printSingleList(head);

}