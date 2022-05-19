# Escreva um programa que leia dois números. Imprima então o resultado da multiplicação do primeiro pelo
# segundo. Utiliza apenas operadores de soma e subtração para calcular o resultar. Lembre-se de que podemos
# entender a multiplicação de dois números como somas sucessivas de um deles. Assim 4x5 = 5 + 5 + 5 + 5 = 20.

p = int(input("Primeiro número: "))
s = int(input("Segundo número: "))
x = 1
r = 0
while x <= s:
    r = r + p
    x = x + 1
print(f"{p} x {s} = {r}")