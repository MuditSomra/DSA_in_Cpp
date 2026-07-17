class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
        next = nullptr;
    }
};
class MyLinkedList {
public:
   
    int size;
    Node * head;
    MyLinkedList() {
        size = 0;
        head = nullptr;
    }
    
    int get(int index) {
        if(index>size-1){
            return -1;
        }
        Node * trav = head;
        for(int i = 0; i < index; i++){
            trav = trav->next;
        }
        return trav->data;
    }
    
    void addAtHead(int val) {
        size++;
        Node * temp = new Node(val);
        if(head==nullptr){
            head = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }
    
    void addAtTail(int val) {
        size++;
        Node * temp = new Node(val);

        if(head==nullptr){
            head = temp;
        }
        else if(head->next==nullptr){
            // cout<<"inside else if for val "<<val<<endl;
            head->next = temp;
        }
        else{
            // cout<<"inside else for val "<<val<<endl;
            Node * trav = head;
            while(trav->next!=nullptr){
                trav = trav->next;
            }
            // cout<<"last trv val "<<trav->data<<endl;
            trav->next = temp;
        }
    }
    
    void addAtIndex(int index, int val) {
        Node * temp = new Node(val);
        if(index>size){
            return;
        }
        size++;
        if(head==nullptr && index==0){
            head = temp;
        }
        else if(index ==0){
            temp->next = head;
            head = temp;
        }
        else{
            Node * trav = head;
            for(int i = 0; i <index-1; i++){
                trav = trav->next;
            }
            temp->next = trav->next;
            trav->next = temp;
        }
        
    }
    
    void deleteAtIndex(int index) {
        if(index>=size){
            return;
        }
        else if(index==0){
            head = head->next;
        }
        else{
            Node * trav = head;
            for(int i = 0; i <index-1; i++){
                trav = trav->next;
            }
            Node * temp = trav->next;

            trav->next = trav->next->next;
            delete temp;
            // trav->next = temp;

        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */