long int memo[81];
long int fibonacci(int n) {
    // Verificando se o valor já foi calculado e armazenado na memória
    if (memo[n] != 0)
        return memo[n];
    
    // Base da recursão
    if (n <= 2)
        return 1;
    
    // Calculando e armazenando o resultado na memória
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    
    return memo[n];
}
