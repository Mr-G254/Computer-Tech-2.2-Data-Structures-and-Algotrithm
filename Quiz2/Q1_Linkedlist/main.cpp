#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

class LinkedList{
    public:
        int pos = -1;
        Node* head;
        bool check_for_cycle();
};

bool LinkedList::check_for_cycle(){
    if(head != NULL){
        Node* temp = head;
        Node* temp2 = head;

        while(temp!=NULL){
            pos += 1;
            int pos2 = -1;
            int encount = 0;

            while(temp2!=NULL){

                if(temp->next == temp2->next){
                    ++encount;
                }

                if(encount == 2 || temp2->next == head)
                    return true;

                temp2 = temp2->next;
            }
            temp = temp->next;

        }
    }
    return false;
}

int main()
{   Node* node1 = new Node();
    Node* node2 = new Node();
    Node* node3 = new Node();
    Node* node4 = new Node();

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node1;

    LinkedList lin_list = LinkedList();
    lin_list.head = node1;

    cout<<"Cycle : "<<lin_list.check_for_cycle();

    return 0;
}
