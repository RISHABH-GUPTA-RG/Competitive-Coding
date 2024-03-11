for _ in range(int(input())):
    n, m, x = list(map(int, input().split()))
    s = set()
    s.add(x-1)
    for i in range(m):
        r, c = list(map(str, input().split()))
        r = int(r)
        t = set()
        for j in s:
            if c == '0' or c == '?':
                t.add((j+r) % n)
            if c == '1' or c == '?':
                t.add((j-r+n) % n)
        s=t
    print(len(s))
    s=[str(i+1) for i in sorted(s)]
    print(' '.join(s))