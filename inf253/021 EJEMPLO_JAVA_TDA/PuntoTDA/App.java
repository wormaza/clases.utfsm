import java.util.ArrayList;

public class App {
    public static void main(String[] args) throws Exception {
        Recta L1= new Recta(1, 2, 3, 4);
        L1.name = "L1";
        System.out.println(L1.name + ": m=" + L1.m() + ", b="+L1.b());
        
        //#region EJEMPLO 2
        ArrayList <Integer> ejemplo = new ArrayList <Integer> ();
        ejemplo.add(0,1);

        //Falla:
        //ArrayList <int> ejemplo2 = new ArrayList <int> ();
        //Explicacion: https://docs.oracle.com/javase/8/docs/api/java/lang/Integer.html
        Integer x = 0;
        int y = 0;
        if (x == y)
            System.out.println("Son iguales, x = "+x.intValue());
        
        //Simil C++
        //EjemploNumericoGenerico<Integer> x1 = new EjemploNumericoGenerico<Integer>(0.5);
        //EjemploNumericoGenerico<int> x1 = new EjemploNumericoGenerico<int>(0);
        EjemploNumericoGenerico<Integer> x1 = new EjemploNumericoGenerico<Integer>(0);
        x1.modificar(10);
        x1.printValor();
        //#endregion
    }

    public float m(int x1, int x2, int y1, int y2){
        return (y1-y2)/(x1-x2);
    }
}
