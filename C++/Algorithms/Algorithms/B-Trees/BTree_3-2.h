#pragma once
#include <iostream>
#include <vector>

class BTree_3_2
{
public:
    BTree_3_2(const std::vector<int>& keys)
    {
        _keys = keys;
        head = new TreeNode();
        BuildTree();
    }

    void PrintKeysInOrder() const
    {
        for(const auto& key : _keys)
        {
            std::cout << key << " ";
        }
    }

private:
    struct TreeNode
    {
        std::vector<int> keys;
        TreeNode* left_node;
        TreeNode* right_node;
    };
    
    std::vector<int> _keys;
    TreeNode* head;

    void BuildTree();
};
