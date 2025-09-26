#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

        node(int d){
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
};

node* bulidTree(node* root){
    int data;
    cout<<"Enter data : "<<endl;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for left of :"<<data<<endl;
    root->left = bulidTree(root->left);
    cout<<"Enter data for right of :"<<data<<endl;
    root->right = bulidTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp =   q.front();
        q.pop();

        if(temp==NULL)//when traversal of level is completed
        { 
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);//queue still ssome child node 
            } 
        }
       else{        
        cout<< temp -> data << " ";
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

//1 3 7 8 -1 -1 10 -1 -1 11 12 13 -1 -1 5 17 20 -1 -1 21 -1 -1 19 22 -1 -1 23 -1 -1 
int main(){
    node* root = NULL;
    root = bulidTree(root);  
    levelOrderTraversal(root);
} 