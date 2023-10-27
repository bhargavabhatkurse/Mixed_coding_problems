#complexity is (8^(n^2)) -> 8 is the possible number of moves for knight at any location
N  = 5

def safe(i,j,board):
	if i<0 or j<0 or j>=N or i>=N or board[i][j] != -1:
		return False
	
	return True

def printboard(board):
	for i in range(N):
		for j in range(N):
			print(board[i][j], end = ' ')
		print()


def utility(current_x,current_y,board,moves_x,moves_y,pos):
	
	if pos == N*N+1:
		return True


	for i in range(8):
		new_x = current_x + moves_x[i]
		new_y = current_y + moves_y[i]

		if(safe(new_x,new_y,board)):
			board[new_x][new_y] = pos
			if(utility(new_x,new_y,board,moves_x,moves_y,pos+1)):
				return True

			board[new_x][new_y] = -1

	return False


def main():

	#8 moves
	moves_x = [2,2,-2,-2,1,1,-1,-1]
	moves_y = [1,-1,1,-1,2,-2,2,-2]

	board = [[-1 for i in range(N)] for i in range(N)] 
	#printboard(board)

	


	board[0][0] = 1			#knight starts at the first position

	pos = 1

	if(not utility(0,0,board,moves_x,moves_y,pos+1)):
		print("no solution")
	else:
		printboard(board)




if __name__ == "__main__":
	main()