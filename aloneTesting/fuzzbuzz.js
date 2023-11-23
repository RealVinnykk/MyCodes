
loopTimes = 100
i = 0
for (let i = 0; i <= loopTimes; i++) {
    
    let num1 = i

    switch (i) {
        case i % 3 == 0 :
            console.log("Fuzz")
            
            break;
    
        case i % 5 == 0 :
            console.log("Buzz")
            
            break;
        case i % 7 == 0 :
            console.log("FuzzBuzz")
            
            break;
    
        default:
            break;
    }



}
