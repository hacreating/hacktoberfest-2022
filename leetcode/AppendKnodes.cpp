#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int length(node* head)
{
    node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

node* appendk(node* &head,int k)
{
    node* newHead;
    node* newTail;
    node* temp=head;
    int l=length(head);
    int len=0;

    while(temp->next!=NULL)
    {
        if(l-k==len)
        {
            newTail=temp;
        }

        if(l-k+1==len)
        {
            newHead=temp;
        }
        len++;
        temp=temp->next;

    }

    newTail->next=NULL;
    temp->next=head;
}
int main()
{
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
   display(head);
}
