#!/bin/sh
# Para testar esse bash é necessário descomentar as varíaveis abaixo. Descomentar apenas para testar. Para subir ao sistema precisa estar comentado ou deletar essas linhas.
#FT_LINE1=7 
#FT_LINE2=15 

cat /etc/passwd | \ #Exibe o conteúdo sobre os logins do sistema
	sed '/^#/d' | \ #Remove as linhas com comentários
	awk 'NR%2==0' | \ #Seleciona apenas as linhas ímpares
	cut -d: -f1 | \ #Extrai a primeira coluna antes do ":". Nesse caso o nome do usuário.
	rev | \ #Inverte a ordem dos caracteres
	sort -r | \ #Ordena em ordem inversa a alfabética
	sed -n "${FT_LINE1},${FT_LINE2}p" | \ #Imprime as linhas que estão entre as variáveis passadas
	tr '\n' ' '  | \ #Substitui a nova linha por espaço
	sed 's+ +, +g' | \ #Substitui os espaços por vírgula seguida de espaço.
	sed 's+, $+.+g' | \ #Substitui a última vírgula por ponto.
	tr -d '\n' #Remove a quebra de linha no final