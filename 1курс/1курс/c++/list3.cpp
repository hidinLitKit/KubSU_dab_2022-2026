#include <iostream>
#define usl <0
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

int kolPol(List *head)
{
    int k = 0;
    while(head!=NULL)
    {
        if (head->info>0) k++;
        head = head ->next;
    }
    return k;
}
int sumOtr(List *head)
{
    int k = 0;
    while(head!=NULL)
    {
        if (head->info < 0) k+=abs(head->info);
        head = head->next;
    }
    return k;
}
void InsertPosleOtr(List *head, int x)
{
    List *p = head;
    while(p!=NULL)
    {
        if(p->info <0)
        {
            List *r = new List;
            r->info = x;
            r->next = p->next;
            p->next = r;
            p = r;
        }
                p = p->next;
    }
}
List* InsertDoNech(List *head, int x)
{
    List *p = head;
    
    while(p->next!=NULL)
    {                              
        if (p->next->info%2!=0)
        {
            List *r = new List;
            r->info = x;
            r->next = p->next;
            p->next = r;
            p = r;
        }
        p = p->next;
    }
    if (p!=NULL and p->info%2!=0)
    {
        List *r = new List;
        r->info = x;
        r->next = p;
        p = r;
    }
    head = p;
    return head;
}
int main()
{
    List *head = listFill();
    //InsertPosleOtr(head, kolPol(head));
    head = InsertDoNech(head, sumOtr(head));
    printList(head);
}     