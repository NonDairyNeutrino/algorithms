#include <iostream>
#include <string>

#include "B-Trees/BTree_3-2.h"
using namespace std;

enum alg_type
{
    no_alg = 0,
    three_two_tree,
};

alg_type hash_string(const string& arg)
{
    if(arg == "3-2 Tree") return three_two_tree;
    
    return no_alg;
}

int main(const int argc, char* argv[])
{
    if(argc == 2)
    {
        const string algorithm_arg = argv[1];
        cout << "Arg: " << algorithm_arg << endl;

        switch(hash_string(algorithm_arg))
        {
        case three_two_tree:
            {
                cout << "You have selected 3-2 Tree" << endl;
                const auto* tree = new BTree_3_2({1,2,3,4,5,6,7});
                tree->PrintKeysInOrder();
                break;
            }

        case no_alg:
            cout << "Argument not recognized" << endl;
            break;
        }
    }
    else
    {
        const auto* tree = new BTree_3_2({1,2,3,4,5,6,7});
        tree->PrintKeysInOrder();
    }
    return 0;
}
