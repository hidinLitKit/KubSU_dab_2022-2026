#include <iostream>
using namespace std;
struct List
{
    int info;
    List* next;
};

List * listFill()
{
    List * head = new List;
    int x; cin>>x;
    if (x!=0)
    {
        head -> info = x;
        head -> next = NULL;
        cin>>x;
        List *p = head;
        while (x!=0)
        {
            List *r = new(List);
            r->info = x;
            r->next = NULL;
            p ->next = r;
            p = r;
            cin>>x;
        }
    }
    return head;
}

bool vozr(List *p)
{
    while(p->next!=NULL)
    {
        if (p->info>p->next->info) return false;
        p=p->next;
    }
        return true;
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
int maximum(List *head)
{
    if(head==NULL) return -1;
    int mx = head->info;
    while(head!=NULL)
    {
        if (head->info>mx) mx = head->info;
        head = head->next;
    }
    return mx;
}
int minimum(List *head)
{
    if(head==NULL) return -1;
    int mx = head->info;
    while(head!=NULL)
    {
        if (head->info<mx) mx = head->info;
        head = head->next;
    }
    return mx;
}



int sumNum(int x)
{
    int s = 0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}
int firstNum(int x)
{
    int x1 = x/10;
    while(x1) 
    {
        x/=10;
        x1/=10;
    }
    return x;
}
int sumOtr(List *head)
{
    int s = 0;
    while(head!=NULL)
    {
        if (head->info<0) s+= abs(head->info);
        head = head->next;
    }
    return s;
}
bool isProst(List *head)
{
    int g =0;
    while(head!=NULL)
    {
        int x = head ->info;
        if (x==1) continue;
        int k =0;
        for(int i = 2;i<x;i++)
        {
            if (x%i==0) k++;
        }
        if (k==0) g++;
        if (g>1) return true;
        head = head->next;
    }
    return false;
}

bool znakChange(List *head)
{
    while(head->next!=NULL)
    {
        if(head->info*head->next->info>0) return false;
        head = head->next;
    }
    return true;
}
int sumsov(List *head)
{
    int s =0;
    while(head!=NULL)
    {
        if(isSov(abs(head->info))) s+=head ->info;
        head = head ->next;
    }
    return s;
}
bool ifeight(int x)
{
    while(x)
    {
        if(x%10==8) return true;
        x/=10;
    }
    return false;
}

void InsertAfterChet(List *head, int mx)
{
    while(head!=NULL)
    {
        if (head->info%2==0)
        {
            List *r = new List();
            r->info = mx;
            r->next = head->next;
            head->next = r;
            head = r;
        }
        head = head->next;
    }
}
List* DeleteIfSov(List *p)
{
    List *head = p;
    while(p!=NULL && isSov(p->info))
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    head = p;
    while(p->next!=NULL)
    {
        if (isSov(p->next->info))
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
    }
    return head;
}

List* DeleteIfChetSN(List *p)
{
    List *head = p;
    while(p!=NULL && sumNum(p->info)%2==0)
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    head = p;
    while(p->next!=NULL)
    {
        if (sumNum(p->next->info)%2==0)
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
    }
    return head;
}
void InsertAfterNotChetSN(List *head, int sumOtr)
{
    while(head!=NULL)
    {
        if (firstNum(head->info)==3)
        {
            List *r = new List();
            r->info = sumOtr;
            r->next = head->next;
            head->next = r;
            head = r;
        }
        head = head->next;
    }
}

void ReplaceEnd7(List *head)
{
    int sumsv = sumsov(head);
    while(head!=NULL) 
    {
        if(head->info%10==7) head ->info=sumsv;
        head = head->next;
    }
}
List* InsertDoEight(List *head, int x)
{
    List *p = head;
    
    while(p->next!=NULL)
    {
        if (ifeight(p->next->info))
        {
            List *r = new List;
            r->info = x;
            r->next = p->next;
            p->next = r;
            p = r;
        }
        p = p->next;
    }
    if (head!=NULL && ifeight(head->info))
    {
        List *r = new List;
        r->info = x;
        r->next = head;
        head = r;
    }
    return head;
}

void printList( List *head)
{
    List *p = head;
    while(p!=NULL)
    {
        cout<<p->info<<" ";
        p = p->next;
    }
}
void DeleteList(List *head)
{
    if(head!=NULL)
    {
        DeleteList(head->next);
        delete head;
    }
}


void zadanie1(List *head)
{
    if(vozr(head)) InsertAfterChet(head,maximum(head));
    else head = DeleteIfSov(head);
    printList(head);
    DeleteList(head);
}
void zadanie2(List *head)
{
    if (isProst(head)) head = DeleteIfChetSN(head);
    else InsertAfterNotChetSN(head, sumOtr(head));
    printList(head);
    DeleteList(head);
}
void zadanie3(List *head)
{
    if(znakChange(head)) ReplaceEnd7(head);
    else head = InsertDoEight(head,minimum(head));
    printList(head);
    DeleteList(head);
}
int main()
{
    int z; 
    cout<<"Choose what task you want to check"<<endl;
    cin>>z;
    List *head = listFill();

    switch (z)
    {
    case 1:
        zadanie1(head);
        break;
    case 2:
    zadanie2(head);
    break;
    
    case 3:
    zadanie3(head);
    break;
    default:
        break;
    }
}