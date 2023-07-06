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

bool isProst(int x)
{
    if(x==1) return false;
    for(int i = 2;i<x;i++)
    {
        if(x%i==0) return false;
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
int max(Tree *root)
{
    if(root->r==NULL) return root->info;
    return max(root->r);
}
bool prostATL(Tree* t)
{
    if (t!=NULL)
    {
        if(isProst(t->info)) return true;
        return prostATL(t->l) || prostATL(t->r);

    }
    return false;
}
bool sovALL(Tree *t)
{
    if(t!=NULL)
    {
        if (isSov(t->info)) return true;
        return sovALL(t->l) && sovALL(t->r);
    }
    return true;
}
void chetReplace(Tree *root, int x)
{
    if (root==NULL) return;
    if (root->info%2==0) root->info = x;
    return chetReplace(root->l,x),chetReplace(root->r,x); 
}
void uvelPolNaMX(Tree *root)
{
    int x = max(root);
    if (root==NULL) return;
    if (root->info>0) root->info +=x;
    return uvelPolNaMX(root->l),uvelPolNaMX(root->r); 
}
int sumL(Tree *root)
{
    if (root==NULL) return 0;
    if(root->l == NULL && root->r==NULL) return root->info + sumL(root->l)+sumL(root->r);
    return sumL(root->l)+sumL(root->r);
}
int proizvNeL(Tree *root)
{
    if (root==NULL) return 1;
    if (root->l != NULL || root->r != NULL) return root->info*proizvNeL(root->l)*proizvNeL(root->r);
    return proizvNeL(root->l)*proizvNeL(root->r);
}



int main()
{
    Tree *root = fillTree();
    /*if (prostATL(root)) 
    {
        cout<<"Input znach";
        int l; cin>>l;
        chetReplace(root,l);
    }
    else uvelPolNaMX(root); */
    if (sovALL(root)) cout<<sumL(root);
    else cout<<proizvNeL(root);
    //printTree(root);
}