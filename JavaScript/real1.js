

var tabela = [];

function calcularHoras(Horas, name) {
    mediaHoras = (Horas * 21) / 30; 
    tabela.push(mediaHoras + ' ' + name)
return console.log('As horas trabalhadas pelo colaborador ' + name + ' Foram de ' + Math.round(mediaHoras).toFixed(1) + ' Horas')

}






module.exports = { calcularHoras, tabela,}