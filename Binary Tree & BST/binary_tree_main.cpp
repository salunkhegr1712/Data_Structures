#include<iostream>
#include "binary_tree.cpp"

using namespace std;

int main()
{
    tnode*root=initialisation(10);
    insertion(root,20);
    insertion(root,60);
    insertion(root,30);
    insertion(root,50);
    insertion(root,70);
    insertion(root,5);
    inorder_traversal(root);
    cout<<" "<<isBST(root);
    // int input,m;
    // cout<<"enter number of nodes::"<<endl;
    // cin>>input;
    // int*array=initialisation_arr(input);
    // cout<<"enter root value"<<endl;
    // cin>>m;
    // array[0]=m;
    // array=input_arr(array,input);
    // display_arr(array,input);
    // tnode*root=initialisation(m);
    // root=insertion_tree(root,array,input);
    // cout<<endl;
    // inorder_traversal(root);
    //search1(root,60);
    //cout<<endl<<"largest is :: "<<smallest(root)<<endl;
    // cout<<" level 1"<<endl;
    // level_print(root,1);
    // cout<<endl;
    // preorder_traversal(root);
    // cout<<endl;
    // postorder_traversal(root);
    
    


    return 0;
}