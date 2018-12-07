//
//  LinkedList.h
//  
//
//  Created by Sahithi Kalvakota on 12/7/18.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

using namespace std;

struct node {
    int value;
    node *next;
};

class LinkedList{
    
private:
    node* alloc_region;
    node *head;
    int size;
    int max_size;
    
public:
    LinkedList(int max, node* _alloc_region);
    bool add_node(int val);
    void print_list();
};

#endif /* LINKEDLIST_H */
