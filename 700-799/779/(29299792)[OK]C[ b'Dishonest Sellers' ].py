[n, k] = list(map(int, input().split()))
a = list(map(int, input().split()))
b = list(map(int, input().split()))
al = list(zip(a, b))
al.sort(key=lambda x: x[0] - x[1])
i = 0
ans = 0
while i < n and (i < k or al[i][1] > al[i][0]):
    ans += al[i][0]
    i += 1
ans += sum(map(lambda x: x[1], al[i:]))
print(ans)
