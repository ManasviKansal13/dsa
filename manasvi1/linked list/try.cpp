#include<bits/stdc++.h>
using namespace std;
struct node{
    int info;
    struct node *next;
};
struct node * getnode()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    return p;
}
/*******************/
void Insert_Beg(struct node **list,int x){
    struct node *temp;
    temp=getnode();
    temp->info=x;
    temp->next=*list;
    *list=temp;
    
} 
/*******************/
/********************/
void Insert_End(struct node **list,int x){
    struct node *temp,*p;
    temp=*list;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    p=getnode();
    p->info=x;
    p->next=NULL;
    temp->next=p;
}
void Traversal(struct node* list){
    struct node*t;
    t=list;
    while(t!=NULL){
        cout<<t->info<<"\t";
        t=t->next;
    }
    cout<<endl;
}
void copy(struct node**l1,struct node**l2)
{
    struct node *p,*q;
    p=*l1;
    while(p!=NULL){
        //Insert_BEG(*(l2),p->info);
        Insert_End(&(*l2),p->info);
        p=p->next;
    }
}
int main(){
    struct node*l1;
    struct node*l2;
    l1=NULL;
    l2=NULL;
    Insert_Beg(&l1,1);
    Insert_Beg(&l1,2);
    Insert_Beg(&l1,3);
    Insert_Beg(&l1,4);
    Insert_Beg(&l1,5);
    Insert_Beg(&l1,6);
    //cout<<endl;
    //Traversal(l1);
    copy(&(l1),&(l2));
    Traversal(l2);
    cout<<"hii";
}