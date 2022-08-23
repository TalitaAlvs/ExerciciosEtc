/* Formúlas:
            C = 2 * π * r
            A = π r²
*/

var raio = parseFloat(prompt("Indique o raio do círculo: "));

var perimetro = 2 * Math.PI * raio;
var area = Math.PI * raio*2;
//var fahre = (tempin_c*9/5)+32;

document.write(`O perimetro do círculo é ${perimetro.toFixed(2)} e a área é ${area.toFixed(2)}.`);