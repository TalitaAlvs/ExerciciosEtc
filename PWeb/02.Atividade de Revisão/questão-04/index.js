var money = parseFloat(prompt("Quanto dinheiro você tem? "));

var litros = money/5;
//var celsius = (tempin_f-32)*5/9;

document.write(`Você pode comprar ${litros}L, e conseguirá dirigir por ${litros*20}km`);