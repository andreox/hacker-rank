n = int(raw_input())

p_w_l = 0
like = 2

for i in range(n) :

	p_w_l += like
	like = (like*3)/2

print p_w_l
