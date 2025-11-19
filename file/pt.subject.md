## Instruções de IA

### Contexto

Este projeto foi concebido para o ajudar a descobrir os alicerces fundamentais da sua formação em TIC.

Para consolidar adequadamente os conhecimentos e competências essenciais, é essencial adotar uma abordagem ponderada na utilização de ferramentas e apoio de IA.

A verdadeira aprendizagem fundamental requer um esforço intelectual genuíno — através de desafios, repetição e trocas de aprendizagem entre pares.

Para uma visão geral mais completa da nossa posição sobre a IA — como ferramenta de aprendizagem, como parte do currículo de TIC e como expectativa no mercado de trabalho — consulte as perguntas frequentes dedicadas na intranet.

### Mensagem principal

☛ Construa bases sólidas sem atalhos.
☛ Desenvolva realmente competências tecnológicas e de poder.
☛ Experimente a aprendizagem entre pares, comece a aprender como aprender e resolver novos problemas.
☛ A jornada de aprendizagem é mais importante do que o resultado.
☛ Aprenda sobre os riscos associados à IA e desenvolva práticas de controlo eficazes e contramedidas para evitar armadilhas comuns.

### Regras para o aluno:

• Deve aplicar o raciocínio às tarefas que lhe forem atribuídas, especialmente antes de recorrer à A.
• Não se deve pedir respostas diretas à IA.
• Deve-se aprender sobre a abordagem global da 42 em relação à IA.

### Resultados da fase:

Nesta fase fundamental, obterá os seguintes resultados:

• Adquirir bases adequadas de tecnologia e codificação.
• Saber por que e como a IA pode ser perigosa durante esta fase.

### Comentários e exemplo:

• Sim, sabemos que a IA existe — e sim, ela pode resolver os seus projetos. Mas você está aqui para aprender, não para provar que a IA aprendeu. Não desperdice o seu tempo (ou o nosso) apenas para demonstrar que a IA pode resolver o problema apresentado.

• Aprender na 42 não é saber a resposta — é desenvolver a capacidade de encontrá-la. A IA dá-lhe a resposta diretamente, mas isso impede-o de construir o seu próprio raciocínio. E o raciocínio leva tempo, esforço e envolve falhas. O caminho para o sucesso não é suposto ser fácil.

• Tenha em mente que durante os exames, a IA não está disponível — sem internet, sem smartphones, etc. Você perceberá rapidamente se confiou demais na IA no seu processo de aprendizagem.

• A aprendizagem entre pares expõe-no a diferentes ideias e abordagens, melhorando as suas competências interpessoais e a sua capacidade de pensar de forma divergente. Isso é muito mais valioso do que apenas conversar com um bot. Portanto, não seja tímido — converse, faça perguntas e aprendam juntos!

• Sim, a IA fará parte do currículo — tanto como ferramenta de aprendizagem quanto como tema em si. Você terá até a chance de criar seu próprio software de IA. Para saber mais sobre a nossa abordagem crescendo, consulte a documentação disponível na intranet.

### ✓ Boa prática:

Estou com dificuldades num novo conceito. Pergunto a alguém próximo como abordou o assunto. Conversamos por 10 minutos e, de repente, tudo faz sentido. Eu entendo.

### ✗ Má prática:

Eu uso secretamente IA, copio algum código que parece correto. Durante a avaliação pelos colegas, não consigo explicar nada. Reprovo. Durante o exame — sem IA — fico novamente bloqueado. Reprovo.

## Exercício 00: Fácil de encontrar

Diretório de entrega: ex00/
Arquivos a entregar: Makefile, main.cpp, easyfind.{h, hpp}
e arquivo opcional: easyfind.tpp
Funções proibidas: Nenhuma

Um primeiro exercício fácil é a maneira certa de começar com o pé direito.

Escreva um modelo de função easyfind que aceite um tipo T. Ele recebe dois parâmetros: o primeiro é do tipo T e o segundo é um inteiro.

Supondo que T seja um contentor de inteiros, esta função deve encontrar a primeira ocorrência do segundo parâmetro no primeiro parâmetro.

Se nenhuma ocorrência for encontrada, pode lançar uma exceção ou retornar um valor de erro à sua escolha. Se precisar de inspiração, analise como os contentores padrão se comportam.

É claro, implemente e entregue os seus próprios testes para garantir que tudo funcione conforme o esperado.

### ATENCAO: Não é necessário lidar com contentores associativos.

## Exercício 01: Span

Diretório de entrega: ex01/
Arquivos a entregar: Makefile, main.cpp, Span.{h, hpp}, Span.cpp
Funções proibidas: Nenhuma

Desenvolva uma classe Span que possa armazenar no máximo N inteiros. N é uma variável int sem sinal e será o único parâmetro passado para o construtor.

Esta classe terá uma função membro chamada addNumber() para adicionar um único número ao Span. Ela será usada para preenchê-lo. Qualquer tentativa de adicionar um novo elemento se já houver N elementos armazenados deve lançar uma exceção.

Em seguida, implemente duas funções membro: shortestSpan() e longestSpan().

Elas irão, respetivamente, descobrir o intervalo mais curto ou o intervalo mais longo (ou distância, se preferir) entre todos os números armazenados e retorná-lo. Se não houver números armazenados, ou se houver apenas um, nenhum intervalo poderá ser encontrado. Portanto, lance uma exceção.

É claro que irá escrever os seus próprios testes, e eles serão muito mais completos do que os abaixo. Teste o seu Span com pelo menos 10.000 números. Mais seria ainda melhor.

Executando este código:

```
int main()
{
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  return 0;
}
```

Deve produzir

$> ./ex01
2
14
$>

Por último, mas não menos importante, seria ótimo preencher o seu Span usando uma série de iteradores. Fazer milhares de chamadas para addNumber() é muito chato. Implemente uma função membro para adicionar vários números ao seu Span em uma única chamada.

### DICA: Se não faz ideia, estude os Contentores. Algumas funções de membro aceitam um intervalo de iteradores para adicionar uma sequência de elementos ao contentor.

## Exercício 02: Abominação mutante

Diretório de entrega: ex02/
Arquivos a entregar: Makefile, main.cpp, MutantStack.{h, hpp}
e arquivo opcional: MutantStack.tpp
Funções proibidas: Nenhuma

Agora, é hora de passar para coisas mais sérias. Vamos desenvolver algo estranho.

O contentor std::stack é muito bom. Infelizmente, é um dos únicos contentores STL que NÃO é iterável. Isso é uma pena.

Mas por que aceitaríamos isso? Especialmente se podemos tomar a liberdade de destruir a pilha original para criar recursos que faltam.

Para reparar essa injustiça, você precisa tornar o contêiner std::stack iterável.

Escreva uma classe MutantStack. Ela será implementada em termos de um std::stack. Ela oferecerá todas as suas funções membro, além de um recurso adicional: iteradores.

É claro que você escreverá e entregará seus próprios testes para garantir que tudo funcione conforme o esperado.

Veja um exemplo de teste abaixo.

```
int main()
{
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
  std::cout << *it << std::endl;
  ++it;
  }
  std::stack<int> s(mstack);
  return 0;
}
```

Se o executar pela primeira vez com o seu MutantStack e, pela segunda vez, substituindo o MutantStack por, por exemplo, um std::list, os dois resultados devem ser os mesmos. Obviamente, ao testar outro contentor, atualize o código abaixo com as funções de membro correspondentes (push() pode tornar-se push_back()).
