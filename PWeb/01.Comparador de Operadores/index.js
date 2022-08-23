operadores = ['==', '!=', '>', '>=', '<', '<='];

operadores.forEach(operador => {
    const bolsoDeOperacao = document
        .querySelector(".operation-pocket .caixas")
        .cloneNode(true);

    bolsoDeOperacao.querySelector("span").textContent = operador;
    document.querySelector(".bolso-title").appendChild(bolsoDeOperacao);

    bolsoDeOperacao.querySelector("#botao-comparador").addEventListener("click", () => {
        const valorCaixaEsq = bolsoDeOperacao.querySelector("#caixa-esquerda").value;
        const valorCaixaDir = bolsoDeOperacao.querySelector("#caixa-direita").value;

        if (operador == "==") {
            alert(valorCaixaEsq == valorCaixaDir)
        } else if (operador == "!=") {
            alert(valorCaixaEsq != valorCaixaDir)
        } else if (operador == ">") {
            alert(valorCaixaEsq > valorCaixaDir)
        } else if (operador == ">=") {
            alert(valorCaixaEsq >= valorCaixaDir)
        } else if (operador == "<") {
            alert(valorCaixaEsq < valorCaixaDir)
        } else if (operador == "<=") {
            alert(valorCaixaEsq <= valorCaixaDir)
        }
    });
});