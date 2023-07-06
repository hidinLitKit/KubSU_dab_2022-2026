#include <iostream>
using namespace std;
struct List
{
    int info;
    List* next;
    List* prev;
};
List* createList()
{
    List* head = new List;
    cout<<"Input elem"<<endl;
    int x;cin>>x;
    head->info = x;
    head->next = NULL;
    head->prev = NULL;
    List *p = head;
    cin>>x;
    while(x)
    {
        List* r = new List;
        r->info = x;
        r->next = NULL;
        r->prev = p;
        p->next = r;
        p = r;
        cin>>x;
    }
    return head;
}
bool isProst(int x)
{
    if(x==1) return false;
    for(int i = 2;i<x;i++)
    {
        if(x%i==0) return false;
    }
    return true;
}


void deleteChetEq(List *head)
{
    List *p = head; p = p->next;
    while(p->next!=NULL)
    {
        if(p->prev->info == p->next->info && p->info%2==0)
        {
            List *r = p;
            p->prev->next = p->next;
            p->next->prev = p->prev;
            p = p->next;
            delete r;
        }
        else p = p->next;
    }
}
List* deleteProst(List* head)
{
    List *r = head;
    List *p = head; p = p->next;
    while(p!=NULL)
    {
        if(isProst(p->info))
        {
            p->prev->next = p->next;
            if(p->next!=NULL) p->next->prev = p->prev;
            List *r = p;
            p = p->next;
            delete r;
        }
        else p = p->next;
    }
    if(isProst(head->info))
    {
        List *d = r;
        r = r->next;
        r->prev = NULL;
        delete d;
    }
    return r;
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
    List *head = createList();
    head = deleteProst(head);
    printList(head);
}