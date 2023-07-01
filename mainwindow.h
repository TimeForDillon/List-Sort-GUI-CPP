/*******************************************************************************
* AUTHOR       : Dillon Welsh
* ASSIGNMENT1  : FINAL PROJECT
* CLASS        : CS 3A
* SECTION      : 71206
* DUE DATE     : 12/03/2020
*******************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "rational.h"
#include "complex.h"
#include "date.h"
#include <QMainWindow>
#include <iostream>
#include <string>
#include <exception>
#include <time.h>
#include <stdlib.h>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_displayButton_clicked();

    void on_push_frontButton_clicked();

    void on_push_backButton_clicked();

    void on_pop_frontButton_clicked();

    void on_remove_duplicatesButton_clicked();

    void on_insertValue_returnPressed();

    void on_insert_sortButton_clicked();

    void on_select_sortButton_clicked();

    void on_insertButton_clicked();

    void on_intButton_clicked();

    void on_doubleButton_clicked();

    void on_stringButton_clicked();

    void on_rationalButton_clicked();

    void on_dateButton_clicked();

    void on_complexButton_clicked();

private:
    Ui::MainWindow *ui;
};

/*******************************************************************************
* NODE STRUCT
*_______________________________________________________________________________
* This program defines and declares the variables and constructor for the
* Node Struct.
*_______________________________________________________________________________
* INPUT:
*  None
*
* OUTPUT:
*  None
*******************************************************************************/
template<typename E>
struct Node{
    E data;     // CALC & OUT - the value conatined in the Node
    Node *next; // PROC - the ponter to the next Node object
    /***************************************************************************
    * CONSTRUCTOR NODE
    *___________________________________________________________________________
    * This constructor constructs a Node object with a data value from the
    * constructor call and a next pointer of NULL
    *___________________________________________________________________________
    * PRE-CONDITIONS
    * data: the value conatined in the Node
    *
    * POST-CONDITIONS
    ***************************************************************************/
    Node(E data) : data(data), // CALC & OUT the value conatined in the IntNode
                   next(0) {}  // PROC the ponter to the next IntNode object
};



/*******************************************************************************
* ITERATOR CLASS
*_______________________________________________________________________________
* This program defines the functions and constructors for the Iterator Class.
*_______________________________________________________________________________
* INPUT:
*  The function and constructor declarations for the Iterator Class.
*
* OUTPUT:
*  None
*******************************************************************************/
template<typename E>
class Iterator
{
public:
/*******************************************************************************
* CONSTRUCTOR ITERATOR
*_______________________________________________________________________________
* This constructor constructs an Iterator object with current set to null
* pointer.
*******************************************************************************/
    Iterator();
/*******************************************************************************
* CONSTRUCTOR ITERATOR
*_______________________________________________________________________________
* This constructor constructs an Iterator object with current set to the passed
* in value.
*******************************************************************************/
    Iterator(Node<E>* ptr);
/*******************************************************************************
* FUNCTION OPERATOR*
*_______________________________________________________________________________
* This is overloads the * operator.
*******************************************************************************/
    E operator*();
/*******************************************************************************
* FUNCTION OPERATOR++
*_______________________________________________________________________________
* This is overloads the ++ operator.
*******************************************************************************/
    Iterator operator++();
/*******************************************************************************
* FUNCTION OPERATOR==
*_______________________________________________________________________________
* This is overloads the == operator.
*******************************************************************************/
    bool operator==(const Iterator& right) const;
/*******************************************************************************
* FUNCTION OPERATOR!=
*_______________________________________________________________________________
* This is overloads the != operator.
*******************************************************************************/
    bool operator!=(const Iterator& right) const;
private:
    Node<E>* current;   // PROC - pointer to the current node
};



