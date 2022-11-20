#include<iostream>
#include <vector>

class Vector2
{
        public: 
        float x = 0, y=0; 

        Vector2() = delete; 
        Vector2(float a , float b) : x(a), y(b) {}; 

        Vector2 operator +(const Vector2& other) const
        {
            Vector2 c(x + other.x , y + other.y); 
            return c; 
        }

        float getX() const
        {
            //std::cout << this->x;
            return this->x;
        }
};

//ostream needs to be outside. 
std::ostream& operator <<(std::ostream& stream, const Vector2& other)
{
    stream  << other.getX() << " , " << other.y; 
    return stream;
}



int main()
{
    Vector2 A(2.0 , 3.0);
    Vector2 B(7.0, 9.0); 

    Vector2 res = A + B ; 
    auto b = res.getX();
    std::cout << res;

    return 0; 
}