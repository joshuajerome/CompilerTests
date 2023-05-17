int x, z;
char y;
char *s, *t;
int *p, *q;

int main(void)
{
		x || y && z;
    x && y || x;

    x == y != z;
    x != y == z;

    x < y > z;
    x > y < z;
    x <= y >= z;
    x >= y <= z;

    x + y - z;
    x - y + z;

    x * y / z;
    x / y % z;
    x % y * z;

    p + x + y;
    x + p + y;

    s + x + y;
    x + s + y;

    p - q + x;
    x + p - q;

    s - p + x;			/* invalid operands to binary - */
    s - t - y;

}
