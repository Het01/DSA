|Index | Question | Logic |
|---|---|----|
|1|[Maximum number of nodes on level i](https://github.com/Het01/DSA/blob/main/Tree/Intro.cpp)|2^(i-1)|
|2|[Binary Tree Representation](https://github.com/Het01/DSA/blob/main/Tree/Binary_Tree_Representation.cpp)|Using Queue|
|3|[Preorder Traversal](https://github.com/Het01/DSA/blob/main/Tree/Preorder_Traversal.cpp) | root,left,right |
|4|[Inorder Traversal](https://github.com/Het01/DSA/blob/main/Tree/Inorder_Traversal.cpp) | left,root,right |
|5|[Postorder Traversal](https://github.com/Het01/DSA/blob/main/Tree/Postorder_Traversal.cpp) | left,right,root |
|6|[Levelorder Traversal](https://github.com/Het01/DSA/blob/main/Tree/Levelorder_Traversal.cpp) | Queue |
|7|[Preorder Traversal Iterative](https://github.com/Het01/DSA/blob/main/Tree/Preorder_Traversal_Iterative.cpp) | Stack (print, right, left) |
|8|[Inorder Traversal Iterative](https://github.com/Het01/DSA/blob/main/Tree/Inorder_Traversal_Iterative.cpp) | Stack |
|9|[Postorder Traversal Iterative](https://github.com/Het01/DSA/blob/main/Tree/Postorder_Traversal_Iterative.cpp) | 2 Stack |
|10|[Height of Binary Tree](https://github.com/Het01/DSA/blob/main/Tree/Height_of_Binary_Tree.cpp) | max(l,r) + 1|
|11|[Balanced Binary Tree](https://github.com/Het01/DSA/blob/main/Tree/Balanced_Binary_Tree.cpp)| pair<bool,int> (balanced,height) |
|12|[Diameter of a Binary Tree](https://github.com/Het01/DSA/blob/main/Tree/Diameter_of_a_Binary_Tree.cpp)| pair<bool,int> (Diameter,height) |
|13|[Maximum Path Sum](https://github.com/Het01/DSA/blob/main/Tree/Maximum_Path_Sum.cpp)| maxi=l+r+root->data and return max(l,r)+root->data |
|14|[Determine if Two Trees are Identical](https://github.com/Het01/DSA/blob/main/Tree/Determine_if_Two_Trees_are_Identical.cpp)| Travel both trees |
|15|[ZigZag Tree Traversal](https://github.com/Het01/DSA/blob/main/Tree/ZigZagTreeTraversal.cpp)| Use Flag |
|16|[Boundary Traversal](https://github.com/Het01/DSA/blob/main/Tree/Boundary_Traversal.cpp)| Left Leaf Leaf Right |
|17|[Vertical Order Traversal](https://github.com/Het01/DSA/blob/main/Tree/Vertical_Order_Traversal.cpp)| Queue(Node*,vl,hl) <br/> m(vl,hl,nodes) |
|18|[Top View](https://github.com/Het01/DSA/blob/main/Tree/Top_View.cpp)| Queue(Node*,vl)<br/>m(vl,first node) - check in m |
|19|[Bottom View](https://github.com/Het01/DSA/blob/main/Tree/Bottom_View.cpp)| Remove one condition |
|20|[Left View](https://github.com/Het01/DSA/blob/main/Tree/Left_View.cpp)| level==ans.size() |
|21|[Right View](https://github.com/Het01/DSA/blob/main/Tree/Right_View.cpp)| First right then left |
|22|[Symmetric Tree](https://github.com/Het01/DSA/blob/main/Tree/Symmetric_Tree.cpp)| Take left in one and right in second |
|23|[Root to Leaf Paths](https://github.com/Het01/DSA/blob/main/Tree/Root_to_Leaf_Paths.cpp)| pop_back() while returning |
|24|[Lowest Common Ancestor](https://github.com/Het01/DSA/blob/main/Tree/Lowest_Common_Ancestor.cpp)| if node found return it |
|25|[Maximum Width of Binary Tree](https://github.com/Het01/DSA/blob/main/Tree/Maximum_Width_of_Binary_Tree.cpp)| Indexing |
|26|[Children Sum Parent](https://github.com/Het01/DSA/blob/main/Tree/Children_Sum_Parent.cpp)| Take sum and compare |
|27|[Nodes at given distance](https://github.com/Het01/DSA/blob/main/Tree/Nodes_at_given_distance.cpp)| Make Parent map and BFS Travel |
|28|[Burning Tree](https://github.com/Het01/DSA/blob/main/Tree/Burning_Tree.cpp)| Make Parent map and BFS |
|29|[Count total Nodes in COMPLETE Binary Tree](https://github.com/Het01/DSA/blob/main/Tree/Count_total_Nodes_in_COMPLETE_Binary_Tree.cpp)| Find left height and right height<br/> if same -> return 2^height - 1 else return 1 + left + right |
|30|[Construct Tree from Inorder & Preorder](https://github.com/Het01/DSA/blob/main/Tree/Construct_Tree_from_Inorder_&_Preorder.cpp)| Use map for storing index of inorder (if all elments are unique) |
|31|[Construct Tree from Inorder & Postorder](https://github.com/Het01/DSA/blob/main/Tree/Construct_Tree_from_Inorder_&_Postorder.cpp)| Starting from back and first right then left |
|32|[](https://github.com/Het01/DSA/blob/main/Tree/Burning_Tree.cpp)| Make Parent map and BFS |
|33|[](https://github.com/Het01/DSA/blob/main/Tree/Burning_Tree.cpp)| Make Parent map and BFS |
