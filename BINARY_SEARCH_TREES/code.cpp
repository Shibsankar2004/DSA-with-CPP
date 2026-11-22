#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
        data=val;
        left=right=NULL;
     }
};

int main(){
    vector<int>arr={3,2,1,5,6,4};
    return 0;
}