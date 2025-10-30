#include <iostream>
#include <string>
#include <any>

class LinkedList {
public:
    struct BaseNode {
        std::string key;
        BaseNode* next = nullptr;
        BaseNode* last = nullptr;
        std::any item;   
    };
    size_t size = 0;
    BaseNode* head = nullptr;
    BaseNode* tail = nullptr;

    void AddItem(const std::string& key, std::any value) {
        
        BaseNode* temp = head;
        while (temp) {
            if (temp->key == key) {
                std::cout << "Item exists\n";
                return;
            }
            temp = temp->next;
        }

        BaseNode* node = new BaseNode;
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

    
    std::any getItem(const std::string& key) {
        BaseNode* temp = head;
        while (temp) {
            if (temp->key == key)
                return temp->item;
            temp = temp->next;
        }
        return {}; 
    }
};

int main() {
    LinkedList list;
    list.AddItem("moz", std::string("banana"));
    list.AddItem("age", 21);

    std::any value = list.getItem("moz"  );
    if(value.type() == typeid(std::string )){
      std::cout << std::any_cast<std::string>(value) << std::endl ; 
    }else if(value.type() == typeid(int )){
      std::cout << std::any_cast<int>(value) << std::endl  ;
    }
}
