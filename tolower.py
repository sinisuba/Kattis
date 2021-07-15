p, t = map(int, input().split())
gencnt = 0

for i in range(0, p):
    lista = []
    lista_count = 0
    for j in range(0, t):
        ulaz = input()
        lista.append(ulaz)
    for x in range(0, len(lista)):
        if lista[x] == lista[x].lower() or lista[x] == lista[x].title():
            lista_count += 1
    if lista_count == len(lista):
        gencnt += 1

print(gencnt)
