#region DEFINICION DE LA CLASE (SOBRE ESCRITURA OPERADOR)
/// <summary>
/// Contiene dos valores enteros
/// </summary>
public class Par
{
    public int A { get; set; }
    public int B { get; set; }
    public Par(int a, int b){
        A = a;
        B = b;
    }
    public int Suma => A + B;

    /// <summary>
    /// Sobre escribe la operacion suma
    /// </summary>
    /// <param name="p1">Par de valores</param>
    /// <param name="p2">Par de valores</param>
    /// <returns>Suma de todos los valores</returns>
    public static int operator +(Par p1, Par p2)
    {
        return p1.Suma+p2.Suma;
    }
}

struct ParStruct{
    public int A { get; set; }
    public int B { get; set; }
    public ParStruct(int a, int b){
        A = a;
        B = b;
    }
    public readonly int Suma => A + B;

    public static int operator +(ParStruct p1, ParStruct p2)
    {
        return p1.Suma+p2.Suma;
    }
}


#endregion
class Program
{
    #region REFERENCIA AL OBJETO
    static void Por2(Par p){
        p.A *= 2;
        p.B *= 2;
    }
    #endregion
    
    #region MODOS Y REFERENCIA
    /// <summary>
    /// Paso por referencia
    /// </summary>
    static void SumaDobles(ref int resultado, ref int input1, ref int input2){
        input1*=2;
        input2*=2;
        resultado = input1 + input2;
    }

    /// <summary>
    /// Utilizando modo OUT
    /// </summary>
    static void SumaDoblesDos(out int resultado, int input1, int input2){
        resultado = input1*2+input2*2;
    }
    
    static void SumaUnoDos(out int a, out int b)
    {
        a=1;
        b=2;
    }
    #endregion
    
    #region FUNCION COMO PARAMETRO
    static int SumaSencilla(int a, int b) => a+b;

    static void ImprimidorUno(Func<int,int,int> f, int a, int b){
        Console.WriteLine("{0} y {1} = {2}", a,b,f(a,b));
    }
    #endregion

    #region  FUNCION GENERICA
    static T Mayor<T>(T a, T b) where T : IComparable<T>
    {
        return a.CompareTo(b) >= 0 ? a : b;
    }

    static void ImprimidorGenerico<T>(Func<T,T,T> f, T a, T b){
        Console.WriteLine("{0} y {1} = {2}", a,b,f(a,b));
    }
    #endregion
    
    /// <summary>
    /// Retorna funcion que multiplica enteros por un factor
    /// </summary>
    /// <param name="factor">Por el que multiplica</param>
    /// <returns></returns>
    static Func<int,int> Multiplicador(int factor){
        return entrada => factor*entrada;
    }

    static void Main(string[] args)
    {
        #region REFERENCIA OBJETO
        Par p1 = new Par(1,1);
        Par p2 = p1;
        Console.WriteLine("SUMA P1: {0}", p1.Suma);
        Console.WriteLine("SUMA P2: {0}", p2.Suma);
        p1.A = p1.B = 10;
        Console.WriteLine("SUMA P1: {0}", p1.Suma);
        Console.WriteLine("SUMA P2: {0}", p2.Suma);
        Por2(p1);
        Console.WriteLine("SUMA P1: {0}", p1.Suma);
        Console.WriteLine("SUMA P2: {0}", p2.Suma);
        Console.WriteLine("SUMA P1+P2: {0}", p2 + p1);
        #endregion
        
        /*
        ParStruct s1 = new ParStruct(1,2);
        ParStruct s2 = s1;
        Console.WriteLine("SUMA S1: {0}", s1.Suma);
        Console.WriteLine("SUMA S2: {0}", s2.Suma);
        s1.A = s1.B = 10;
        Console.WriteLine("SUMA S1: {0}", s1.Suma);
        Console.WriteLine("SUMA S2: {0}", s2.Suma);
        */
        
        #region REFERENCIA VARIABLES Y MODO OUT
        int a = 1;
        int b = 2;
        int c = 0;
        Console.WriteLine("a: {0}, b: {1}, c: {2}", a,b,c);
        SumaDobles(ref c, ref a,ref b);
        Console.WriteLine("a: {0}, b: {1}, c: {2}", a,b,c);
        a=1;b=2;c=0;
        Console.WriteLine("a: {0}, b: {1}, c: {2}", a,b,c);
        SumaDoblesDos(out c,a,b);
        Console.WriteLine("a: {0}, b: {1}, c: {2}", a,b,c);
        #endregion

        #region FUNCIONES COMO ARGUMENTO Y GENERICAS
        ImprimidorUno(SumaSencilla,a,b);
        ImprimidorGenerico(SumaSencilla,a*2,b*2);
        ImprimidorGenerico(Mayor,a,b);
        #endregion

        #region RETORNANDO FUNCIONES
        Func<int,int> MultiplicadorPor2 = Multiplicador(2);
        Func<int,int> MultiplicadorPor3 = Multiplicador(3);

        b=2;
        Console.WriteLine("{0} x 2 = {1}", b, MultiplicadorPor2(b));
        Console.WriteLine("{0} x 3 = {1}", b, MultiplicadorPor3(b));
        #endregion

        a=0;b=0;
        Console.WriteLine("a: {0}, b: {1}", a,b);
        SumaUnoDos(out a, out b);
        Console.WriteLine("a: {0}, b: {1}", a,b);
        a=0;
        SumaUnoDos(out a, out a);
        Console.WriteLine("a: {0}, a: {1}", a,b);
    }
}
