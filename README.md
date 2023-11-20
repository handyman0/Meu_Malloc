# Implementação de `meu_malloc` usando `sbrk`

Este repositório oferece um exemplo simples de uma implementação da função `meu_malloc` em C, utilizando a chamada de sistema `sbrk` para alocação de memória.

## Descrição

O código disponibilizado neste repositório demonstra uma implementação básica da função `meu_malloc` que utiliza a chamada de sistema `sbrk` para alocar memória dinamicamente. O programa principal (`main`) faz uso dessa função para alocar memória para um inteiro, atribui um valor a esse espaço alocado e, em seguida, libera essa memória usando `free`.

## Como Usar

Para compilar e executar o código:

1. **Certifique-se de ter um compilador C instalado no seu sistema**. Você pode instalar o GCC executando os seguintes comandos no terminal:

   ```bash
   sudo apt update
   sudo apt install build-essential
   ```

2. **Clone este repositório**:

   ```bash
   git clone https://github.com/handyman0/Meu_Malloc.git
   ```

3. **Navegue até o diretório do projeto**:

   ```bash
   cd Meu_Malloc
   ```

4. **Compile o código**:

   ```bash
   gcc meu_malloc.c -o meumalloc
   ```

5. **Execute o programa resultante**:

   ```bash
   ./meumalloc
   ```

## Observações

- Esta implementação visa apenas a finalidade educacional, fornecendo insights sobre o funcionamento interno da alocação de memória em C.
- O uso direto de `sbrk` para alocação de memória não é recomendado em ambientes de produção devido à gestão manual e a questões de portabilidade.
- Este código pode ser útil para fins educacionais, mas em ambientes de produção, é preferível utilizar as funções de alocação de memória padrão em C (`malloc`, `calloc`, `realloc`) para garantir portabilidade e segurança.

## Contribuição

Contribuições são bem-vindas! Se você tiver melhorias, correções ou qualquer outra sugestão, sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [licença MIT](LICENSE).

