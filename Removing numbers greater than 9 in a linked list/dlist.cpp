#include "dlist.h"

dlist::dlist() {
  head = NULL;
  tail = NULL;
}

dlist::~dlist() {
  while (head != NULL) {
    node* temp = head;
    head = head->next;
    delete temp;
  }
}

void dlist::build() {
  srand((unsigned)time(0));
  node* current = new node();
  current->data = (rand()%10 + 1);
  head = current;
  current->previous = NULL;
  node* previous = current;
  int additionalValues = (rand()&5);
  for (int a = 0; a < 15+additionalValues; a++) {
    current = new node();
    previous->next = current;
    current->previous = previous;
    current->data = (rand()%10 + 1);
    previous = current;
  }
  tail = current;
  current->next = NULL;
}

node* dlist::getHead(){
  return head;
}

void dlist::remove9(node* called){
  if(called == head){
    if(head->data > 9){
    node* current = head;
    head = head->next;
    head->previous = NULL;
    //delete current;
    }
    remove9(called->next);
  }
  else if(called == tail){
    if(tail->data > 9){
    node* temp = tail;
    tail = tail->previous;
    tail->next = NULL;
    //delete temp;
    }
    return;
  }
  else{
    if(called->data > 9){
      node* temp2 = called;
      if(called->next != NULL){
	called->next->previous = called->previous;
      }
      if(called->previous != NULL){
	called->previous->next = called->next;
      }
      //delete temp2;
    }
    remove9(called->next);
  }
}


void dlist::display() {
  node* current = head;
  while (current != NULL) {
    cout << current->data << " ";
    current = current->next;
  }
  cout << endl;
}
