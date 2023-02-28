# Diff

O comando `patch` aplica modificações em arquivos. Os arquivos **a** e **sw.diff** precisam estar na mesma pasta.

`a` nome do arquivo original.

`sw.diff` arquivo que contém as diferenças.

`-o` gera um output com o nome `b` com as diferenças entre o arquivo a e o diff.

```bash
patch a sw.diff -o b
```