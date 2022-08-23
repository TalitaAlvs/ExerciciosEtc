// Formúla: (0 °F − 32) × 5/9 = -17,78 °C

var tempin_f = parseFloat(prompt("Indique a temperatura em Fahrenheit: "));

var celsius = (tempin_f-32)*5/9;

document.write(`A temperatura indicada é o equivalente á  ${celsius} Celsius`);