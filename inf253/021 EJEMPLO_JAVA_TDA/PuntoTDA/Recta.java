public class Recta {
    protected int x1, y1, x2, y2;
    public String name;
    // Constructor
    public Recta(int x1, int y1, int x2, int y2) {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
    }

    protected void finalize(){
        System.out.println("Se ha eliminado la recta " + this.name);
    }

    public float m() {
        if (x1 == x2) {
            return 0;//return Float.NaN;  
        }
        return (float)(y2 - y1) / (x2 - x1);
    }

    public float b() {
        float m = this.m();
        if (Float.isNaN(m)) {
            return Float.NaN;  
        }
        return y1 - (m * x1);
    }

    public void modificarPunto1(int x, int y) {
        if (!(x == x2 && y == y2)) {
            this.x1 = x;
            this.y1 = y;
        }
    }

    public void modificarPunto2(int x, int y) {
        if (!(x == x1 && y == y1)) {
            this.x2 = x;
            this.y2 = y;
        }
    }
}
