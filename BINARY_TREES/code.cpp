#include<iostream>
#include<vector>
#include<queue>
#include<map>
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

static int idx=-1;
Node* bulidTree(vector<int>preorder){
    idx++;
    if(preorder[idx]==-1){
        return NULL;
    }
    Node* root =new Node(preorder[idx]);
    root->left=bulidTree(preorder);
    root->right=bulidTree(preorder);
    return root;
}

//preorder
void preOrder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
//inorder
void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
//postorder
void postOrder(Node* root){
    if(root==NULL){
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

//Level order

void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        Node* curr=q.front();
        q.pop();
        if(curr==NULL){

        if(!q.empty()){
            cout<<endl;
            q.push(NULL);
            continue;
        }else{
            break;
        }
    }
        cout<<curr->data<<" ";
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
   cout<<endl;
}

// height of a Tree
int height(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftHt=height(root->left);
    int rightHt=height(root->right);
    return max(leftHt,rightHt)+1;
}
// countNode
int count(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftCount=count(root->left);
    int rightCount=count(root->right);
    return leftCount+rightCount+1;
}
//sum of Node
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftSum=sum(root->left);
    int rightSum=sum(root->right);
    return leftSum+rightSum+root->data;
}

//Top view of a binary tree
void topView(Node* root){
    queue<pair<Node*,int>>q;
    map<int,int>m;//<HD,nodeval>
    q.push({root,0});

    while(q.size()>0){
        Node* curr=q.front().first;
        int currHD=q.front().second;
        q.pop();
        if(m.find(currHD)==m.end()){
            m[currHD]=curr->data;
        }
        if(curr->left!=NULL){
            q.push({curr->left,currHD-1});
        }
        if(curr->right!=NULL){
            q.push({curr->right,currHD+1});
        }
    }
    for(auto it:m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}

//k th level of a tree

void kthLevel(Node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return ;
    }
    kthLevel(root->left,k-1);
    kthLevel(root->right,k-1);
}

//Transfrom to sum tree
int sumTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftSum=sumTree(root->left);
    int rightSum=sumTree(root->right);
    root->data+=leftSum+rightSum;
    return root->data; 
}
 
int main(){
    vector<int>preorder={1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root=bulidTree(preorder);
    // cout<<root->data<<endl;
    // cout<<root->left->data<<endl;
    // cout<<root->right->data<<endl;


    // preOrder(root);

    // inOrder(root);
    //postOrder(root);
    // levelOrder(root);
    // cout<<endl; 
    //cout<<"height:"<<height(root)<<endl;
    // cout<<"Count:"<<count(root)<<endl;
    //cout<<"Sum:"<<sum(root)<<endl;
    //topView(root);
    // kthLevel(root,3);

    cout<<"before conversion: ";
    preOrder(root);
    cout<<endl;
    sumTree(root);
    cout<<"after conversion: ";
    preOrder(root);
    cout<<endl;
    return 0;
}