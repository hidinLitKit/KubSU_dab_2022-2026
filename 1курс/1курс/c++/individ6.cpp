#include <iostream>
#include <cmath>
using namespace std;
struct List
{
    int info;
    List* next;
    List* prev;
};
struct SingleList
{
    int info;
    SingleList* next;
};

SingleList * SingleListFill(int rax, List* h2)
{
    int x;
    SingleList * head = new SingleList;
    head->next=NULL;
    while(h2!=NULL)
    {
        if(abs(h2->info-rax)<=3)
        {
            x = h2->info;
            head->info = x;
            head->next = NULL;
            h2 = h2->next;
            break;
        }
        h2 = h2->next;
    }
    SingleList *p = head;
    while(h2!=NULL)
    {
        if(abs(h2->info-rax)<=3)
        {
            SingleList *r = new(SingleList);
            x = h2->info;
            r->info = x;
            r->next = NULL;
            p ->next = r;
            p = r;
        }
        h2 = h2->next;
    }
    return head;
}
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

int mx(List* head)
{
    int mx = head->info;
    while(head!=NULL)
    {
        mx = max(mx, head->info);
        head= head->next;
    }
    return mx;
}

int mn(List* head)
{
    int mn = head->info;
    while(head!=NULL)
    {
        mn = min(mn, head->info);
        head= head->next;
    }
    return mn;
}
int main()
{
    List *head = createList();
    SingleList *shead = SingleListFill(mx(head)-mn(head),head);
    if(shead->next==NULL) cout<<"The list is unfilled"<<endl;
    else printSingleList(shead);
}