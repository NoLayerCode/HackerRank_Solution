    /* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/
    int maxc(Node* root){
        int max1, min1;
        if(root->left)
            max1 = maxc(root->left);
        else
            max1 = root->data;
        if(root->right)
            min1 = minc(root->right);
        else
            min1 = root->data;
        if(max1 <= min1)
            return min1;
        else
            return max1;
    }
    int minc(Node* root){
        int max1, min1;
        if(root->left)
            max1 = maxc(root->left);
        else
            max1 = root->data;
        if(root->right)
            min1 = minc(root->right);
        else
            min1 = root->data;
        if(max1 >= min1)
            return min1;
        else
            return max1;
    }
	bool checkBST(Node* root) {
		if(root!=NULL){
            int max = maxc(root->left);
            int min = minc(root->right);
            // cout<<max<<" "<<min;
            if(max==0 && min==9999)
                return true;
            else{
                if(root->data > max && root->data < min)
                    return true;
                else
                    return false;
        
            }
        }
        return false;
	}
