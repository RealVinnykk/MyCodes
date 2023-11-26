
let i = 0
loop = 100

while (i < loop) {
    i++

// * If version

    console.log(i)

    if (i % 3 == 0) {
        console.log("\nBuzz")
    }

    if (i % 5 == 0) {
        console.log("\nFuzz")
    }

    if (i % 3 && 5 == 0) {
        console.log("\nFuzzBuzz")
    }

}

// ^ Switch version 

// switch (i < loop) {
//     case i % 3 == 0:
//         console.log(i + " Buzz")
//         break;

//     case i % 5 == 0:
//         console.log(i + " Fuzz")
//         break;

//     case i % 7 == 0:
//         console.log(i + " FuzzBuzz")
//         break;
//     default:
//         break;
// }

