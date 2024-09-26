package edu.vinny.testes;

public class smartTv {

    boolean ligada = true;
    int canal = 15;
    int volume = 52;

public void ligar(){
    ligada = true;
}

public void desligar(){
    ligada = false;
}

public void trocarCanal(int nCanal){
    canal = nCanal;
    
}

public void trocarVolume(int nVolume){
    volume = nVolume;
}


}
