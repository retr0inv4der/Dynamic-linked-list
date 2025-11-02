#include "../../LinkedList/include/LinkedList.hpp"
#include <cstddef>
#include <functional>




class HashMap{
    private: 
    //TODO: make it dynamic 
    LinkedList mainArr[100] ; 
    std::hash<std::string> Hasher ;

    public:

    void AddPair(std::string key , std::any value);
    std::any SearchItem(std::string key);
    void DeletePair(std::string key );
}; 