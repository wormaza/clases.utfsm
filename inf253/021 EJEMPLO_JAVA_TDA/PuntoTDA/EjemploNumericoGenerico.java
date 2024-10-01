public class EjemploNumericoGenerico<T extends Number & Comparable<T>> {
    protected T x;

    public EjemploNumericoGenerico(T z) {
        this.x = z;
    }

    public boolean esMayor(T y) {
        return this.x.compareTo(y) > 0;
    }

    public void modificar(T y) {
        this.x = sumar(this.x, y);
    }

    public void printValor() {
        System.out.println("Valor: " + this.x);
    }

    @SuppressWarnings("unchecked")
    private T sumar(T a, T b) {
        if (a instanceof Double) {
            return (T) Double.valueOf(a.doubleValue() + b.doubleValue());
        } else if (a instanceof Integer) {
            return (T) Integer.valueOf(a.intValue() + b.intValue());
        } else if (a instanceof Float) {
            return (T) Float.valueOf(a.floatValue() + b.floatValue());
        } else if (a instanceof Long) {
            return (T) Long.valueOf(a.longValue() + b.longValue());
        }
        throw new UnsupportedOperationException("Tipo no soportado para la suma.");
    }
}
