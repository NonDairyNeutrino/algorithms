#include "BTree_3-2.h"

void BTree_3_2::BuildTree()
{
    TreeNode* current = head;
    for(const auto& key : _keys)
    {
        if(current->keys.size() < 2)
        {
            current->keys.push_back(key);
        }
        else
        {
            if(current->left_node == nullptr)
            {
                current->left_node = new TreeNode();
            }
            if(current->right_node == nullptr)
            {
                current->right_node = new TreeNode();
            }

            current->left_node->keys.push_back(current->keys[0]);
            current->right_node->keys.push_back(key);
            current->keys = {current->keys[1]};
        }
        
    }
}
