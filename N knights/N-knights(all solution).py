#complexity is (8^(n^2)) -> 8 is the possible number of moves for knight at any location
N  = 5
no_of_solution = 0

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
	global no_of_solution
	if pos == N*N+1:
		printboard(board)
		print()
		no_of_solution += 1


	for i in range(8):
		new_x = current_x + moves_x[i]
		new_y = current_y + moves_y[i]

		if(safe(new_x,new_y,board)):
			board[new_x][new_y] = pos
			utility(new_x,new_y,board,moves_x,moves_y,pos+1)
			board[new_x][new_y] = -1


def main():

	#8 moves
	moves_x = [2,2,-2,-2,1,1,-1,-1]
	moves_y = [1,-1,1,-1,2,-2,2,-2]

	board = [[-1 for i in range(N)] for i in range(N)] 
	#printboard(board)

	
	board[0][0] = 1		#knight starts at the first position

	pos = 1

	utility(0,0,board,moves_x,moves_y,pos+1)

	print("number of solutions: ",no_of_solution)





if __name__ == "__main__":
	main()