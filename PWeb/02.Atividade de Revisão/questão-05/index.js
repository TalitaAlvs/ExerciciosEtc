function Aviso(){
    var idade =  document.getElementById("idade").value;

    if (idade < 18) {
        alert("Você tem menos de 18 anos, portanto, não pode entrar!")
    } else {
        alert("Acesso consedido!")
    }
}