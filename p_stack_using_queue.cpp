#include <bits/stdc++.h> 
using namespace std;

class Stack {
	queue<int> q;
    int size ;

   public:

    Stack() {  
        size = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
       return size;
    }

    bool isEmpty() {
        if(q.empty() == true)
        {
            return true;
        }
        else
        return false;
    }

    void push(int element) {
        q.push(element);
        size++;
        for(int i = 0 ;i< q.size() - 1 ;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if(q.empty())
        {
            return -1;
        }
        else{
             int x = q.front();
                q.pop();
                size--;
                return x;
        }
       
    }

    int top() {
        if(q.empty())
        {
            return -1;
        }
        else
        return q.front();
    }
};







