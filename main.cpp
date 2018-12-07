//
//  main.cpp
//  
//
//  Created by Sahithi Kalvakota on 12/7/18.
//

#include <stdio.h>

/**
 
 struct fancy_ptr{
 
    //overload dereference operator
     operator *(){
        table[machine_id][slab_id]
     }
 
    uint machine_id;
    uint slab_id;  //start = beginning of the region we allocate for the
    uint offset;   //current place in memory => number of nodes*size of one node
 }
 
 there exists table of size machine_id x slab_id at some known position in machine
 table entry at [machine_id][slab_id] is pointer to free memory that has the data strucure
 
 
 
 experiment:
 - write LinkedList structure:
 
 struct Linked_List {
    //include pointer to start of region
    Linked_List_Node first;
    val max_size;
 }
 
 struct Linked_List_Node{
    int val;
    Linked_List_Node next;
 }
 
 constructor for Linked List should take in max size of list and pointer to start of region it gets to take memory from
 
 -create two "threads" by calling malloc twice with some large number
 -use "thread_ids" instead of "machine_ids"
 -create 2x1 table at start of "tread"
 -put 3-node linked_list in slab (at fixed offset) and fill in table
*/

//template<class T>
//class Fancy_Ptr{
//
//    uint machine_id;
//    uint start;
//    uint offset;
//    
//    T operator*() const{
//        return
//    }
//
//
//}






