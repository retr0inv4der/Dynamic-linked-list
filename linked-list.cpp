#include <bits/stdc++.h>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>

class LinkedList {
public:
  template <typename T> struct Node {
    size_t index;
    T item;
    std::string key;
    struct Node *next;
    struct Node *last;
  };

  size_t size = 0;
  void *head;
  void *tail;

  template <typename T> T getItem(std::string key) {
    Node<T> *tempNode = (Node<T> *)this->head;
    for (size_t i = 0; i < this->size; i++) {
      if (tempNode->key == key) {
        return tempNode->item;
      }
      tempNode = tempNode->next;
    }
    return NULL;
  }

  template <typename T> int IndexSearch(std::string key) {
    // return -1 if the size is  0
    if (!this->size)
      return -1;

    Node<T> *tempNode = (Node<T> *)this->head;

    for (size_t i = 0; i < this->size; i++) {
      if (tempNode->key == key) {
        return i;
      }
      tempNode = tempNode->next;
    }
    // didint find anything so return -1
    return -1;
  }

  template <typename T> void AddItem(std::string key, T value) {
    if (!this->size) {
      Node<T> *tempNode = (Node<T> *)malloc(sizeof(Node<T>));
      tempNode->item = value;
      tempNode->key = key;
      tempNode->last = (Node<T> *)this->tail;
      this->head = tempNode;
      this->size += 1;
    } else {
      if (this->IndexSearch<T>(key) == -1) {
        Node<T> *tempNode = (Node<T> *)malloc(sizeof(Node<T>));
        tempNode->item = value;
        tempNode->key = key;
        tempNode->last = ((Node<T> *)this->tail);
        ((Node<T> *)this->tail)->next = tempNode;
        this->size += 1;
      } else {
        std::cout << "item exist" << std ::endl;
      }
    }
  }
};

int main() {
  LinkedList list;
  list.AddItem<std::string>("abol", "moz");
  list.AddItem("sepehr", 6);
}
