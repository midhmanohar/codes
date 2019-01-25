lists = {}
lists[0] = 0
lists[1] = 1
def rec(n):
    if n in lists:
        return lists[n]
    else:
        lists[n] = max(n,rec(int(n/2))+rec(int(n/3))+rec(int(n/4)))
        return lists[n]
while True:
    try:
            n = int(input())
            print(rec(n))
    except:
        break
