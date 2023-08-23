#include<bits/stdc++.h>
using namespace std;

class MyCircularQueue {
public:
    int front ;
    int rear ;
    int *arr;
    int size;
    MyCircularQueue(int k) {
        front = -1;
        rear = -1;
        size = k ;
        arr = new int[size];
        for(int i = 0;i<size;i++)
        {
            arr[i] = 0;
        }

    }
    
    bool enQueue(int value) {
        if(isFull())
        {
            return false;
        }
        else if(isEmpty())
        {
            front = rear = 0;
            arr[rear] = value;
            return true;
        }
        else
        {
            rear = (rear+1)%size;
            arr[rear] = value;
            return true;
        }
    }
    
    bool deQueue() {
        if(isEmpty())
        {
            return false;
        }
        else if(rear == front )
        {
            rear = front = -1;
            return true;
        }
        else
        {
            arr[front] = 0;
            front = (front+1)%size;
            return true;
        }
    }
    
    int Front() {
        if(isEmpty())
        {
            return -1;
        }
        else
        {
            return arr[front];
        }
    }
    
    int Rear() {
        if(isEmpty())
        {
            return -1;
        }
        else
        return arr[rear];
    }
    
    bool isEmpty() {
        if(rear == -1 && front == -1)
        {
            return true;
        }
        else
        return false;
    }
    
    bool isFull() {
        if((rear+1)%size == front)
        {
            return true;
        }
        else
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */