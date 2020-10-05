#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H

#include <stddef.h>
#include <iostream>

template <class T>
class Node
{
private:
    T val;
    Node<T> *next;

public:
    ~Node<T>() {};
    Node<T>(T pVal, Node<T> *pNext)
    {
        val = pVal;
        next = pNext;
    };

    T get_val() {return val;};
    void set_val(T pVal) {val = pVal;};
    Node<T> *get_next() {return next;};
    void set_next(Node<T> *pNext) {next = pNext;};
};

template <class T>
class LinkedList
{
protected:
    Node<T> *head;

public:
    ~LinkedList()
    {

    };
    LinkedList()
    {
        head = NULL;
    };

    int length()
    {
        int length = 0;
        Node<T> *ptr = head;
        while (ptr != NULL)
        {
            length++;
            ptr = ptr->get_next();
        }
        return length;
    };

    void print()
    {
        Node<T> *ptr = head;
        while (ptr != NULL)
        {
            std::cout << ptr->get_val() << ", ";
            ptr = ptr->get_next();
        }
        std::cout << std::endl;        
    }

    void push(T pVal)
    {
        Node<T> *node = new Node<T>(pVal, head);
        head = node;
    };

    void append(T pVal)
    {
        Node<T> *ptr = head;
        while (ptr->get_next() != NULL)
        {
            ptr = ptr->get_next();
        }
        Node<T> *node = new Node<T>(pVal, NULL);
        ptr->set_next(node);
    };

    int insert_item(T pVal, int index)
    {
        if (index > length())
            return -1;
        if (index < 0)
            return -2;
        if (index == 0)
        {
            push(pVal);
            return 1;
        }

        int i = 0;
        Node<T> *ptr = head;
        Node<T> *pre = NULL;
        while (ptr != NULL && index > i)
        {
            pre = ptr;
            ptr = ptr->get_next();
            i++;
        }
        Node<T> *node = new Node<T>(pVal, ptr);
        pre->set_next(node);
        return 1;
    };

    bool is_empty()
    {        
        return head == NULL;
    };

    int delete_item(int index)
    {
        if (is_empty())
            return -1;
        if (index >= length())
            return -1;
        if (index < 0)
            return -2;
        if (index == 0)
        {
            Node<T> *temp = head;
            head = head->get_next();
            delete temp;
            return 1;
        }

        int i = 0;
        Node<T> *ptr = head;
        Node<T> *pre = NULL;
        while (ptr->get_next() != NULL && index > i)
        {
            pre = ptr;
            ptr = ptr->get_next();
            i++;
        }
        pre->set_next(ptr->get_next());
        delete ptr;
        return 1;
    };

    int get_nth(int index, T &item)
    {
        if (index < 0)
            return -1;
        if (index >= length())
            return -2;
            
        int i = 0;
        Node<T> *ptr = head;
        while (ptr->get_next() != NULL && index > i)
        {
            ptr = ptr->get_next();
            i++;
        }
        item = ptr->get_val();
        return 1;
    };

    void Count(T searchfor) // O(N)
    {
        int count = 0;
        Node<T> *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->get_val() == searchfor)
                count++;
            ptr = ptr->get_next();
        }
        std::cout << "The number: " << searchfor << " is present " << count << " times" << std::endl; 
    };

    int SortedInsert(T pVal) // O(N)
    {
        int i = 0;
        Node<T> *ptr = head;
        Node<T> *pre = NULL;
        while (ptr != NULL && ptr->get_val() > pVal)
        {
            pre = ptr;
            ptr = ptr->get_next();
            i++;
        }
        Node<T> *node = new Node<T>(pVal, ptr);
        pre->set_next(node);
        return 1;
    };

    void DeleteList() // O(N)
    {
        Node<T> *ptr = head;
        Node<T> *pre = NULL;
        while (ptr->get_next() != NULL)
        {
            pre = ptr;
            ptr = ptr->get_next();
            pre->set_next(ptr->get_next());
        }
        delete ptr;
        head = NULL;
         
    };

    void reverse()
    {

        Node<T> *ptr = head;
        Node<T> *previous = NULL; 
        Node<T> *next = NULL; 
        while (ptr != NULL)   
        {
            next = ptr->get_next(); 
            ptr->set_next(previous);    
            previous = ptr;           
            ptr = next;             
        }
        head = previous; 
                     
    }; 

    void RemoveDuplicates() // O(N)
    {
        Node<T> *ptr = head;
        Node<T> *next = ptr->get_next();
        while(next != NULL)
        {
            if(ptr->get_val() == next->get_val())
            {
                ptr->set_next(next->get_next());
                if(next->get_next() != NULL)
                    next = next->get_next();
                else
                {
                    return;
                }
            }
            else 
            {

                ptr = next;
                next = next->get_next();
            }

        }
        
    
            

        

         
    };

  
   


    /*int RemoveDuplicates() // O(N)
    {
        int count = 0;
        Node<T> *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->get_val() == searchfor)
                count++;
            ptr = ptr->get_next();
        } 
        head = NULL;
    };*/


};

#endif


