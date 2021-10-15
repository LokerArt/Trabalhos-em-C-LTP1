void fazbarra(char f[]) {
    FILE *file = fopen(f, "w");
    char letra;

    if(file) {
        printf("||||||||||||||||||||||||||||");
        while(letra != '\n') {
            fputc(letra, file);
            scanf("%c", &letra);
        }
        fclose(file);
    } else
        printf("\nArquivo não existe não meu bom\n");
}