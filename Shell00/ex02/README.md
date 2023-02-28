# exo2.tar

> Objetivo: Aprofundar nas permissões dos ficheiros e entender sobre os links.
<br>

Nesse exercício, além das permissões, data e tamanho, tem algumas particularidas que precisam ser seguidas.

<br>

Os ficheiros **test0** e **test2** são pastas. Precisam ser criadas com `mkdir`.
```bash
mkdir test0 test2
```
O ficheiro **test5** é linkado ao **test 3**. Para fazer esse link é usado o comando `ln`.
```bash
ln test3 test5 #Cria esse arquivo duplicado.
```

O ficheiro **test 6** é um link simbólico para a pasta **test0**. o parâmetro `-s` cria o link simbólico.
```bash
ln -s test0 test6
```