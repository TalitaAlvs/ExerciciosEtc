// Formúla: (0 °C × 9/5) + 32 = 32 °F

var tempin_c = parseFloat(prompt("Indique a temperatura em Celsius: "));

var fahre = (tempin_c*9/5)+32;

document.write(`A temperatura indicada é o equivalente á  ${fahre} Fahrenheit`);