/*******************************************************************************
* LINKEDLIST CLASS
*_______________________________________________________________________________
* This program defines the functions and constructors for the LinkedList Class.
*_______________________________________________________________________________
* INPUT:
*  The function and constructor declarations for the Linked List Class.
*
* OUTPUT:
*  None
*******************************************************************************/
template<typename E>
class LinkedList
{
private:
    Node<E> *head;      // PROC - pointer to the first node
    Node<E> *tail;      // PROC - pointer to the last node
public:
/*******************************************************************************
* CONSTRUCTOR LINKEDLIST
*_______________________________________________________________________________
* This constructor constructs a LinkedList object with head and tail set to null
* pointer.
*******************************************************************************/
    LinkedList();
/*******************************************************************************
* CONSTRUCTOR LINKEDLIST
*_______________________________________________________________________________
* This copy constructor constructs a LinkedList object set to the passed in
* LinkedList object.
*******************************************************************************/
    LinkedList(const LinkedList& source);
/*******************************************************************************
* DESTRUCTOR LINKEDLIST
*_______________________________________________________________________________
* This destructor destroys the LinkedList object and deletes the nodes.
*******************************************************************************/
    ~LinkedList();
/*******************************************************************************
* OVERLOADED = OPERATOR
*_______________________________________________________________________________
* This method overloads the assignment operator to work with the LinkedList obj.
*******************************************************************************/
    LinkedList & operator=(const LinkedList& source);
/*******************************************************************************
* METHOD DISPLAY
*_______________________________________________________________________________
* This method displays the contents of the linkedlist.
*******************************************************************************/
    void display() const;
/*******************************************************************************
* METHOD PUSH_FRONT
*_______________________________________________________________________________
* This method adds the passed value to a new node at the front of the list.
*******************************************************************************/
    void push_front(const E& value);
/*******************************************************************************
* METHOD PUSH_BACK
*_______________________________________________________________________________
* This method adds the passed value to a new node in the back of the list.
*******************************************************************************/
    void push_back(const E& value);
/*******************************************************************************
* METHOD POP_FRONT
*_______________________________________________________________________________
* This method removed the node from the front of the list.
*******************************************************************************/
    void pop_front();
/*******************************************************************************
* METHOD FRONT
*_______________________________________________________________________________
* This method returns the value in the front of the list.
*******************************************************************************/
    const E& front() const;
/*******************************************************************************
* METHOD BACK
*_______________________________________________________________________________
* This method returns the value at the back of the list.
*******************************************************************************/
    const E& back() const;
/*******************************************************************************
* METHOD CLEAR
*_______________________________________________________________________________
* This method clears the list.
*******************************************************************************/
    void clear();
/*******************************************************************************
* METHOD SELECT_SORT
*_______________________________________________________________________________
* This method sorts the contents of the list using the select sort algorithm.
*******************************************************************************/
    void select_sort();
/*******************************************************************************
* METHOD INSERT_SORT
*_______________________________________________________________________________
* This method sorts the contents of the lsit using insert sort.
*******************************************************************************/
    void insert_sorted(const E& value);
/*******************************************************************************
* METHOD REMOVE_DUPLICATES
*_______________________________________________________________________________
* This method removes duplicates from the list.
*******************************************************************************/
    void remove_duplicates();
/*******************************************************************************
* METHOD BEGIN
*_______________________________________________________________________________
* This method returns the node at the front of the list.
*******************************************************************************/
    Iterator<E> begin();
/*******************************************************************************
* METHOD END
*_______________________________________________________________________________
* This method returns the value in the back of the list.
*******************************************************************************/
    Iterator<E> end();
/*******************************************************************************
* METHOD LENGTH
*_______________________________________________________________________________
* This method returns the lenght of the list.
*******************************************************************************/
    void length() const;
/*******************************************************************************
* METHOD FIND_LENGTH
*_______________________________________________________________________________
* This method recursively finds the length of the list.
*******************************************************************************/
    int findLength(Node<E>* head) const;
/*******************************************************************************
* METHOD SUM
*_______________________________________________________________________________
* This method finds the sum of all nodes in the list.
*******************************************************************************/
    void sum() const;
/*******************************************************************************
* METHOD FINDSUM
*_______________________________________________________________________________
* This method recursively finds the sum of all nodes in the list.
*******************************************************************************/
    int findSum(Node<E>* head) const;
/*******************************************************************************
* METHOD ISEMPTY
*_______________________________________________________________________________
* This method returns true if the list is empty.
*******************************************************************************/
    bool isEmpty() const;
/*******************************************************************************
* METHOD INSERT
*_______________________________________________________________________________
* This method inserts a node at a given position with a given value
*******************************************************************************/
    void insertNode(E value, int position, int listSize);
};

