#!/bin/bash
id -nG $FT_USER | tr -s ' ' ',' | tr -d '\n'
# id -nG $FT_USER: Imprime na saída o nome dos grupos referentes ao usuário.
# tr -s ' ' ',': substitui todos os espaços por vírgulas.
# tr -d '\n': remove a quebra de linha.