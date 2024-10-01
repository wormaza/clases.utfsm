public class Ejemplo {
    private static int intentos[] = new int[5];
    private static int veces = 0;
    private int base = 0;
    public Ejemplo(){
        base = base+veces;
        veces++;
    }
    static{
        for(int i = 0; i<5;i++){
            intentos[i] = i;
        }
    }
    public static void PrintIntentos(){
        for(int i = 0; i<5;i++){
            System.out.println("("+i+"): " + intentos[i]);
        }
    }

    public void Cambio(int a, int b){
        intentos[a] = this.base*b;
    }
    /*/
    public static void CambioDos(int a, int b){
        intentos[a] = this.base*b;//<-- NO puede acceder a miembros de la instancia
    }
    */
}
