//
//  main.cpp
//  
//
//  Created by Sahithi Kalvakota on 12/7/18.
//

#include <unistd.h>
#include <cstdlib>
#include <iostream>

#include "LinkedList.h"

void* table[2];

int main() {
  int alloc_size = 100 * sizeof(node) + sizeof(table);
  node *r1, *r2;

  posix_memalign((void**)&r1, getpagesize(), alloc_size);
  posix_memalign((void**)&r2, getpagesize(), alloc_size);

  LinkedList l1(alloc_size, r1 + sizeof(table));
  LinkedList l2(alloc_size, r2 + sizeof(table));

  for(int i = 1; i < 9; i++) (i % 2) ? l1.add_node(i) : l2.add_node(i);

  l1.print_list();
  l2.print_list();
}
