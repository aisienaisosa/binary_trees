#include "binary_trees.h"

/** binary_tree_is_full - checks if a binary tree is full.
*@tree pointer to the root node to check if full.
*Return: IF tree is NULL or is not full - 0
*        otherwise - 1
*/

 int binary_tree_is_full(const binary_tree_t *tree)
{
    int counter = 0;
   if(tree)
   {
        if(tree -> left == NULL & tree->right == NULL)
            counter += 1;
        if (tree ->left && tree-> right)
            return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
    }

   return counter;
}