/*******************************************************************************
* CONSTRUCTOR ITERATOR
*_______________________________________________________________________________
* This constructor constructs an Iterator object with current set to null
* pointer.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
Iterator<E>::Iterator()
{
    current = nullptr;
}

/*******************************************************************************
* CONSTRUCTOR ITERATOR
*_______________________________________________________________________________
* This constructor constructs an Iterator object with current set to the passed
* in value.
*_______________________________________________________________________________
* PRE-CONDITIONS
* Node<E>*
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
Iterator<E>::Iterator(Node<E>* ptr)
{
    current = ptr;
}

/*******************************************************************************
* OVERLOADED * OPERATOR
*_______________________________________________________________________________
* This is overloads the * operator.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* int
*******************************************************************************/
template<typename E>
E Iterator<E>::operator*()
{
    return current->data;
}

/*******************************************************************************
* OVERLOADED ++ OPERATOR
*_______________________________________________________________________________
* This is overloads the ++ operator.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* Iterator<E>
*******************************************************************************/
template<typename E>
Iterator<E> Iterator<E>::operator++()
{
    current = current->next;
    return *this;
}

/*******************************************************************************
* OVERLOADED == OPERATOR
*_______________________________________________________________________________
* This is overloads the == operator.
*_______________________________________________________________________________
* PRE-CONDITIONS
* const Iterator&
*
* POST-CONDITIONS
* bool
*******************************************************************************/
template<typename E>
bool Iterator<E>::operator==(const Iterator& right) const
{
    if(this->current==right.current||right.current==this->current) return true;
    else return false;
}

/*******************************************************************************
* OVERLOADED != OPERATOR
*_______________________________________________________________________________
* This is overloads the != operator.
*_______________________________________________________________________________
* PRE-CONDITIONS
* const Iterator&
*
* POST-CONDITIONS
* bool
*******************************************************************************/
template<typename E>
bool Iterator<E>::operator!=(const Iterator& right) const
{
    if(this->current==right.current||right.current==this->current) return false;
    else return true;
}

/*******************************************************************************
* LINKEDLIST CLASS
*_______________________________________________________________________________
* This program defines the functions and constructors for the LinkedList Class.
*_______________________________________________________________________________
* INPUT:
*  The function and constructor declarations for the Linked List Class.
*
* OUTPUT:
*  None
*******************************************************************************/

/*******************************************************************************
* CONSTRUCTOR LINKEDLIST
*_______________________________________________________________________________
* This constructor constructs a LinkedList object with a head and tail, each
* containing nullptr.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
LinkedList<E>::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

/*******************************************************************************
* COPY CONSTRUCTOR
*_______________________________________________________________________________
* This is a copy constructor.
*_______________________________________________________________________________
* PRE-CONDITIONS
* const LinkedList& source
*
* POST-CONDITIONS
* LinkedList<E>
*******************************************************************************/
template<typename E>
LinkedList<E>::LinkedList(const LinkedList& source)
{
    head=0;
    tail=0;

    if(!source.isEmpty())
    {
        Node<E>* temp = source.head;
        while(temp!=0)
        {
            push_back(temp->data);
            temp = temp->next;
        }
    }
}

/*******************************************************************************
* DESTRUCTOR LINKEDLIST
*_______________________________________________________________________________
* This destructs a LinkedList object and deletes the head and tail pointers.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
LinkedList<E>::~LinkedList()
{
    Node<E>* temp = head;
    Node<E>* curr = nullptr;

    //deallocate the memory
    //reallocated to the list.
    while(temp != nullptr)
    {
        curr = temp;
        temp = temp->next;
        delete curr;
    }

    head = nullptr;
    tail = nullptr;
}

/*******************************************************************************
* OVERLOADED ASSIGNMENT OPERATOR
*_______________________________________________________________________________
* This is overloads the assignment operator.
*_______________________________________________________________________________
* PRE-CONDITIONS
* const LinkedList& source
*
* POST-CONDITIONS
* LinkedList<E> &
*******************************************************************************/
template<typename E>
LinkedList<E> & LinkedList<E>::operator=(const LinkedList& source)
{
    if(this == &source) return  *this;
    else if(source.isEmpty())
    {
        head = 0;
        tail = 0;
    }
    else
    {
        clear();
        Node<E>* temp = source.head;
        while(temp!=0)
        {
            push_back(temp->data);
            temp=temp->next;
        }
    }
    return *this;
}

