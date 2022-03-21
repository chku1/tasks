//Root node - special node that does not have a parent
//Parent node - predecessor of a node
//Leaf node - node that does not have any children
//Level - distance of that from the root node
//Binary Tree - in a binary tree a node can not have more than two children so node can be a leaf node, or have one/two children
//In a binary tree maximum number of nodes on any level is 2^i, where i ≥ 0
//In a binary tree of height h, maximum number of nodes possible is (2^h) - 1
//In a binary tree of height h, minimum number of nodes possible is h
//In a binary tree with n nodes, maximum height possible is n, as there should be at least one node on each level
//In a binary tree with n nodes, minimum height possible is log(n + 1), as the maximum number of nodes is (2^h - 1)
//In a binary tree with n nodes, number of edges (e) equal n - 1, as every node have exactly one parent except root node and there is only one edge between a parent and a child
//In a binary tree if n₀ is a number of nodes with no children, and n₂ is a number of nodes that have 2 children, than n₀ = n₂ + 1
/*n = n₀ + n₁ + n₂
e = n - 1
e = 0×n₀ + 1× n₁ + 2×n₂
e = n₁ + 2n₂
n - 1 = n₁ + 2n₂
n₀ + n₁ + n₂ - 1 = n₁ + 2n₂
n₀ = n₂ + 1
*/
//Strictly binary tree - in which each node is either a leaf node or has two children
//A strictly binary tree with n leaf nodes, has (n - 1) non-leaf nodes
//Extended binary tree - if each empty subtree is replaced by a special node then it is extended (or 2-tree)
//special nodes = external nodes original nodes = internal nodes
//Path length of a node - number of edges traversed from that node to the root
//E = I + 2n
//Full binary tree - is binary tree, in which each level has maximum number of nodes, if h is height of a tree, it will have 2^h - 1 nodes
//For each k node: left child is 2k right child is 2k + 1 parent node is floor(k/2)
//The size of the array needed to represent a binary tree of height h = maximum number of nodes possible in a binary tree, which is 2^h - 1. For skewed binary tree size needed is 2^n, where n is the number of nodes
//linked:
/*total number of nodes = n
total number of edges = n - 1
if there are n nodes in a binary tree, the total number of null links = n + 1
links that have addresses = n - 1
and total number of links will be 2n, as each node needs 2 links
total null links = 2n - (n - 1) = n + 1*/
//nlr proerder lnr inorder lrn postorder
