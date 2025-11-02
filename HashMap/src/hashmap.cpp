#include "../../LinkedList/include/LinkedList.hpp"
#include <functional>




class HashMap{
    private: 
    //TODO: make it dynamic 
    LinkedList mainArr[100] ; 
    std::hash<std::string> Hasher ;

    public:

    void AddPair(std::string key , std::any value){
        
        int index = Hasher(key)%100 ; // 100 is the mainArr size
        mainArr[index].AddItem(key, value) ;
    }

    std::any SearchItem(std::string key){
        int index =  Hasher(key)%100  ; 
        if(mainArr[index].keyExists(key)){
            return mainArr[index].getItem(key) ;
        }else{
            return nullptr ; 
        }
    }

    void DeletePair(std::string key ){
        int index =  Hasher(key)%100 ;
        mainArr[index].DeleteNode(key);
    }
}; 