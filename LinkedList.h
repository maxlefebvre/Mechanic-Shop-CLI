#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template <class T>
class LinkedList
{
  template <class S>
  friend ostream& operator<<(ostream&, LinkedList<S>&);

  template <class N>
  class Node
  {
    friend class LinkedList;
    private:
      N*       data;
      Node<N>*    next;
  };

  public:
    LinkedList();
    ~LinkedList();
    int getSize() const;
    // T* get(int);
    LinkedList& operator+=(T*);
    LinkedList& operator-=(T*);
    T* operator[](int);

  private:
    Node<T>* head;
};

template <class T>
LinkedList<T>::LinkedList() : head(0) { }

template <class T>
LinkedList<T>::~LinkedList()
{
  Node<T> *currNode, *nextNode;

  currNode = head;

  while (currNode != 0) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

template <class T>
LinkedList<T>& LinkedList<T>::operator+=(T* newItem)
{
  Node<T> *currNode, *prevNode;
  Node<T>* newNode = new Node<T>;
  newNode->data = newItem;
  newNode->next = 0;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (*(newNode->data) < *(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == 0) {
    head = newNode;
  }
  else {
    prevNode->next = newNode;
  }

  newNode->next = currNode;

  return *this;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator-=(T* item)
{
  Node<T> *currNode, *prevNode;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (currNode->data == item)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == 0) 
    return *this;

  if (prevNode == 0) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  delete currNode;

  return *this;
}

// template <class T>
// T* LinkedList<T>::get(int id) 
// {
//   Node<T> *currNode = head;

//   // TODO: ->getId wont work with templates
//   while (currNode != 0) {
//     if(currNode->data->getId() == id) {
//       return currNode->data;
//     }
//     currNode = currNode->next;
//   }

//   return 0;
// }

template <class T>
int LinkedList<T>::getSize() const {
  Node<T> *currNode = head;
  int size = 0;

  while (currNode != 0) {
    currNode = currNode->next;
    size++;
  }
  
  return size;
}

template <class T>
T* LinkedList<T>::operator[](int i) {
    if(i < 0 || i > (getSize()-1)) {
        return 0;
    } else {

        Node<T> *currNode = head;

        for (int j = 0; j < i; j++) {
            currNode = currNode->next;
        }

        return currNode->data;
    }
}

template <class S>
ostream& operator<<(ostream& output, LinkedList<S>& ll)
{
  
  for (int i = 0; i < ll.getSize(); i++)  {
    output << (*(ll[i]));
  }
    
  return output;

}


#endif
