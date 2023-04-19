/*Kg to grams, tons, pounds*/
#include<stdio.h>
void g_t_p(float wgt, float *g, float *t, float *p);
int main()

{

    float weight;
    float grams, tons, pounds;
    scanf("%f", &weight);
    g_t_p(weight, &grams, &tons, &pounds);
    printf("Kg = %.2f\nGrams = %.2f\nTons = %.2f\nPounds = %.2f\n", weight, grams, tons, pounds);

    return 0;
}

void g_t_p(float wgt, float *g, float *t, float *p)
{
    *g = wgt * 1000;
    // 1kg = 0.001 float
    *t = wgt * 0.001;
    //1 kg = 2.205 pound/lb
    *p = wgt * 2.205;
}