

// & Adding veriables to use later 

function pokemon(personName, level) {
    let ATP = level * 1.2
    let HP = level * 1.3

    console.log('Your pokemon has a name of ' + personName + ' and is at Level ' + level + '\n' + 'Your stats are: ' +Math.round(ATP).toFixed(0) + ' ATP' + ' & ' + Math.round(HP).toFixed(0) + ' HP')
} 


function numero(){
    return console.log("EU QUERO SEXOOO");
}

function print(texto) {
    console.log(texto);
}


module.exports = { print , numero}
