//半径acmで角度θの点をAとして、原点をOとする。
//OAベクトルをb倍にして、そのベクトルの終点のx座標とy座標を求めなさい

#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

 typedef struct s_vector
{
    double x;
    double y;
} t_vector;

t_vector scalar_multiplication(t_vector vec, double scale)//スカラー乗法
{
    vec.x *= scale;//２次元配列に数字をかけてる。
    vec.y *= scale;
    return (vec); //２次元配列を返す
}

t_vector  terminal_point_x_y(double angle, int len)
{

    t_vector hoge;

   hoge.x = len * cos(angle); 
   hoge.y = len * sin(angle); 
   return(hoge);
}

int main (void)
{
    t_vector axis;
    t_vector vec;

    axis = terminal_point_x_y(M_PI/3, 4);
    printf("x->[%f], y->[%f]\n", axis.x, axis.y);

    vec = scalar_multiplication(axis, 3);
    printf("x->[%f], y->[%f]\n", vec.x, vec.y);
    return (0);
}