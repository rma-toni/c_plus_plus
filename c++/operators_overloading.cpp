class Punto {
    public:
        int x,y;
        Punto(int x_val, int y_val) : x(x_val), y(y_val) {}

        Punto operator+(const Punto& otro){
            return Punto(x + otro.x, y + otro.y);
        }
};

Punto p1(1,2);
Punto p2(3,4);
Punto p3 = p1 + p2;