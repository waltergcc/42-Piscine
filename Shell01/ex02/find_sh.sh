#!/bin/bash
find . -type f -name '*.sh' -execdir basename -s '.sh' {} +
# find .: procura no diretório atual e seus subdiretórios.
# -type f: busca apenas arquivos.
# -name '*.sh': Procurar arquivos que terminam com a extensão .sh.
# -execdir basename -s '.sh': Extrai o nome do arquivo sem o caminho e sem o sufixo .sh
# {} +: Executa o comando para vários arquivos de uma vez.