while True:
	card=float(input())
	denominator=2
	if card==0:
		break
	while card>0.0:
		card-=1.0/denominator
		denominator+=1
	print(denominator-2,'card(s)')