/*******************************************************************************
* FUNCTION DISPLAY
*_______________________________________________________________________________
* This Function prints the values of each node in a LinkedList object
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::display() const
{
    Node<E>* temp = head;
    //display the elements of the list.
    while(temp != nullptr)
    {
        cout << temp->data;
        //checks if this is the last pointer
        if (temp->next != NULL) cout << " ";
        temp = temp->next;
    }

}

/*******************************************************************************
* FUNCTION PUSH_FRONT
*_______________________________________________________________________________
* This Function removes an Node object from the
* front of a LinkedList, after the head pointer.
*_______________________________________________________________________________
* PRE-CONDITIONS
* const E& value
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::push_front(const E& value)
{
    Node<E>* n_node = new Node<E>(value);
    n_node->next = nullptr;

    //Insert the node at the front of the list.
    if(head == nullptr)
    {
        head = n_node;
        tail = head;
    }
    else
    {
        n_node->next = head;
        head = n_node;
    }
}

/*******************************************************************************
* FUNCTION PUSH_BACK
*_______________________________________________________________________________
* This function inserts a data value (within a new node) at the back end of
* the list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* const E& value
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::push_back(const E& value)
{
    Node<E>* n_node = new Node<E>(value);
    n_node->next = nullptr;

    //Insert the node at the back of the list.
    if(tail == nullptr)
    {
        tail = n_node;
        head = tail;
    }
    else
    {
        tail->next = n_node;
        tail = n_node;
    }
}

/*******************************************************************************
* FUNCTION POP_FRONT
*_______________________________________________________________________________
* This Function removes an Node object from the front of an LinkedList, after
* the head pointer.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::pop_front()
{
    if(head == tail && head != nullptr)
    {
        head = nullptr;
        delete tail;
        tail = nullptr;
    }
    else if(head != nullptr)
    {
        Node<E> * temp = head;
        head = head->next;
        delete temp;
    }
}

/*******************************************************************************
* FUNCTION FRONT
*_______________________________________________________________________________
* This function returns the data in the head of the linked list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* const E&
*******************************************************************************/
template<typename E>
const E& LinkedList<E>::front() const
{
    return head->data;
}

/*******************************************************************************
* FUNCTION BACK
*_______________________________________________________________________________
* This function returns the data in the tail of the linked list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* const E&
*******************************************************************************/
template<typename E>
const E& LinkedList<E>::back() const
{
    return tail->data;
}

/*******************************************************************************
* FUNCTION CLEAR
*_______________________________________________________________________________
* This function clears the list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::clear()
{
    //clear the list.
    Node<E>* temp = head;
    Node<E>* curr;

    while(temp != nullptr)
    {
        curr = temp;
        temp = temp->next;
        delete curr;
    }
}

/*******************************************************************************
* FUNCTION SELECT_SORT
*_______________________________________________________________________________
* This function sorts the list into ascending order
* using the selection sort algorithm.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::select_sort()
{
    Node<E>* temp = head,
    * min_node, * curr_node;

    //If the list is not empty then, perform the selection sort.
    if(head != nullptr)
    {
        while(temp->next != nullptr)
        {
            min_node = temp;
            curr_node = temp->next;

            while(curr_node != nullptr)
            {
                if(curr_node->data < min_node->data) min_node = curr_node;
                curr_node = curr_node->next;
            }

            E temp_swap = min_node->data;
            min_node->data = temp->data;
            temp->data = temp_swap;
            temp = temp->next;
        }
    }
}

/*******************************************************************************
* FUNCTION INSERT_SORT
*_______________________________________________________________________________
* This function assumes the values in the list are
* in sorted (ascending) order and inserts the data
* into the appropriate position in the list (so that
* the values will still be in ascending order after insertion).
*_______________________________________________________________________________
* PRE-CONDITIONS
* const E& value
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::insert_sorted(const E& value)
{
    Node<E>* n_node = new Node<E>(value);
    Node<E>* curr = head;
    Node<E>* prev = nullptr;

    //find the correct postion to insert the node.

    while(curr != nullptr && curr->data < n_node->data)
    {
        prev = curr;
        curr = curr->next;
    }

    //Insert the node
    if(prev == nullptr)
    {
        n_node->next = curr;
        head = n_node;
    }
    else
    {
        prev->next = n_node;
        n_node->next = curr;
    }

    if(curr == nullptr) tail = n_node;
}

/*******************************************************************************
* FUNCTION REMOVE_DUPLICATES
*_______________________________________________________________________________
* This function removes all values
* (actually removes the nodes that contain the value)
* that are duplicates of a value that already exists in the list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* None
*******************************************************************************/
template<typename E>
void LinkedList<E>::remove_duplicates()
{
    Node<E>* i_node = head;

    if(i_node != nullptr)
    {
        while(i_node ->next != nullptr)
        {
            Node<E>* j_node = i_node -> next;
            Node<E>* temp = i_node;
            while(j_node != nullptr)
            {
                if(j_node->data == i_node->data) temp->next = j_node->next;
                else temp = j_node;
                j_node = j_node->next;
            }
            i_node = i_node->next;
            if(i_node == nullptr) break;
        }
    }
}

