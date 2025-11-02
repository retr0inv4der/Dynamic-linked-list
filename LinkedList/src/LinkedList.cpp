#include <any>
#include <iostream>
#include <string>

class LinkedList {
public:
  struct BaseNode {
    std::string key;
    BaseNode *next = nullptr;
    BaseNode *last = nullptr;
    std::any item;
  };
  size_t size = 0;
  BaseNode *head = nullptr;
  BaseNode *tail = nullptr;

  void AddItem(const std::string &key, std::any value) {

    BaseNode *temp = head;
    while (temp) {
      if (temp->key == key) {
        std::cout << "Item exists\n";
        return;
      }
      temp = temp->next;
    }

    BaseNode *node = new BaseNode;
    node->key = key;
    node->item = value;

    if (!head) {
      head = tail = node;
    } else {
      tail->next = node;
      node->last = tail;
      tail = node;
    }
    size++;
  }
  bool keyExists(std::string key){
    BaseNode* temp  = this->head; 
    for(int i = 0 ; i < this->size ; i++) {
      if(key == temp->key) return true; 
    }
    return false ;
  }
  std::any getItem(const std::string &key) {
    BaseNode *temp = head;
    while (temp) {
      if (temp->key == key)
        return temp->item;
      temp = temp->next;
    }
    return {};
  }



  void DeleteNode(std::string key){
    BaseNode* temp = head ; 
    while(temp){
      if(temp->key == key ) {
        free(temp) ; 
      }
      temp = temp->next ; 
    }
  }

  
};
