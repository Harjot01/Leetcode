// Don't Overthink, Just Code
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *prev;
    int key;
    int value;
    int cnt;
    Node *next;

    Node(int key, int value)
    {
        this->key = key;
        this->value = value;
        cnt = 1;
    }
};

class List
{
public:
    int size;
    Node *head;
    Node *tail;

    List()
    {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    void AddNode(Node *n)
    {
        Node *temp = head->next;
        n->next = temp;
        n->prev = head;
        head->next = n;
        temp->prev = n;
        size++;
    }

    void RemoveNode(Node *n)
    {
        Node *delPrev = n->prev;
        Node *delNext = n->next;
        delPrev->next = delNext;
        delNext->prev = delPrev;
        size--;
    }
};

class LFUCache
{
private:
    map<int, Node *> keyNode;
    map<int, List *> freqListMap;
    int capacity;
    int minFreq;
    int curSize;

public:
    LFUCache(int capacity)
    {
        this->capacity = capacity;
        minFreq = 0;
        curSize = 0;
    }

    void UpdateFreqListMap(Node *node)
    {
        keyNode.erase(node->key);
        freqListMap[node->cnt]->RemoveNode(node);
        if (node->cnt == minFreq and freqListMap[node->cnt]->size == 0)
        {
            minFreq++;
        }

        List *nextHigherFreqList = new List();
        if (freqListMap.find(node->cnt + 1) != freqListMap.end())
        {
            nextHigherFreqList = freqListMap[node->cnt + 1];
        }
        node->cnt += 1;
        nextHigherFreqList->AddNode(node);
        freqListMap[node->cnt] = nextHigherFreqList;
        keyNode[node->key] = node;
    }

    int get(int key)
    {
        if (keyNode.find(key) != keyNode.end())
        {
            Node *node = keyNode[key];
            int val = node->value;
            UpdateFreqListMap(node);
            return val;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (capacity == 0)
            return;

        if (keyNode.find(key) != keyNode.end())
        {
            Node *node = keyNode[key];
            node->value = value;
            UpdateFreqListMap(node);
        }
        else
        {
            if (curSize == capacity)
            {
                List *list = freqListMap[minFreq];
                keyNode.erase(list->tail->prev->key);
                freqListMap[minFreq]->RemoveNode(list->tail->prev);
                curSize--;
            }
            curSize++;
            minFreq = 1;
            List *listFreq = new List();
            if (freqListMap.find(minFreq) != freqListMap.end())
            {
                listFreq = freqListMap[minFreq];
            }
            Node *node = new Node(key, value);
            listFreq->AddNode(node);
            keyNode[key] = node;
            freqListMap[minFreq] = listFreq;
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

int main()
{

    return 0;
}