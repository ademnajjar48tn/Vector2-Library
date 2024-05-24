#include <iostream>
#include <cmath>

class Vector2 {
    public:
        int x;
        int y;
        //Default Constructer
        Vector2() {

        }
        //Copy Constructer
        Vector2(const Vector2& vector2) {
            x = vector2.x;
            y = vector2.y;
        }
        //Parameterized Constructor
        Vector2 (int x, int y) {
            this->x = x;
            this->y = y;
        }
        //For distance
        int magnitude() {
            return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
        }
        //For direction:
        static Vector2 up() {
            return Vector2(0, 1);
        }
        static Vector2 down() {
            return Vector2(0, -1);
        }
        static Vector2 right() {
            return Vector2(1, 0);
        }
        static Vector2 left() {
            return Vector2(-1, 0);
        }
        //Just like the copy Constructer but* with operator function(method, ..)
        void operator=(Vector2 vector2) {
            x = vector2.x;
            y = vector2.y;
        }
        //Comparing
        bool operator==(Vector2 vector2) {
            return (x == vector2.x && y == vector2.y);
        }
        bool operator>(Vector2 vector2) {
            return(magnitude() > vector2.magnitude());
        }
        bool operator>=(Vector2 vector2) {
            return(magnitude() >= vector2.magnitude());
        }
        bool operator<(Vector2 vector2) {
            return(magnitude() < vector2.magnitude());
        }
        bool operator<=(Vector2 vector2) {
            return(magnitude() <= vector2.magnitude());
        }
        //Increment operator
        void operator++() {
            x++;
            y++;
        }
        //I don't have a name please make a pull request to give it a good name
        void operator+=(Vector2 vector2) {
            x += vector2.x;
            y += vector2.y;
        }
        //Addition
        Vector2 operator+(Vector2 vector2){
            return Vector2(x+vector2.x, y+vector2.y);
        }
        //Decrement operator
        void operator--() {
            x--;
            y--;
        }
        //I don't have a name please make a pull request to give it a good name
        void operator-=(Vector2 vector2) {
            x -= vector2.x;
            y -= vector2.y;
        }
        //Subtraction
        Vector2 operator-(Vector2 vector2) {
            return Vector2(x - vector2.x, y - vector2.y);
        }
        //I don't have a name please make a pull request to give it a good name
        void operator*=(int x) {
            this->x *= x;
            this->y *= y;
        }
        //I don't have a name please make a pull request to give it a good name
        void operator*=(Vector2 vector2) {
            x *= vector2.x;
            y *= vector2.y;
        }
        //Multiplication
        Vector2 operator*(int x) {
            return Vector2(this->x * x, this->y * x);
        }
        Vector2 operator*(Vector2 vector2) {
            return Vector2(x * vector2.x, y * vector2.y);
        }
        //I don't have a name please make a pull request to give it a good name
        void operator/=(int x) {
            this->x /= x;
            this->y /= x;
        }
        //I don't have a name please make a pull request to give it a good name
        void operator/=(Vector2 vector2) {
            x /= vector2.x;
            y /= vector2.y;
        }
        //Division
        Vector2 operator/(int x) {
            return Vector2(this->x / x, this->y / x);
        }
        Vector2 operator/(Vector2 vector2) {
            return Vector2(x / vector2.x, y / vector2.y);
        }
        //Radical notaion first watch this video https://youtu.be/pY1VHMDr8cA and comback then can you give mean a better name than sqrt for radical notation in the following method?
        Vector2 sqrt(int index = 2) {
            return Vector2(std::pow(x, 1/index), std::pow(y, 1/index));
        }
        //Power : By default it's to the power of 2 (two)
        Vector2 pow(int x = 2) {
            return Vector2(std::pow(this->x, x), std::pow(this->y, x));
        }
};

//Radical notaion first watch this video https://youtu.be/pY1VHMDr8cA and comback then can you give mean a better name than sqrt for radical notation in the following method?
Vector2 sqrt(Vector2 vector2 ,int index = 2) {
    return Vector2(pow(vector2.x, 1/index), pow(vector2.y, 1/index));
}
//Power : By default it's to the power of 2
Vector2 pow(Vector2 vector2, int x) {
    return Vector2(pow(vector2.x, x), pow(vector2.x, x));
}
/*overloading for output stream example:
* std::cout << "vec2 = " << vec2;
*/
std::ostream& operator<<(std::ostream& output, const Vector2 vector2) {
    return output << '(' << vector2.x << ", " << vector2.y << ')';
}