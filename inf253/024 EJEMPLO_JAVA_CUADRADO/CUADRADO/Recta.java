public class Recta {
    private Punto p1;
    private Punto p2;
    private String color;

    private Recta(){
        p1 = new Punto(0, 0);
        p2 = new Punto(0, 0);
    }

    public Recta(int x1, int y1, int x2, int y2){
        this();
        p1.x = x1;
        p1.y = y1;
        p2.x = x2;
        p2.y = y2;
        this.color = "Negro";
    }

    public void SetColor(String c){
        this.color = c;
    }

    public String GetColor(){
        return this.color;
    }

    public String GetColorP1(){
        return p1.GetColor();
    }

    public String GetColorP2(){
        return p2.GetColor();
    }

    private class Punto {
        private int x;
        private int y;
        Punto(int x, int y){
            this.x = x;
            this.y = y;
        } 
        public void SetX(int x){
            this.x = x;
        }       
        public void SetY(int y){
            this.y = y;
        }
        public int GetX(){
            return this.x;
        }
        public int GetY(){
            return this.y;
        }
        public String GetColor(){
            return color; //notar que pasa con this.color
        }
    }
}
