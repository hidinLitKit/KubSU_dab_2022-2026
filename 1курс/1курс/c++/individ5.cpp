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

void insertE1(List *head, int E, int E1)
{
    while(head!=NULL)
    {
        if (head->info==E)
        {
            List *r = new List();
            r->info = E1;
            r->next = head->next;
            head->next = r;
            head = r;
        }
        head = head->next;
    }
}
List* deleteOtr(List *p)
{
    List *head = p;
    while(p!=NULL && p->info<0)
    {
        List *r = p;
        p = p->next;
        delete r;
    }
    head = p;
    while(p->next!=NULL)
    {
        if (p->next->info < 0)
        {
            List *r = p->next;
            p->next = p->next->next;
            delete r;
        }
        else p = p->next;
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
int main()
{
    cout<<"Input list"<<endl;
    List *head = listFill();
    cout<<"Input E and E1 (E1 has to be inserted after E) "<<endl;
    int E, E1; cin>>E>>E1;
    insertE1(head, E, E1);
    head = deleteOtr(head);
    printList(head);
}