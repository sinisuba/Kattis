d = dict()
day = 1

while True:
    try:
        ulaz = input().split()
    except EOFError:
        break

    d = {}
    mylist = []

    while True:
        ulaz = input().split()
        if ulaz[0] == 'CLOSE':
            break
        else:
            mylist.append(ulaz)
            if ulaz[0] == 'ENTER':
                d[ulaz[1]] = 0

    for i in range(0, len(mylist)):
        if mylist[i][0] == 'ENTER':
            for j in range(i + 1, len(mylist)):
                if mylist[j][0] == 'EXIT' and mylist[j][1] == mylist[i][1]:
                    price = (int(mylist[j][2]) - int(mylist[i][2])) * 0.10
                    d[mylist[j][1]] += price
                    break

    x = sorted(d.items())
    print(f'Day {day}')

    for i in range(0, len(x)):
        print(x[i][0], '$' + "{0:.2f}".format(float((x[i][1]))))

    print()
    day += 1
