#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int* get_reversed_list(Node* head){
    int num = 0;
    Node* temp = head;

    while(temp != NULL){
        num += 1;
        temp = temp->next;
    }
    temp = head;

    int node_list[num];
    for(int i=1;i<=num;i++){
        node_list[num-i] = temp->data;
        temp = temp->next;
    }

    return node_list;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
