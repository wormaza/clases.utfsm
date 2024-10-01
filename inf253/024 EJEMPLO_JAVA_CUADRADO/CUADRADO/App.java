import ejemplo1.DobleFome;
import ejemplo1.Fome;

public class App {
    public static void main(String[] args) throws Exception {
        
        Cuadrado c1;
        Cuadrado c2;
        Cuadrado c3;

        c1 = new Cuadrado("rojo");
        System.out.println("c1->veces " + ++c1.veces);
        c2 = new Cuadrado("negro");
        System.out.println("c2->veces " + ++c2.veces );
        c3 = new Cuadrado("verde", 5);
        System.out.println("c3->veces " + ++c3.veces );
        System.out.println("c1/c2/c3->veces " + c1.veces +"/" + c2.veces + "/" + c3.veces );

        Cuadrado c4;
        c4 = c3;
        c4.SetLado(100);
        System.out.println("¿"+c3.GetLado()+" == "+c4.GetLado()+"?");
        CambiarLado(c4);
        System.out.println("¿"+c3.GetLado()+" == "+c4.GetLado()+"?");

        //#region IMPACTO PACKAGE
        ejemplo1.Fome fome;
        fome = new Fome();
        //System.out.println("Fome.Numero1: " + fome.Numero1);
        System.out.println("Fome.Numero2: "+fome.Numero2);
        //fome.HolaMundo1();
        fome.HolaMundo2();

        ejemplo1.DobleFome doblefome;
        doblefome = new DobleFome();
        //System.out.println("DobleFome.Numero1: " + doblefome.fome.Numero1);
        System.out.println("DobleFome.Numero2: "+ doblefome.fome.Numero2);
        doblefome.DobleHolaMundo1();
        doblefome.DobleHolaMundo2();
        //#endregion

        //#region
        Ejemplo e1 = new Ejemplo();
        Ejemplo e2 = new Ejemplo();

        Ejemplo.PrintIntentos();
        e1.PrintIntentos();
        e2.Cambio(0, 10);
        Ejemplo.PrintIntentos();
        e1.PrintIntentos();

        //#endregion

        //#region

        Recta r1 = new Recta(1,2,3,4);
        System.out.println("->" + r1.GetColorP1());
        r1.SetColor("Amarillo");
        System.out.println("->" + r1.GetColorP1());
        //#endregion


    }

    public static void CambiarLado(Cuadrado c){
        c.SetLado(666);
    }
}
