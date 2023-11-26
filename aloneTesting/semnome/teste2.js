function data(numberPackadges, gasLitters, kmDrived) {
    numberPackadges;
    gasLitters;
    kmDrived;
    kmPerLitter = kmDrived / gasLitters;
    avarageValue = numberPackadges / 2.5
    console.log('Hoje sua rota teve o lucro de ' + avarageValue + '$ Por pacote, e teve a media de ' + Math.floor(kmPerLitter) + ' de quilometros por litro')
}

function logar(texto){
    console.log(texto)
}
module.exports = { data, logar }