package ejemplo1;

public class DobleFome {
    public Fome fome;
    public DobleFome(){
        this.fome = new Fome();
        this.fome.Numero1 = this.fome.Numero1*2;
        this.fome.Numero2 = this.fome.Numero2*2;
    }
    public void DobleHolaMundo1(){
        System.out.println("Doble ...");
        fome.HolaMundo1();
    }

    public void DobleHolaMundo2(){
        System.out.println("Doble ...");
        fome.HolaMundo2();
    }
}
