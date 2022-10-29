#include<bits/stdc++.h>
using namespace std;

class Queue{
	int front,rear;
	public:
		int *arr;
		int capacity;
		Queue(int x){
			front=0;
			rear=0;
			capacity=x;
			arr=new int[x];
		}
		void enqueue(int);
		void display();
		void dequeue();
};

void Queue::enqueue(int x){
	if(rear==capacity){
		cout<<"Queue is full!"<<endl;
	}
	else{
		arr[rear]=x;
		rear++;
	}	
}

void Queue::display(){
	for(int x=0;x<rear;x++)
		cout<<arr[x]<<"->";
	
	cout<<endl;
}

void Queue::dequeue(){
	if(front==rear){
		cout<<"Queue is empty!"<<endl;
	}
	else{
		for(int i=0;i<rear-1;i++){
			arr[i]=arr[i+1];
		}
		rear--;
	}
}
int main(){
	class Queue q(6);
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	q.enqueue(6);
	
	q.display();
	
	q.dequeue();
	q.dequeue();
	
	q.display();
	return 0;
}
