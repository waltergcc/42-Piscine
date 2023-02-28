#!/bin/bash
ifconfig | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
# ifconfig: Exibe as configurações de rede do sistema.
# grep: Pesquisa por padrões de texto.
# -o -E: Procura no texto a correspondência de um padrão.
# ([[:xdigit:]]{1,2}:): Procura dois dígitos hexadecimais seguida por dois-pontos.
# {5}: A sequência anterior deve ocorrer exatamente cinco vezes.
# [[:xdigit:]]{1,2}: Procura a sequência de dígitos hexadecimais agora sem dois os pontos no final.
