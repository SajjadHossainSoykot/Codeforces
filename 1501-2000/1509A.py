t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    odd_numbers = [x for x in a if x % 2]
    even_numbers = [x for x in a if x % 2 == 0]

    for num in odd_numbers:
        print(num, end=' ')
    
    for num in even_numbers:
        print(num, end=' ')

    print()