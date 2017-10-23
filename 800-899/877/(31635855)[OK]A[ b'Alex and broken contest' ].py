inp = input()
num = sum(inp.count(i) for i in {"Danil", "Olya", "Slava", "Ann", "Nikita"})
print("Yes" if num == 1 else "No")
