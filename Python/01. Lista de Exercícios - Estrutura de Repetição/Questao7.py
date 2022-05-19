# Modifique o programa anterior de forma que o usuário digite o início e o fim da tabuada,
# ao invés de começar com 1 e 10.

n = int(input("Tabuada de: "))
inicio = int(input("Inicia em: "))
fim = int(input("Até: "))
x = inicio
while x <= fim:
    print(f"{n} x {x} = {n * x}")
    x = x + 1