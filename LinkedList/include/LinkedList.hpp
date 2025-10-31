#pragma once
#include <string>
#include <any>
#include <iostream>

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

    void AddItem(const std::string& key, std::any value);
    std::any getItem(const std::string& key);
};
