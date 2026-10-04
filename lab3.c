#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double r1, r2;
    double r_pos, r_par;

    printf("¬ведите сопротивление 1-го резистора: ");
    scanf("%lf", &r1);
    printf("¬ведите сопротивление 2-го резистора: ");
    scanf("%lf", &r2);

    r_pos = r1 + r2;
    r_par = (r1 * r2) / (r1 + r2);

    printf("—опротивление при последовательном соединении: %.2f ќм\n", r_pos);
    printf("—опротивление при параллельном соединении: %.2f ќм\n", r_par);

    return 0;
}