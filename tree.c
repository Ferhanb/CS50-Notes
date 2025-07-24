// Use recursion to find a number in two dimensional binary search tree

bool search(node *tree, int number)

{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else ( number > tree->number)
    {
        return search(tree->right, number);
    }
    else ( number == tree->number)
    {
        return true;
    }
}
