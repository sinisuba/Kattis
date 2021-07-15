n, c = map(int, input().split())

d = dict()

ulaz = list(map(int, input().split()))
ulaz_set = list({s: 0 for s in ulaz})

for i in range(0, len(ulaz_set)):
    d[ulaz_set[i]] = 0
    d[ulaz_set[i]] += ulaz.count(ulaz_set[i])

d = sorted(d.items(), key=lambda x: x[1], reverse=True)
for i in range(0, len(d)):
    for j in range(0, d[i][1]):
        print(d[i][0], end=' ')
