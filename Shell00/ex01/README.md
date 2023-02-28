# TestShell00.tar

> Objetivo: Alterar permissões, data e tamanho dos ficheiros pelo shell

<br>

O comando `touch` permite criar ficheiros de forma rápida
```bash
touch testShell00
```

O comando `truncate` `-s` altera o tamanho para 40 bytes. `-s` é o argumento para alterar o size.
```bash
truncate -s 40 testShell00
```

`touch` `-t` permite alterar a data do arquivo. O padrão é AAAAMMDDHHMM - Ano:Mês:Dia:Hora:Minuto
```bash
touch -t 202006012342 testShell00
```

`chmod` altera as permissões dos arquivos. Para mais informações: https://www.infowester.com/linuxpermissoes.php
```bash
chmod 455 testShell00 #455 altera para -r--r-xr-x
```

`tar` `-cf` compacta o arquivo.
```bash
tar -cf testShell00.tar testShell00
```

O comando usado para descompactar é `tar` `-xvf`. Descompactar pelo Shell não altera as permissões e data de criação do arquivo.
```bash
tar -xvf testShell00.tar
```