class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(len(board)):
            freq = {}
            for j in range(len(board)):
                if board[i][j] != ".":
                    if board[i][j] not in freq:
                        freq[board[i][j]] = 1
                    else:
                        return False
        for i in range(len(board)):
            freq = {}
            for j in range(len(board)):
                if board[j][i] != ".":
                    if board[j][i] not in freq:
                        freq[board[j][i]] = 1
                    else:
                        return False
        for boxRow in range(0, 9, 3):
            for boxCol in range(0, 9, 3):
                freq = {}
                for i in range(3):
                    for j in range(3):
                        val = board[boxRow + i][boxCol + j]
                        if val != ".":
                            if val in freq:
                                return False
                            freq[val] = 1

        return True

#Link: https://leetcode.com/problems/valid-sudoku/description/