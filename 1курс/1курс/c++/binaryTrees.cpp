#include <iostream>
using namespace std;
struct Tree
{
    int info;
    Tree *l;
    Tree *r;
};
void addNode(Tree* t, int x)
{
    if(x<t->info)
    if(t->l == NULL)
    {
        Tree* q = new Tree;
        q->info = x;
        t->l = q;
        q->l = NULL; q->r = NULL;
    }
    else addNode(t->l, x);
    else
    if (t->r==NULL)
    {
        Tree *q = new Tree;
        q->info = x;
        t->r = q;
        q->l = NULL; q->r = NULL;
    }
    else addNode(t->r,x);
}
Tree* fillTree()
{
    Tree* root = new Tree;
    cout<<"Input elems"<<endl;
    int x; cin>>x;
    root->info = x; 
    root->l = NULL; 
    root->r = NULL;
    while(x)
    {
        cin>>x;
        if(x) addNode(root,x);
    }
    return root;
}
void printTree(Tree* t)
{
    if(t!=NULL)
    {
        cout<<t->info<<endl;
        printTree(t->l);
        printTree(t->r);
    }
}
int delSum(int x)
{
    int s = 0;
    for(int i = 1;i<=x;i++) s+=i;
    return s;
}
int sumChet(Tree *t)
{
    if(t!=NULL)
    {
        if (t->info%2==0) return t->info +sumChet(t->l)+ sumChet(t->r);
        return sumChet(t->l)+ sumChet(t->r);
    }
    return 0;
}
int sum(Tree *t)
{
    if (t!=NULL) return t->info +sum(t->l) + sum(t->r);
    return 0;
}
int min(Tree *root)
{
    if(root->l==NULL) return root->info;
    return min(root->l);
}
int sumL(Tree *root)
{
    if (root==NULL) return 0;
    if(root->l == NULL && root->r==NULL) return root->info + sumL(root->l)+sumL(root->r);
    return sumL(root->l)+sumL(root->r);
}
void chetReplace(Tree *root, int x)
{
    if (root==NULL) return;
    if (root->info%2==0) root->info = x;
    return chetReplace(root->l,x),chetReplace(root->r,x); 
}
void uvelKr3(Tree *root)
{
    if (root==NULL) return;
    if (root->info%3==0) root->info *=3;
    return uvelKr3(root->l),uvelKr3(root->r); 
}
int kolElem(Tree *root)
{
    if (root==NULL) return 0;
    if(delSum(root->info)%2==0) return 1+ kolElem(root->l)+kolElem(root->r);
    return kolElem(root->l)+kolElem(root->r);
}
int main()
{
    Tree* root = fillTree(); 
    

    printTree(root);
    cout<<kolElem(root);
}