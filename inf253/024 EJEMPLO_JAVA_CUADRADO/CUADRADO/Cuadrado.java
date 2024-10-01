//Nombre de la clase, "Cuadrado"
public class Cuadrado {
    //#region VARIABLES MIEMBRO O CAMPOS
    //El acceso esta "protegido"
    //puede ser publico (public) o privado (private) - lo mismo con los metodos
    protected int lado;
    protected String color;
    public static int veces = 0;
    //#endregion
    
    //#region CONSTRUCTORES
    private Cuadrado(){
        this.lado = 10;
        this.color = "Negro";
    }
    
    public Cuadrado(String color){
        this(); //llamo al otro constructor
        this.color = color;
    }

    public Cuadrado(String color, int lado){
        this(color);
        if(lado > 0)
            this.lado = lado;
    }
    //#endregion

    //#region METODOS
    public int Area()//Firma del metodo: Se llama, que necesita que retorna
    {
        return this.lado*this.lado;//Implementacion
    }

    public int Perimetro(){
        return 4*this.lado;
    }

    public String GetColor(){
        return this.color;
    }

    public int GetLado(){
        return this.lado;
    }

    public void SetColor(String color)
    {
        this.color = color;
    }

    public void SetLado(int lado)
    {
        this.lado = lado;
    }
    //#endregion
}
