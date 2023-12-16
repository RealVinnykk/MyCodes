function data(kmDrived, gasLitters, numberPackadges) {
    numberPackadges;
    gasLitters;
    kmDrived;
    kmDrived = kmDrived
    kmPerLitter = kmDrived / gasLitters;
    avarageValue = numberPackadges / 2.5
    // console.log('Hoje sua rota teve o lucro de ' + avarageValue + '$ Por pacote, e teve a media de ' + Math.floor(kmPerLitter) + ' de quilometros por litro')
    return kmPerLitter, avarageValue, kmDrived, numberPackadges ;
}

function logar(texto){
    console.log(texto)
}



KilometrosMotorista = []
KilometrosMotorista.push(data(15, 450, 520))
KilometrosMotorista.push(data(90 , 450, 430))
KilometrosMotorista.push(data(42, 450, 90))
KilometrosMotorista.push(data(56, 450, 150))
KilometrosMotorista.push(data(35, 450, 120))  

module.exports = { data, logar, KilometrosMotorista }