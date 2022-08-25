/*
134. Code : Queue Using LL: Implement a Queue Data Structure specifically to store integer data using a Singly Linked List.
The data members should be private.
You need to implement the following public functions :

Constructor:
It initialises the data members as required.
enqueue(data) :
This function should take one argument of type integer. It enqueues the element into the queue and returns nothing.
dequeue() :
It dequeues/removes the element from the front of the queue and in turn, returns the element being dequeued or removed. In case the queue is empty, it returns -1.
front() :
It returns the element being kept at the front of the queue. In case the queue is empty, it returns -1.
getSize() :
It returns the size of the queue at any given instance of time.
isEmpty() :
It returns a boolean value indicating whether the queue is empty or not.

*/

/************************************************************

    Following is the structure of the node class

    class Node {
        public :
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            next = NULL;
        }
    };

**************************************************************/

class Queue
{

private:
    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {

        head = NULL;
        tail = NULL;
        size = 0;
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize()
    {

        return size;
    }

    bool isEmpty()
    {

        return size == 0;
    }

    void enqueue(int element)
    {

        Node *newNode = new Node(element);

        if (head == NULL)
        {

            head = newNode;
            tail = newNode;
            size++;
        }
        else
        {

            tail->next = newNode;
            tail = tail->next;
            size++;
        }
    }

    int dequeue()
    {

        if (isEmpty())
        {

            return -1;
        }

        Node *to_delete = head;
        int del_val = head->data;
        size--;

        head = head->next;

        return del_val;
    }

    int front()
    {

        if (isEmpty())
        {

            return -1;
        }

        return head->data;
    }
};
