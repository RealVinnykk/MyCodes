
let i = 0
loop = 100

while (i < loop) {
    i++

    console.log(i)

    if (i % 3 == 0) {
        console.log("Buzz")
    }

    if (i % 5 == 0) {
        console.log("Fuzz")
    }

    if (i % 3 && 5 == 0) {
        console.log("FuzzBuzz")
    }

}


