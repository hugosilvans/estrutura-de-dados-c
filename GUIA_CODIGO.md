# Guia de leitura do código

Este guia descreve a organização para estudar e explicar o repositório. Os comentários do código destacam regras, contratos, validações e responsabilidade pela memória ou pelos dados.

## Por onde começar

| Caminho | Responsabilidade |
| --- | --- |
| [1bimestre/Pesquisa_sequencial/ex2/equipe.h](1bimestre/Pesquisa_sequencial/ex2/equipe.h) | Contrato e estrutura Time. |
| [1bimestre/Pesquisa_sequencial/ex2/equipe.c](1bimestre/Pesquisa_sequencial/ex2/equipe.c) | Leitura limitada do CSV, ordenação e consultas. |
| [2bimestre/Pilhas/pilha.c](2bimestre/Pilhas/pilha.c) | Criação da pilha e encadeamento pelo topo. |

## Como estudar uma alteração

1. Identifique a entrada: argumento, formulário ou requisição HTTP.
2. Localize a validação e a função que transforma os dados.
3. Observe a saída e o comportamento quando algo falha.
4. Execute um exemplo pequeno antes de mudar a regra.
5. Consulte o diff do Git para distinguir formatação de mudanças de comportamento.

## Convenções

- `.editorconfig` define codificação, indentação e final de linha.
- Comentários explicam motivos e restrições; não repetem cada comando.
- Arquivos gerados, dependências e credenciais locais ficam fora do versionamento.
- Um `main` pertence ao seu exercício; projetos de aula independentes não formam um único executável.
- Créditos, autoria anterior e licenças são preservados.
- `.clang-format` registra a formatação aplicada ao código C/C++ e Java.

## Inventário de fontes próprias e didáticas

26 arquivo(s) `.c`, 5 arquivo(s) `.h`, 1 arquivo(s) `.html`.

## Limite desta organização

A formatação e os comentários não comprovam que todos os exercícios estejam completos. Os testes adicionados cobrem os fluxos descritos no README; validar sintaxe não equivale a testar todos os resultados. Veja também as instruções e limitações específicas do projeto.
