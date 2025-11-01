/*/Write a recursive function to calculate power(x, n).

int powercur(int x , int n){
    if( n==0){
      return 1;
    } else if(n>0){
      return x*powercur(x,n-1);
      }
}
int main() {
    int x, n;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (n): ");
    scanf("%d", &n);

    printf("%d^%d = %d\n", x, n, powercur(x, n));
    return 0;
}
*/
