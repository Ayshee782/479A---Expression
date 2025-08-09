a = int(input())
b = int(input())
c = int(input())

# Sob possible expression er value calculate
res = max(
    a + b + c,
    a * b * c,
    (a + b) * c,
    a * (b + c)
)

print(res)
