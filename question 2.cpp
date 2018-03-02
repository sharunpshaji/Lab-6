#include <iostream>
using namespace std;

struct node{

int data;
node *next;

};

class linkedlist{

private:

node *head;
node *tail;

public:

linkedlist(){
head=NULL;
tail=NULL;
};
void add(int n);
void view();
void count();
void Search(int key);
};

void linkedlist::add(int n){

node *temp = new node;
temp-> data = n;
temp->next = NULL;

if (head == NULL){
head = temp;
tail = temp;
}

else{
tail-> next = temp;
tail = temp;

}



}

void linkedlist::view(){

node *temp = new node;
temp = head;

if (head==NULL){
cout<<"the list is empty"<<endl;
}
else{
while(temp!=NULL){
cout<<temp->data<<endl;
temp = temp->next;
}

}


}


void linkedlist::count(){
node *temp = new node;
temp = head;
int i=0;
while(temp!=NULL){
temp=temp->next;
i++;
}
cout<<"the number of elements in the list is " <<i<<endl;


}
// untill this it was the part of linked list, our linked list have functions to add, view and count;

// declaring the function for search
// since it's not an array the more efficent search is not binary, hence compares instantly and find out the position
void linkedlist::Search(int key) {
node *temp = new node;
temp = head;
int i=0;
while (temp!=NULL){
i++;
if(temp->data==key){

cout<<"The position of "<<key<<" is "<<i;}

else if(temp->next == NULL){

cout<<"not found in the list";

}

temp = temp->next;

}





}

















int main() {
linkedlist a;
a.add(1);
a.add(2);
a.add(3);
a.add(4);
a.add(5);
a.view();
a.count();
a.Search(6);


return 0;
}
