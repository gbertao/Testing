int add (int a, int b) {
    return a+b;
}

int sub(int a, int b) {
    return a-b;
}

int mult(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    if (b == 0)
        return 0;
    return a/b;
}

int power2(int n) {
    return 1 << n;
}

int exp(int a, int n) {
    int tmp = a;
    for(int i = 1; i < n; i++) {
        a = a * tmp;
    }
    return tmp;
}

int reminder(int a, int b) {
    if (b == 0)
        return 0;
    return a % b;
}

int xor(int a, int b) {
    return a ^ b;
}

int and(int a, int b) {
    return a & b;
}

int main (void) {
    return 0;
}
