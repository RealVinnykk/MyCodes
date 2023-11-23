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

goToTrip = true
const gasPrice = 3.5
const kilometersPerLiter = 12
let liters = 3
const totalGas = gasPrice * liters 
let tripDistance = 275
let usedLiters = tripDistance / kilometersPerLiter

console.log("vamos para a praia? ")
if (goToTrip = true) {
    
    
    console.log("Vamos para a praia, então deveremos fazer alguns calculos para ter uma noção do gasto total")
    console.log("a viagem tem " + tripDistance + "KM de distancia")
    console.log("Vamos usar um total de " +usedLiters.toFixed(2) + " Litros")
}else{
    console.log("Não vamos a praia")
}
