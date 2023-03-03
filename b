#!/usr/bin/bash


for f in binary_trees.h 0-binary_tree_node.c 1-binary_tree_insert_left.c \
2-binary_tree_insert_right.c 3-binary_tree_delete.c 4-binary_tree_is_leaf.c \
5-binary_tree_is_root.c 6-binary_tree_preorder.c 7-binary_tree_inorder.c \
8-binary_tree_postorder.c 9-binary_tree_height.c 10-binary_tree_depth.c \
11-binary_tree_size.c 12-binary_tree_leaves.c 13-binary_tree_nodes.c \
14-binary_tree_balance.c 15-binary_tree_is_full.c 16-binary_tree_is_perfect.c \
17-binary_tree_sibling.c 18-binary_tree_uncle.c binary_tree_print.c
do
    dos2unix $f
    betty $f
done

for i in {0..18}
do
    dos2unix "$i-main.c"
    betty "$i-main.c"
done
# git update-index --chmod=+x $f
# git update-index --chmod=+x "$i-main.c"
