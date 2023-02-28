#!/bin/bash
ls -l | sed -n 'p;n'
# ls -l: lista os arquivos e diretórios com mais detalhes.
# sed: Edita o fluxo de texto para output.
# -n: A saída do sed é feita de acordo com o padrão passado
# p: Imprime a linha atual da entrada.
# n: Pula a próxima linha.