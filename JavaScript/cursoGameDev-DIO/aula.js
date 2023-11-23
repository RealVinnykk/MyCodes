// COmments Details and guide for colors
//  ! Red
//  ? Blue
//  * Green
//  ^ Yellow
//  & Pink
//  ~ Purple
//  todo Mustard
// (//) Greys
// double "//" for a cut


// ? Trip details, such as distance and prices

const gasPrice = 3.5
const kilometersPerLiter = 5
let liters = 3
const totalGas = gasPrice * liters 
let tripDistance = 15

console.log("a viagem tem " + tripDistance + "KM de distancia, e sabendo que nosso carro faz " + kilometersPerLiter +  " kilometros por litro, teremos que usar pelo meno 3 litros de gasolina, e sabendo que a gasolina esta no valor de " + gasPrice + " o total será de " + totalGas + " Reais")