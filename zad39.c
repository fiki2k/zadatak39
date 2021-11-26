// Program treba izracunat kombinaciju od 2 broja koja korisnik unese.

#include <stdio.h>
 
int fact(int num);
 
int main()
{
    int n, r, ncr_var;
 
    printf("Unesi vrijednost od n:");
    scanf("%d", &n);
    printf("\nUnesi vrijednost od r:");
    scanf("%d", &r);
    /*  C(n,r), formula je:
     * C(n,r) = n! / ( r!(n - r)! ). For 0 <= r <= n.
     */
    ncr_var = fact(n) / (fact(r) * fact(n - r));
    printf("\nVrijednost od C(%d,%d) je: %d",n,r,ncr_var);
    return 0;
}


/* Ova funkcija ce izracunat faktorijel broja.
 */
int fact(int broj)
{
    int k = 1, i;
    // factorial of 0 is 1
    if (broj == 0)
    {
        return(k);
    }
    else
    {
        for (i = 1; i <= broj; i++)
    {
            k = k * i;
	}
    }
    return(k);
}
