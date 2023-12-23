carros = [];
newCar = None;

print("Você deseja adicionar um carro?: ");
newCar = input()

if (newCar == "Y"):{

    
    print("Digite o carro que você deseja adicionar: \n"),
    carros.append(input()),
    print(carros),
    carros.append(input("se deseja sair, digite EXIT()")),
    
 
} 
elif(carros.append == "EXIT"):{
    SystemExit
}