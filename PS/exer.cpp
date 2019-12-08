#include <iostream>
#include <cstdlib>

<typename T>
class Node
{
private:
	T data;
	Node * next;
	Node * previous;
	static Node * head;
public:
	Node() : data(0), next(this), previous(this){}
	Node(T d, Node* n, Node* p) : data(d), next(n), previous(p){}
	T Get_Data() const { return data; }
	static Node* Go_Next(int idx)
	{
		Node * tmp = this;
		for(int i = 0; i < idx; i++)
		{
			if(tmp -> next == nullptr) { return nullptr; }
			tmp = tmp -> next;
		}
		return tmp;
	}
	static Node* Go_Pre(int idx)
	{
		Node* tmp = this;
		for(int i = 0; i < idx; i++)
		{
			if(tmp -> previous == nullptr) { return nullptr; }
			tmp = tmp -> previous;
		}
		return tmp;
	}
	static Node* Find_Loop()
	{
		Node * tortois = head;
		Node * hare = head;

		while(tortois == nullptr || hare == nullptr || hare == tortois)
		{
			tortois = tortois -> next -> next;
			hare = hare -> hare;
		}
		
		if(hare == tortois)
		{
			tortois = head;
			while(tortois != hare)
			{
				tortois = tortois -> next;
				hare = hare -> next;
			}
			return tortois;
		}
		else
		{
			return nullptr;
		}
	}
}


typedef Node* NODE;

head = nullptr;

void Make_Random_Node()
{
	

int main(void)
{
	
