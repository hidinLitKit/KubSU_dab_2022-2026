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
    }
        return true;
}
bool isSov(int x)
{
    if (x==1) return false;
    int k = 0;
    for(int i = 1;i<x;i++)
    {
        if (x%i==0) k ++;
    }
    return k==x;
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
int minim(List *head)
{
    int min = head->info;
    while(head!=NULL)
    {
        if (min>head->info) min = head->info;
        head = head->next;
    }
    return min;
}
void DeleteIfChet(List *p)
{
    while(p->next->next!=NULL)
    {
        if( p->info == p->next->next->info && p->next->info %2==0)
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
    }
}

List* DeleteIfProst(List *head)
{
    List *p = head;
    while(p!=NULL && isProst(p->info))
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    head = p;
    while(p->next!=NULL)
    {
        if (isProst(p->next->info))
        {
            List *r = p->next;
            p->next = r->next;
            delete r;
        }
        else p = p->next;
    }
    return head;
}
List* DeleteIfChet3(List *head)
{
    List *p = head;
    while(p!=NULL && p->info%2==0 && p->next->info%10==3)
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    head  = p;   
    while(p->next->next!=NULL)
    {
        if( p->next->info%2==0 && p->next->next->info%10==3)
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
    }
    return head;
}
List* DeleteMinE(List *head, int min)
{
    List *p = head;
    while(p!=NULL && p->info == min)
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    head = p;
    while(p->next!=NULL)
    {
        if(p->next->info==min)
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
    }
    return head;
}
void DeleteIfSov(List *p)
{
    while(p!=NULL && isSov(p->info))
    {
        List *r = p;
        p = p->next;
        delete r;
    }
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
}
void DeleteIfOtr(List *p)
{
    while(p!=NULL && p->info<0)
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    while(p->next!=NULL)
    {
        if (p->next->info<0)
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
    }
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
int main()
{
    List *p = listFill();
    //z1
    //DeleteIfChet(p);

    //z2
    //p = DeleteIfProst(p);

    //z3
    //p = DeleteIfChet3(p);

    //z4
    //p = DeleteMinE(p, minim(p));

    //z7
    // if (vozr(p)) DeleteIfSov(p);
    // else DeleteIfOtr(p);
    
    
    
    printList(p);
    DeleteList(p);
}