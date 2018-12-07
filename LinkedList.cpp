//
//  LinkedList.cpp
//
//
//  Created by Sahithi Kalvakota on 12/7/18.
//
//

#include "LinkedList.h"

LinkedList::LinkedList(int max){
    head = NULL;
    max_size=max;
}

bool LinkedList::add_node(int val){
    
    if (size + 1 > max_size){
        return false;
    }
    else {
        node *temp = new node;
        temp->value = val;
        temp->next = NULL;
        
        if (head == NULL){
            head = temp;
        }
        else {
            node *curr = head;
            
            while (curr->next != NULL){
                curr = curr->next;
            }
            
            curr->next = temp;
        }
        size +=1;
        return true;
    }
    
}

void LinkedList::print_list(){
    node *curr = head;
    
    cout << "List Size: " << size << endl;
    while (curr != NULL){
        cout << curr->value << " -> ";
        curr = curr->next;
    }
    cout << "null" << endl;
}
