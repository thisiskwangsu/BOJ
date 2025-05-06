#https://www.acmicpc.net/problem/11508
N = int(input())
C = []
for _ in range(N):
    C.append(int(input()))
total = sum(C)

C.sort(reverse=True)

for i in range(2, N, 3):
    total = total - C[i]
print(total)