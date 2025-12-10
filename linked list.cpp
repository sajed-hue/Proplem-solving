#include<iostream>
using namespace std;

struct Node{
int data;
Node *next;

Node(){
data=0;
next=nullptr;

}
};
struct LinkedList{
Node*head;
LinkedList(){
head=nullptr;
}
bool isEmpty()
{
 return head==nullptr;
}
void insertFirst(int item)
{
Node*newNode=new Node();
    newNode->data=item;
    if(isEmpty())
    {
      newNode->next=nullptr;
      head=newNode;
    }
    else
    {
     newNode->next=head;
     head=newNode;
    }
}

	void display()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
void sortList() {
 if(head==nullptr||head->next==nullptr)return;
 bool sort_item;
 do{
    sort_item=false;
    Node *current=head;
    while(current->next!=nullptr)
    {
     if(current->data  >  current->next->data)
    {
    int temp=current->data;
    current->data=current->next->data;
        current->next->data=temp;
    sort_item=true;
    }
    current=current->next;
    }


 }while(sort_item);



}

};

main(){
LinkedList l;
l.insertFirst(10);
l.insertFirst(20);
l.insertFirst(30);
l.insertFirst(40);

cout<<"Before Sorting:    ";
l.display();
cout<<endl;
l.sortList();
cout<<"After Sorting:     ";
l.display();
}
