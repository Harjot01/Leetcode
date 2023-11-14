// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
public:
    class Node
    {
    public:
        Node *prev;
        int key;
        int data;
        Node *next;

        Node()
        {
            key = 0;
            data = 0;
            prev = NULL;
            next = NULL;
        }
        Node(int key, int data)
        {
            this->key = key;
            this->data = data;
            prev = NULL;
            next = NULL;
        }
    };
    Node *head = new Node(-1, -1);
    Node *tail = new Node(-1, -1);

    int capacity;
    unordered_map<int, Node *> mp;
    LRUCache(int capacity)
    {
        this->capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    void AddNode(Node *n)
    {
        Node *temp = head->next;
        n->next = temp;
        n->prev = head;
        temp->prev = n;
        head->next = n;
    }

    void DeleteNode(Node *n)
    {
        Node *delPrev = n->prev;
        Node *delNext = n->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
    }

    int get(int key)
    {
        if (mp.find(key) != mp.end())
        {
            // found the key
            Node *resNode = mp[key];
            int resData = resNode->data;
            mp.erase(key);
            DeleteNode(resNode);
            AddNode(resNode);
            mp[key] = head->next;
            return resData;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (mp.find(key) != mp.end())
        {
            Node *resNode = mp[key];
            mp.erase(key);
            DeleteNode(resNode);
        }

        if (mp.size() == capacity)
        {
            Node *resNode = tail->prev;
            mp.erase(resNode->key);
            DeleteNode(resNode);
        }

        Node *resNode = new Node(key, value);
        AddNode(resNode);
        mp[key] = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main()
{

    return 0;
}