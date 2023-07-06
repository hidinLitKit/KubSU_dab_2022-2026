#include <iostream>
using namespace std;

struct List
{
    int info;
    List* next;
};
List * listFill()
{
    List * head;
    int x; cin>>x;
    if (x!=0)
    {
        head = new(List);
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
void srZnPol(List *head)
{
    List *p = head;
    int k = 0;
    float sum = 0;
    while(p!=NULL)
    {
        if (p->info>0)
        {
            sum+=p->info;
            k++;
        }
        p = p->next;
    }
    cout<<(float)sum/k<<endl;
}
void polNaKvadr(List *head)
{
    List *p = head;
    while(p!=NULL)
    {
        if (p->info>0)
        {
            p->info = p->info * p->info;
        }
        p = p->next;
    }
}
void kr53(List *head)
{
    List *p = head;
    int k = 0;
    while (p!=NULL)
    {
        if (p->info%5==0 && p->info%3!=0)
        {
            k++;
        }
        p = p->next;
    }
    cout<<k;
}
void chetProizv(List *head)
{
    int pr = 1;
    while(head!=NULL)
    {
        if(head->info %2==0) pr*=head->info;
        head = head->next;
    }
    cout<<pr<<endl;
}
void uvelDvaChet(List *head)
{
    while (head!=NULL)
    {
        if (head->info%5==0) head->info +=2;
        head = head->next;
    }
}
int main()
{
    List *head =  listFill();
    //printList(head);
    // Среднее значение положительных элементов
    //srZnPol(head);
    //Заменить положительные на их квадрат
    //polNaKvadr(head);
    //printList(head);
    //kr53(head);

    //dz1
    //chetProizv(head);

    //dz2
    // uvelDvaChet(head);
    // printList(head);
    // DeleteList(head);

    //dz3
    
}