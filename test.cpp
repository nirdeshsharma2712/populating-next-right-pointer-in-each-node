/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*> test;
        vector<vector<Node*>> vec1;
        vector<Node*> vec2;
        if(root==NULL) return root;
        test.push(root);
        test.push(NULL);
        while(!test.empty()){
            Node* check = test.front();
            test.pop();
            if(check==NULL){
                if(test.size()>0) test.push(NULL);
                vec1.push_back(vec2);
                vec2.clear();
            }
            else{
                vec2.push_back(check);
                if(check->left!=NULL){
                    test.push(check->left);
                }
                if(check->right!=NULL){
                    test.push(check->right);
                }
            }
        }
        for(int i=0;i<vec1.size();i++){
            for(int j=0;j<vec1[i].size()-1;j++){
                vec1[i][j]->next = vec1[i][j+1];
            }
            vec1[i][vec1[i].size()-1]->next = NULL;
        }
        return root;
    }
};
