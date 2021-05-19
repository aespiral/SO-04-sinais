# SO-04-sinais

Objetivos:
* Conhecer o mecanismo de sinais em Unix (parte do sistema de processos)
* Iniciar a programação de um simples *shell*

# Atividade 01 - Sinais

## Passo 1.1 - Explorando sinais, especialmente ferramentas

Usuário envia sinais através do *shell*: control+C, control+Z, control+\
* control+Z & cia: `fg`, `bg`, `jobs`

Usuário envia sinais através do comando `kill`
* `man kill`

Processo manda sinal através da chamada de sistema `kill`
* `man 2 kill`

Conhecendo a tabela de 32 sinais
* `man signal`
* Atentar a: sighup, sigint, sigquit, sigfpe, sigkill, sigpipe, sigtstp, sigcont, sigchld

## Passo 1.2 - `mynohup.c`

Faça um pequeno experimento: crie um programa similar ao comando `nohup`. Use a função `signal`

# Atividade 02 - Primeiros passos no programa `myshell.c`

Requisitos:
* Apresenta o *prompt* `myshell>`
* Aceita apenas comandos curtos (isto é, com uma única string, ou, no máximo 2, por exemplo, `ls -l`, `pwd`, `ps aux`, mas não `ls -l /tmp`, `cat file1 file2`)
* Desabilita control+C, control+Z, control+\ que poderiam agir sobre o processo *myshell*
* Implementa mudança de diretórios (`cd`), inclusive o `cd tmp`, `cd`, `cd ~/so2`
* Repete essas funcionalidades em laço infinito
* Não gera processos zumbis
