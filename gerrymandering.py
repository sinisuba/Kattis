import math

liste = []
n, d = map(int, input().split())

for i in range(0, n):
    pronadjeno = 0
    ulaz = list(map(int, input().split()))
    for j in range(0, len(liste)):
        if ulaz[0] == liste[j][0]:
            liste[j][1] += ulaz[1]
            liste[j][2] += ulaz[2]
            pronadjeno = 1
            break
    if pronadjeno == 0:
        liste.append(ulaz)

liste = sorted(liste)
total_votes = 0
winner = -1
wastedA = 0
wastedB = 0
wastedAtotal = 0
wastedBtotal = 0

for i in range(0, len(liste)):
    total_votes += liste[i][1] + liste[i][2]
    votesA, votesB = liste[i][1], liste[i][2]
    if liste[i][1] > liste[i][2]:
        winner = 1
    else:
        winner = 2
    if winner == 2:  # 'B'
        x = votesB - (math.floor((votesA + votesB)/2) + 1)
        wastedBtotal += x
        wastedAtotal += votesA
        wastedB = x
        wastedA = votesA
    elif winner == 1:  # 'A'
        x = votesA - (math.floor((votesA + votesB) / 2) + 1)
        wastedAtotal += x
        wastedBtotal += votesB
        wastedA = x
        wastedB = votesB
    print('B' if winner == 2 else 'A', end=' ')
    print(wastedA, wastedB)

print(round((abs(round(wastedAtotal)-round(wastedBtotal))/total_votes), 6))
