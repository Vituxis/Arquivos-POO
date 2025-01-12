#ifndef CIRCLE_HPP 
#define CIRCLE_HPP

class Circle{
    private:
        float radius;
        int x, y;

    public:
        Circle();
        Circle(float, float = 0, float = 0);
        ~Circle(){ };


        float area();
        float diameter();
        void set_radius(float); //setter
        void set_origin(int, int);
        float get_radius(); //getter
        void imprime();


};

#endif // CIRCLE_HPP