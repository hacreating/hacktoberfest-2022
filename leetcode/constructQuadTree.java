public Node construct(int[][] grid) {
    return constructQuadTree(grid, 0, 0, grid.length - 1, grid.length - 1);
}

private Node constructQuadTree(int[][] grid, int row1, int col1, int row2, int col2) {
    if (row1 > row2 || col1 > col2) {
        return null;
    }

    // If current block is identified as Leaf Node then return it.
    if (isLeafNode(grid, row1, col1, row2, col2)) {
        return new Node(grid[row1][col1] == 1, true, null, null, null, null);
    }

    int rowMid = row1 + (row2 - row1) / 2;
    int colMid = col1 + (col2 - col1) / 2 ;

    // Break current block into four parts and construct the Node.
    // By definition, non-leaf nodes, val can be arbitrary. And hence here we can put either true or false.
    return new Node(false, false,
            constructQuadTree(grid, row1, col1, rowMid, colMid), // Top Left
            constructQuadTree(grid, row1, colMid + 1, rowMid, col2), // Top Right,
            constructQuadTree(grid, rowMid + 1, col1, row2, colMid), // Bottom Left
            constructQuadTree(grid, rowMid + 1, colMid + 1, row2, col2) // Bottom Right
            );
}

private boolean isLeafNode(int[][] grid, int row1, int col1, int row2, int col2) {
    int val = grid[row1][col1];

    for (int i = row1; i <= row2; i++) {
        for (int j = col1; j <= col2; j++) {
            if (grid[i][j] != val) {
                return false;
            }
        }
    }

    return true;
}
