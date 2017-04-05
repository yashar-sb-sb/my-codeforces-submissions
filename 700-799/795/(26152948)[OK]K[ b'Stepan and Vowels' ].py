input()
s = input()+'.'
c = 1

for i in range(1, len(s)):
    if s[i] == s[i - 1]:
        c += 1
    else:
        if s[i-1] in "oe":
            c = min(1,c) if c != 2 else c
        elif s[i-1] in "aiuy":
            c = 1
        print(s[i-1]*c,end='')
        c = 1
