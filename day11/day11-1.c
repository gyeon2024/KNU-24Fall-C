#include <stdio.h>
#include <math.h> 

void solve_quadratic(double a, double b, double c) {
    double d = pow(b,2) - 4 * a * c; // 판별식

    if (d < 0) {
        printf("허근\n"); 
    }
    else if (d == 0) {
        double x = -b / (2 * a); 
        printf("중근: x = %.2f\n", x); 
    }
    else {
        double x1 = (-b + sqrt(d)) / (2 * a); //근의 공식
        double x2 = (-b - sqrt(d)) / (2 * a); 
        printf("두 실근: x1 = %.2f, x2 = %.2f\n", x1, x2); 
    }
}

int main() {
    double a, b, c;

    printf("a, b, c 입력: ");

    scanf_s("%lf %lf %lf", &a, &b, &c);

    solve_quadratic(a, b, c);

    return 0;
}
