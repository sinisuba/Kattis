n, budget, h, w = map(int, input().split())
results = []

for i in range(0, h):
    price = int(input())
    beds = list(map(int, input().split()))

    for j in range(0, len(beds)):
        if beds[j] >= n and n * price <= budget:
            results.append(n * price)

if len(results) == 0:
    print('stay home')
else:
    print(min(results))
