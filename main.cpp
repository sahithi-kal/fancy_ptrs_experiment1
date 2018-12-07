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
    uint slab_id;
    uint offset;
 }
 
 there exists table of size machine_id x slab_id at some known position in machine
 table entry at [machine_id][slab_id] is pointer to free memory that has the data strucure
 
 
 
 experiment:
 - write LinkedList structure:
 
 struct Linked_List {
     int val;
     fancy_ptr next;
 }
 
 -create two "threads" by calling malloc twice with some large number
 -use "thread_ids" instead of "machine_ids"
 -create 2x1 table at start of "tread"
 -put 3-node linked_list in slab (at fixed offset) and fill in table
 
*/
