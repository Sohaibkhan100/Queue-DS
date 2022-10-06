#include<iostream>
using namespace std;
int size;
class Queue
{
private:
    int head;
    int tail;
    int *array;
public:
    Queue(){
        array = new int[size];
        head=-1;
        tail=-1;
    };
    void enqueue(int value){
        if (tail==size-1)
        {
            cout<<"Queue overflow";
            return;
        }else{
            tail++;
            array[tail]=value;

        }
        if (head==-1)
        {
            head++;
        }
    };
    void dequeu(){
        if (head==-1||head>tail)
        {
            cout<<"Queue oveflow";
        }else{
            head++;
        }
    };
    int front(){
        if (head==-1||head>tail)
        {
            cout<<"Queue overflow";
        }return array[head];
        
    }
    
};

int main(){
cout<<"enter size of Queue = ";
cin>>size;
Queue obj1;
obj1.enqueue(12);
obj1.enqueue(13);
obj1.enqueue(14);
obj1.enqueue(15);
obj1.enqueue(16);
obj1.dequeu();
cout<<obj1.front();

}