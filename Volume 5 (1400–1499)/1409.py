# timus problem no: 1409
# problem link: http://acm.timus.ru/problem.aspx?space=1&num=1409

H, L = raw_input().split()
H = int(H)
L = int(L)
total = (H + L) - 1
H = total - H
L = total - L

print "%d %d \n" % (H, L)
