# id_rsa_pub

> Objetivo: Entender sobre as chaves do computador.

<br>

O comando `ssh-keygen` gera a chave pública.
```bash
ssh-keygen
```

O comando `cd` filtra o diretório que tem esses arquivos
```bash
cd ~/.ssh
ls # exibe os arquivos
```

`cat` exibe o conteúdo da chave. Basta copiar o conteúdo da chave e colar no ficheiro pedido no exercício.
```bash
cat id_rsa.pub
```