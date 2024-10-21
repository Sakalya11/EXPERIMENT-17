
#include<iostream>
using namespace std;

class Link {
    public:
    int data;
    Link* next;

    Link(int num){
        data=num;
        next=NULL;
    }
    /*void disp(){
        cout<<data<<"   "<<next;
    }*/
};

int main(){
    Link* l1 = new Link(6);
    cout<<l1->data<<"   "<<l1->next;
    //l1.disp();
}
