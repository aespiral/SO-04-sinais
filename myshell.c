#define MAIOR_DIGITACAO 256 // Tamanho máximo da string de comando, em caracteres
#define SUCESSO 0  // mesma convenção de exit: 0 é sucesso e !=0 é falha
#define FALHA 1

int recebe_digitacao(char *entr)
{
	fflush(stdin);
	if(fgets(entr, MAIOR_DIGITACAO, stdin) == NULL)
	{
		if(feof(stdin))
		{
			printf("fim\n");
			exit(SUCESSO);
		}
		fflush(stdin);
		return FALHA;
	}
	fflush(stdin);

	if(entr[0] == '\n') return FALHA;
	return SUCESSO;
}
