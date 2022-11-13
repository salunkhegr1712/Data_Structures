#include<iostream>
#include<stdlib.h>
using namespace std;

int* initialisation_arr(int num){
    int *n;
    n=(int*)malloc(sizeof(int)*num);
    return n;

}

//taking input from user 
 int* input_arr(int*array,int limit){
    for(int i=1;i<limit;i++){
        cout<<i+1<<" element ::"<<endl;
        cin>>array[i];
    }
    return array;
}

//traversing and siaplay are different
 void display_arr(int*array,int limit){
    for(int i=0;i<limit;i++){
        cout<<"No "<<i+1<<" element is:: "<<array[i]<<endl;
    }
}
//traversing in array is so easy
 void traverse_arr(int*array,int limit){
    int a;
    cout<<"enter position you want to see::"<<endl;
    cin>>a;
    cout<<" value at position "<<a<<" is "<<array[a-1]<<endl;
}
struct tnode{
    int data;
    tnode*left;
    tnode*right;
};

tnode*initialisation(int data){
    tnode*ptr;
    
    ptr=(tnode*)malloc(sizeof(tnode));
    
    ptr->data=data;
    ptr->left=NULL;
    ptr->right=NULL;
    return ptr;
}

void inorder_traversal(tnode*root){
    tnode*t=root;
    if(t !=NULL){
        inorder_traversal(t->left);
        cout<<t->data<<" ";
        inorder_traversal(t->right);
    }
}
void preorder_traversal(tnode*root){
    tnode*t=root;
    if(t !=NULL){
        cout<<t->data<<" ";
        preorder_traversal(t->left);
        preorder_traversal(t->right);
    }
}void postorder_traversal(tnode*root){
    tnode*t=root;
    if(t !=NULL){
        postorder_traversal(t->left);
        postorder_traversal(t->right);
        cout<<t->data<<" ";
    }
}

void insertion(tnode*root,int value){
    tnode *prev;
    while(root!=NULL){
        prev=root;
        if(root->data==value){
            printf("failure\n");
            return;
        }
        else if(root->data >value)
            root=root->left;
        else 
            root=root->right;
    }
    struct tnode*new1=initialisation(value);
    if(prev->data > value)
        prev->left=new1;
    else
        prev->right=new1;
}

struct tnode* insert(struct tnode* node, int value) 
{ 
    /* If the tree is empty, return a new node */
    if (node == NULL) 
        return initialisation(value); 
  
    /* Otherwise, recur down the tree */
    if (value < node->data) 
        node->left = insert(node->left, value); 

    else if (value > node->data) 
        node->right = insert(node->right, value); 
  
    /* return the (unchanged) node pointer */
    return node; 
}

void search(tnode*root,int val){
    static int m=0;
    if(root->data==val && root!=NULL){
        cout<<endl<<"found"<<endl;
        m=1;
        return;

    }
    else if (root->data > val ){
        search(root->left,val);
    }
    else{
        search(root->right,val);
    }
    if(m==0){
        cout<<endl<<"not found";
        return;
    }

}
void search1(tnode*root,int val){
    int m=0;
    while(root!=NULL){
        if(root->data==val){
            cout<<endl<<"found"<<endl;;
            m=1;
            return;
        }
        else if(root->data > val){
            root=root->left;
        }
        else
        {
            root=root->right;
        }
        
    }
    if(m==0){
        cout<<endl<<"not found"<<endl;
    }

}


void level_print(tnode*node,int level){
    if(node==NULL)
        return;
    else if(level==0)
        cout<<" "<<node->data;
    else{
        level_print(node->left,level-1);
        level_print(node->right,level-1);
    }   
}
 int largest(tnode*root){
    int max=root->data;
    while(root!=NULL){
        if(root->data > max){
            max=root->data;
        }
        root=root->right;
        
    }
    return max;
 }

  int smallest(tnode*root){
    int min=root->data;
    while(root!=NULL){
        if(root->data < min){
            min=root->data;
        }
        root=root->left;
        
    }
    return min;
 }

 tnode* insertion_tree(tnode*root,int*array,int l){
    
    for(int i=1;i<l;i++){
        insertion(root,array[i]);
    }
    return root;
 }
int isBST(struct tnode* node)
{
  if (node == NULL)
    return 1;
     
  /* false if left is > than node */
  if (node->left != NULL && node->left->data > node->data)
    return 0;
     
  /* false if right is < than node */
  if (node->right != NULL && node->right->data < node->data)
    return 0;
   
  /* false if, recursively, the left or right is not a BST */
  if (!isBST(node->left) || !isBST(node->right))
    return 0;
     
  /* passing all that, it's a BST */
  return 1;
}