/*******************************************************************************
* FUNCTION BEGIN
*_______________________________________________________________________________
* This function returns an iterator at the beginning of the linked list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* Iterator<E>
*******************************************************************************/
template<typename E>
Iterator<E> LinkedList<E>::begin()
{
    return head;
}

/*******************************************************************************
* FUNCTION END
*_______________________________________________________________________________
* This function returns an iterator one element past the last element of the
* linked list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* Iterator<E>
*******************************************************************************/
template<typename E>
Iterator<E> LinkedList<E>::end()
{
    return tail->next;
}

/*******************************************************************************
* FUNCTION LENGTH
*_______________________________________________________________________________
* This function recursively determines the length of the list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* int
*******************************************************************************/
template<typename E>
void LinkedList<E>::length() const
{
    findLength(head);
}

/*******************************************************************************
* FUNCTION FINDLENGTH
*_______________________________________________________________________________
* This function recursively determines the length of the list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* Node<E>*
*
* POST-CONDITIONS
* int
*******************************************************************************/
template<typename E>
int LinkedList<E>::findLength(Node<E>* head) const
{
    // Base case
    if (head == nullptr) return 0;

    // count is 1 + count of remaining list
    return 1 + findLength(head->next);
}

/*******************************************************************************
* FUNCTION SUM
*_______________________________________________________________________________
* This function recursively determines the sum of all of the elements in the
* list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* none
*
* POST-CONDITIONS
* int
*******************************************************************************/
template<typename E>
void LinkedList<E>::sum() const
{
    findSum(head);
}

/*******************************************************************************
* FUNCTION FINDSUM
*_______________________________________________________________________________
* This function recursively determines the sum of all of the elements in the
* list.
*_______________________________________________________________________________
* PRE-CONDITIONS
* Node<E>*
*
* POST-CONDITIONS
* int
*******************************************************************************/
template<typename E>
int LinkedList<E>::findSum(Node<E>* head) const
{
    // Base case
    if (head == nullptr) return 0;

    // sum is head data + head data of remaining list
    //cout << head->data << endl;
    return head->data + findSum(head->next);
}

/*******************************************************************************
* FUNCTION ISEMPTY
*_______________________________________________________________________________
* This function returns true if the list is empty.
*_______________________________________________________________________________
* PRE-CONDITIONS
* None
*
* POST-CONDITIONS
* bool
*******************************************************************************/
template<typename E>
bool LinkedList<E>::isEmpty() const
{
    if(head == nullptr) return true;
    else return false;
}

/*******************************************************************************
* FUNCTION INSERTNODE
*_______________________________________________________________________________
* This function inserts a node at the given position with the given value.
*_______________________________________________________________________________
* PRE-CONDITIONS
* int value, int position
*
* POST-CONDITIONS
* bool
*******************************************************************************/
template<typename E>
void LinkedList<E>::insertNode(E value, int position, int listSize)
{
    Node<E>* newNode = new Node<E>(value);
    newNode->next = nullptr;
    Node<E>* temp = head;
    if(position>0)
    {
        if(position >= listSize) // position to large
        {
            while(temp->next != nullptr) temp = temp->next;
            temp->next = newNode;
        }
        else // position is valid
        {
            for(int i=0;i<(position-1);i++)
            {
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
    else // position <= 0
    {
        head = newNode;
        newNode->next = temp;
    }
}

#endif // MAINWINDOW_H
