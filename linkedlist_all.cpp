#include<bits/stdc++.h>
using namespace std;

class node{
	public :
		int data;
		node * next;
		
	node(int val)
	{
	  	data =val;
	  	next = NULL;
	}
};


void insert(node * &head, int data)
{
	   node * nn = new node(data);
	   node * temp = head;
	   
	   if(head == NULL)
	   {
	   	  head = nn;return;
	   }
	   
	   while(temp->next!=NULL)
	   {
	   	temp = temp->next;
	   }
	   temp->next=nn;
}
//void insert(node * &ll,int data)
//{
//	node * temp = ll;
//
//	
//     
//	while(temp != NULL)
//	{
//		temp=temp->next;
//	}
//	
//	temp= new node(data);
//	return;
//	
//}

void inserathead(node * &head, int val)
{
	   node * temp = new node(val);
	   temp -> next = head;
	   head = temp;
}
//void insertattail(node * &head, int val)
//{
//	   node * temp = new node(val);
//	   head -> next = temp;
//	   head = temp;
//}
void print(node * &ll)
{
	node * temp=ll;
	
	while(temp!=NULL)
	{ 
	  cout<<temp->data<<" ";
	  temp = temp->next;
		
	}
	cout<<endl;
	return;
}

void deletenode(node * &head,int key)
{
	node * tmp = head;
	node * tmp2;
	while(tmp->next->data != key)
	{
		tmp = tmp->next;
	}

	tmp2= tmp->next;
	tmp->next = tmp->next->next;
	
	delete tmp2;
	
}

void reverse(node * head)
{
	node * tmp = head;
	node * rev = NULL;
	
	while(tmp!= NULL)
	{
		inserathead(rev,tmp->data);
		tmp=tmp->next;
	}
	print(rev);
	
	
}
void reversal(node * &head)
{
//	if(head == NULL || head->next == NULL)
//	{
//		return head;
//	}
	
	node * prev = NULL;
	node * curr = head;
	node * fwd  = NULL;
	
	while(curr != NULL)
	{
		fwd = curr->next;
		curr->next = prev;
		prev = curr;
		curr = fwd;
	}
	print(prev);
}

int main()
{
	node * l1 = NULL;
	
	int n;cin>>n;
	int inp=0;
	for(int i=0;i<n;i++)
	{
		
		cin>>inp;
		insert(l1,inp);
		
	}
//	node * l2=NULL;
//		int k;cin>>k;
//
//	for(int i=0;i<k;i++)
//	{
//		
//		cin>>inp;
//		insert(l2,inp);
//		
//	}
	cout<<"Before reverse: "<<endl;
		print(l1);
		
		
	cout<<"After reverse: "<<endl;
	reversal(l1);
//	reverse(l1);
//	int key;cin>>key;
//	deletenode(n1,key);
	
	

	
//	print(l2);
}
