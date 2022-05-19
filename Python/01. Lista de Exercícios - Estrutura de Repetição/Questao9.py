# Escreva um programa que pergunte o valor de um depósito inicial e taxa de juros de uma poupança.
# Exiba os valores mês a mês para os primeiros 24 meses. Escreva o total ganho com juros no período.

depósito = float(input("Depósito inicial: "))
taxa = float(input("Taxa de juros (Ex.: 3 para 3%): "))
mês = 1
saldo = depósito
while mês <= 24:
    saldo = saldo + (saldo * (taxa / 100))
    print(f"Saldo do mês {mês} é de R${saldo:5.2f}.")
    mês = mês + 1
print(f"O ganho obtido com os juros foi de R${saldo-depósito:8.2f}.")