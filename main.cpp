#include "iostream"
#include <string>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cenoura;
    string JOGADOR;
    int escolha;

    // teste
    cout << "Para ter cenoura, digite 1\nPara não ter cenoura, digite 0 \n";
    cin >> cenoura;
    cout << "\n";
    cout << "Nome do jogador: \n";
    cin >> JOGADOR;
    cout << "\n";
    cout << "----------------------------------------------------\n";
    // teste

    cout << "*Vocês correm para a floresta, entrando afundo entre as árvores, fugindo dos soldados, depois de muito correrem, param um pouco para descansarem, não ouvem mais passos e vozes dos Tooney Lunes, vocês pararam na beira de um rio, o que você faz?\n";
    cout << "# 1- Atravessar o rio e continuar\n";
    cout << "# 2- Seguir o rio\n";
    cin >> escolha;
    cout << "\n";
    cout << "*Vocês continuam andando por um pouco mais de tempo, mas não sabem onde estão, precisam chegar até um local para se guiarem e irem até a base onde esá o Ovo Dourado, Pancho aponta para uma montanha e diz que vocês deveriam ir até um lugar mais alto para olhar a região.\n";
    cout << "*Vocês então decidem ir até a montanha, mas começam a ouvir os Tooney Lunes seguindo-os novamente e começam a correr, depois de uma hora correndo vocês chegam ao pé da montanha e decidem subi-la.\n";
    cout << "*Chegando em uma parte mais plana em cima da montanha, vocês se deparam com uma caverna e o horizonte, que mostrava uma bela vista, uma floresta cheia de árvores, o rio que vocês encontraram e uma cachoeira em outra montanha ao longe. Olhando mais a norte, vocês vêem o que parece ser o prédio em que estavam presos, ele está piscando em vermelho, ao olhar para sul, vocês encontram, a base do Ovo Dourado, depois de muitas mortes e agentes escondidos, a resistência finalmente conseguiu achar a localização do Ovo Dourado e ele estava a alguns quilômetros de você.\n";
    cout << "\"Ei, " << JOGADOR << ", isso não é cheiro de lenha queimada?\" - Pancho\n";
    cout << "*Pancho, com seu fucinho aguçado, sentiu o cheiro de lenha vindo de dentro da caverna, o que você faz?\n";
    cout << "# 1- Entrar na caverna\n";
    cout << "# 2- Perguntar se tem alguém na caverna\n";
    cin >> escolha;
    cout << "\n";

    // FINAL OK (Vai até o final)
    // Entrar na caverna
    if (escolha == 1)
    {
        cout << "*Pancho toma a dianteira e vocês se preparam para entrar na caverna, conforme vocês vão entrando percebem outras duas fogueiras apagadas, a caverna não parece ser muito grande, vocês conseguem ver uma fogueira acesa no final dela, vêem também uma barraca e uma mochila, mas ninguém por perto, o que você faz?\n";
        cout << "# 1 -> Vasculhar as coisas\n";
        cout << "# 2 -> Sair da caverna\n";
        cin >> escolha;
        cout << "\n";

        // Vasculhar as coisas
        if (escolha == 1)
        {
            cout << "*Vocês vão até os pertences no fundo da caverna e percebem que realmente não tem ninguém lá, olham a barraca e encontram um arco e várias flechas, dentro da mochila tem um diário, algumas roupas e uma cenoura que você pega, o que você faz?\n";
            cout << "# 1 -> Ler o diário\n";
            cout << "# 2 -> Sair da caverna\n";
            cin >> escolha;
            cout << "\n";

            // Ler o diário
            if (escolha == 1)
            {
                cout << "*Você decide pegar o diário e ler ele, a capa do diário é de couro e tem apenas duas letras, W.P. você abre o diário na página marcada e lê: \"Diário da missão, estou mais perto do objetivo, eles ainda não me encontraram, consegui uma caverna em um lugar bom para me esconder, hoje irei dar uma olhada no perímetro e checar se os Tooney Lunes estão ativos para que eu possa continuar\", dando uma folheada pelo diário, você percebe que esse indivíduo que está a procura de alguma coisa que envolve os Tooney Lunes, será o Ovo Dourado? Ou ele tem outro objetivo em mente? Qual será o seu objetivo? ~~~~~~~~~\n";
                cout << "*Seus pensamentos são interrompidos quando Pancho te puxa pela cintura e vocês caem no chão atrás de uma pedra, você vê uma flecha fincada na parede de pedra, onde você estava\n";
                cout << "\"" + JOGADOR + ", tem um coelho segurando um arco na entrada da caverna, o que a gente faz?\" - Pancho\n";
                cout << "# 1- Lutar contra o coelho\n";
                cout << "# 2- Conversar com o coelho\n";
                cin >> escolha;
                cout << "\n";
                cout << "*Pancho levanta com seu escudo, e antes de fazer qualquer coisa, percebe que o coelho não está mais lá, vocês se encaram e ouvem um barulho acima, Pancho levanta o escudo em cima da cabeça e uma flecha acerta seu escudo, ele cai com a força da flechada e você agarra seu cajado, a fogueira então derrepente é apagada e tudo fica escuro, Pancho te protege com o escudo e vocês começam a correr para fora da caverna, mais duas flechas acertam o escudo de Pancho até vocês saírem da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        }

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER";
                    return 0;
                }
            }

            // Sair da caverna
            else if (escolha == 2)
            {
                cout << "*Você fala para sairem dali e Pancho concorda, quando estão saindo, um coelho aparece na entrada da caverna, ele esta segurando um arco e esta com uma aljava com flechas presa na cintura, ele encara vocês e rapidamente se prepara para atirar uma flecha, Pancho prontamente arma o escudo e começa a correr em direção a ele, você corre junto de Pancho, protegido pelo escudo, o coelho arqueiro acerta duas flechas no escudo de Pancho enquanto estão correndo e quando vão passar por cima dele, ele corre até a parede, pega impulso e pula para trás de vocês, no meio do ar, ele prepara mais uma flecha, Pancho te agarra pelo ombro e te joga para a saída, ele segura o escudo e a flecha acerta o escudo novamente, Pancho cai com a força da flechada e você puxa ele para fora da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        }

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER\n";
                    return 0;
                }
            }

            // Game Over
            else
            {
                cout << "Escolha invalida - GAME OVER\n";
                return 0;
            }
        }

        // Sair da caverna
        else if (escolha == 2)
        {
            cout << "*Você fala para sairem dali e Pancho concorda, quando estão saindo, um coelho aparece na entrada da caverna, ele esta segurando um arco e esta com uma aljava com flechas presa na cintura, ele encara vocês e rapidamente se prepara para atirar uma flecha, Pancho prontamente arma o escudo e começa a correr em direção a ele, você corre junto de Pancho, protegido pelo escudo, o coelho arqueiro acerta duas flechas no escudo de Pancho enquanto estão correndo e quando vão passar por cima dele, ele corre até a parede, pega impulso e pula para trás de vocês, no meio do ar, ele prepara mais uma flecha, Pancho te agarra pelo ombro e te joga para a saída, ele segura o escudo e a flecha acerta o escudo novamente, Pancho cai com a força da flechada e você puxa ele para fora da caverna.\n";
            cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
            cout << "# 1- Ir para cima\n";
            cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
            cin >> escolha;
            cout << "\n";

            // Ir pra cima
            if (escolha == 1)
            {
                cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                cout << "# 1- Arremessar o cajado\n";
                cout << "# 2- Atacar com o cajado\n";
                cin >> escolha;
                cout << "\n";

                // Arremessar o cajado
                if (escolha == 1)
                {
                    cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                    cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                    cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                    cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                    cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                    cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                    cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                    cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                    cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                    cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                }

                // Atacar com o cajado - GAME OVER
                else if (escolha == 2)
                {
                    cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                }

                // GAME OVER
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }

            // Falar a frase
            else if (escolha == 2)
            {
                cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                cout << "# 1- Ir para cima \n";
                cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                    cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                    cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                    cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                    cin >> escolha;
                    cout << "\n";
                    cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                    cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                    cout << "*O coelho arqueiro olha para você e diz:\n";
                    cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                    cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                    cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                    cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                    cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                }

                // GAME OVER
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }

            // GAME OVER
            else
            {
                cout << "Escolha inválida - GAME OVER\n";
                return 0;
            }
        }

        // Game Over
        else
        {
            cout << "Escolha invalida - GAME OVER\n";
            return 0;
        }
    }

    // FINAL OK (Vai até o final)
    // Perguntar
    else if (escolha == 2)
    {
        cout << "*Você chega até a entrada da caverna e grita perguntando se tem alguém lá dentro, apenas seu eco pode ser ouvido, sem resposta...\n";
        cout << "*Pancho chama sua atenção e aponta para um coelho segurando um arco e vestindo uma aljava com flechas vindo em direção a caverna, o coelho encara vocês, segura uma das flechas, ainda na aljava, e fica parado, o que você faz?\n";
        cout << "# 1- Lutar contra o coelho\n";
        cout << "# 2- \"Quem é você?\"\n";
        cin >> escolha;
        cout << "\n";

        // Lutar contra o coelho
        if (escolha == 1)
        {
            cout << "*Você segura o cajado e avisa Pancho para lhe dar cobertuda, Pancho ergue seu escudo e começa a ir pra cima do arqueiro, o arqueiro da uma flechada no escudo de Pancho e começa a correr num trajeto de meia lua para ir até a entrada da caverna, você tenta fechar ele pelo outro lado, da um golpe com o cajado em direção a ele\n";
            cout << "# 1- Ataque por cima\n";
            cout << "# 2- Ataque pela lateral\n";
            cin >> escolha;
            cout << "\n";
            cout << "O coelho desvia e pega impulso na parede, ele salta por cima de você e mira uma flecha em sua cabeça, Pancho te empurra e protege você com o escudo, o arqueiro volta a correr em direção a entrada da caverna e vocês correm em direção a uma pedra, o arqueiro da mais uma flechada no escudo e vocês conseguem se esconder, o coelho entra para dentro da caverna.\n";
            cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
            cout << "# 1- Ir para cima\n";
            cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
            cin >> escolha;
            cout << "\n";

            // Ir pra cima
            if (escolha == 1)
            {
                cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                cout << "# 1- Arremessar o cajado\n";
                cout << "# 2- Atacar com o cajado\n";
                cin >> escolha;
                cout << "\n";

                // Arremessar o cajado
                if (escolha == 1)
                {
                    cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                    cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                    cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                    cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                    cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                    cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                    cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                    cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                    cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                    cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                }

                // Atacar com o cajado - GAME OVER
                else if (escolha == 2)
                {
                    cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                }

                // GAME OVER
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }

            // Falar a frase
            else if (escolha == 2)
            {
                cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                cout << "# 1- Ir para cima \n";
                cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                    cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                    cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                    cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                    cin >> escolha;
                    cout << "\n";
                    cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                    cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                    cout << "*O coelho arqueiro olha para você e diz:\n";
                    cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                    cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                    cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                    cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                    cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                }

                // GAME OVER
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }

            // GAME OVER
            else
            {
                cout << "Escolha inválida - GAME OVER";
                return 0;
            }
        }

        // Falar frase
        else if (escolha == 2)
        {
            cout << "\"Quem é você?\"\n";
            cout << "\"Eu é quem pergunto,  o que estão fazendo perto da minha caverna? Vocês mexeram nas minhas coisas?\"\n";
            cout << "*O coelho começa a tirar a flecha da aljava, desconfiado, Pancho se prepara com seu escudo caso aconteça algo\n";
            cout << "# 1- Lutar contra o coelho\n";
            cout << "# 2- \"Nós estamos fugindo dos Tooney Lunes\"\n";
            cin >> escolha;
            cout << "\n";

            // Lutar contra o coelho
            if (escolha == 1)
            {
                cout << "*Você segura o cajado e avisa Pancho para lhe dar cobertuda, Pancho ergue seu escudo e começa a ir pra cima do arqueiro, o arqueiro da uma flechada no escudo de Pancho e começa a correr num trajeto de meia lua para ir até a entrada da caverna, você tenta fechar ele pelo outro lado, da um golpe com o cajado em direção a ele\n";
                cout << "# 1- Ataque por cima\n";
                cout << "# 2- Ataque pela lateral\n";
                cout << "O coelho desvia e pega impulso na parede, ele salta por cima de você e mira uma flecha em sua cabeça, Pancho te empurra e protege você com o escudo, o arqueiro volta a correr em direção a entrada da caverna e vocês correm em direção a uma pedra, o arqueiro da mais uma flechada no escudo e vocês conseguem se esconder, o coelho entra para dentro da caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        }

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER";
                    return 0;
                }
            }

            // Falar frase
            else if (escolha == 2)
            {
                cout << "\"Nós estamos fugindo dos Tooney Lunes\"\n";
                cout << "\"Os Tooney Lunes estão bem ativos por essa área hoje, mas...\"\n";
                cout << "*O coelho põe a flecha no arco e a puxa, então pergunta:\n";
                cout << "\"Como vou saber que vocês não fazem parte do Tooney Lunes?\"\n";
                cout << "*Ele solta a flecha, Pancho já preparado ergue seu escudo e a flecha acerta o escudo, Pancho cai com a força da flechada, o arqueiro começa a correr fazendo um trajeto de meia lua para chegar a entrada da caverna, você levanta pancho e começam a correr até uma pedra, Pancho leva mais duas flechadas no escudo, o coelho entra na caverna.\n";
                cout << "*Vocês se protegem atrás de uma pedra e Pancho retira as flechas do escudo, você olha por cima da pedra e percebe o coelho saindo da caverna. Você avisa para Pancho e ele fica pronto para atacar o arqueiro, o que você faz?\n";
                cout << "# 1- Ir para cima\n";
                cout << "# 2- \"Nós não somos seu inimigo, estamos aqui pois os Tooney Lunes estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                cin >> escolha;
                cout << "\n";

                // Ir pra cima
                if (escolha == 1)
                {
                    cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                    cout << "# 1- Arremessar o cajado\n";
                    cout << "# 2- Atacar com o cajado\n";
                    cin >> escolha;
                    cout << "\n";

                    // Arremessar o cajado
                    if (escolha == 1)
                    {
                        cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                        cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                        cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // Atacar com o cajado - GAME OVER
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // Falar a frase
                else if (escolha == 2)
                {
                    cout << "\"Nós não somos soldados dos Tooney Lunes, estamos aqui porque eles estão atrás da gente, fugimos de uma base deles mais cedo\"\n";
                    cout << "\"Exatamente o que um soldado dos Tooney Lunes diria... \" - Coelho Arqueiro\n";
                    cout << "*O coelho mira em você e atira uma flecha, você rapidamente se abaixa, a flecha voa montanha abaixo. Pancho diz que irá para cima dele. O que você faz?\n";
                    cout << "# 1- Ir para cima \n";
                    cout << "# 2- \"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                    cin >> escolha;
                    cout << "\n";

                    // Ir pra cima
                    if (escolha == 1)
                    {
                        cout << "*Pancho toma a iniciativa, vai para cima do coelho, ele fica na entrada da caverna e se prepara para atirar novamente, você sai de trás da pedra e tenta contornar o arqueiro para vocês pegarem ele, o arqueiro, que mirava em Pancho, subitamente mira para você logo após que sai de trás da pedra, você desvia por pouco e continua correndo, a flecha cai montanha a baixo, Pancho entra em luta corporal com o coelho, mesmo ele sendo um arqueiro, estava lutando muito bem, Pancho consegue empurrar ele contra a parede, você chega perto o suficiente para ajudar, qual sua próxima ação?\n";
                        cout << "# 1- Arremessar o cajado\n";
                        cout << "# 2- Atacar com o cajado\n";
                        cin >> escolha;
                        cout << "\n";

                        // Arremessar o cajado
                        if (escolha == 1)
                        {
                            cout << "1 #>Você arremessa o cajado no coelho, ele desvia, porém o cajado acerta numa pedra na parede que estava para se soltar, a pedra cai perto do coelho e de Pancho faz um tremendo barulho e uma nuvem de poeira sobe, você não consegue ver o que esta acontecendo entre os dois. Antes que você consiga fazer qualquer coisa, Pancho é arremessado para fora da nuvem de poeira e cai no chão, você corre até ele e o levanta.\n";
                            cout << "\"Esse coelho não está para brincadeira " + JOGADOR + ", ele me desarmou, o que vamos fazer agora?\"- Pancho\n";
                            cout << "*Vocês olham para a nuvem de poeira baixando, a silhueta do coelho segurando o arco aparece, ele prepara uma flecha e encara vocês, o coelho então sobe suas orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                            cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                            cout << "*O coelho arqueiro volta o olhar para vocês dois, faz uma cara de confuso e atira a flecha no soldado, o soldado cai no chão. Os outros soldados furiosos vão para atacar, o coelho devolve a arma de vocês e diz:\n";
                            cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                            cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                            cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                            cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";
                            cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                        }

                        // Atacar com o cajado - GAME OVER
                        else if (escolha == 2)
                        {
                            cout << "2 #> *Você ataca o coelho com o cajado, ele defende com o arco, prende seu cajado na linha e joga as duas armas para longe, elas caem da montanha, vocês continuam trocando socos e pontapés, esse arqueiro não estava para brincadeira, estava dando conta de vocês dois, alguns minutos depois de batalha intensa, escutam barulho de vários passos subindo a montanha perto de vocês, na frente, vinha um soldado dos tooney lunes com uma flecha no ombro, segurando seu cajado e o arco enroscados, atrás dele, uma dezena de soldados, o coelho arqueiro pisa no escudo de Pancho e salta por cima de vocês, ele pula montanha abaixo e desaparece, vocês são pegos pelos Tooney Lunes e executados. GAME OVER\n";
                        }

                        // GAME OVER
                        else
                        {
                            cout << "Escolha invalida - GAME OVER\n";
                            return 0;
                        }
                    }

                    // Falar a frase
                    else if (escolha == 2)
                    {
                        cout << "\"Nós fazemos parte da resistência, estamos aqui pois iremos parar o império de Wallace Pascal\"\n";
                        cout << "\"Wallace Pascal, huh? Aquele merdinha...\" - Coelho Arqueiro\n";
                        cout << "*Você olha novamente por cima da pedra e percebe que o coelho abaixou o arco, você fala:\n";
                        cout << "# 1- \"Não precisamos nos atacar, vamos conversar\"\n";
                        cout << "# 2- \"Larga sua arma e vamos conversar\"\n";
                        cin >> escolha;
                        cout << "\n";
                        cout << "*O coelho te encara e quando ia começar a dizer algo, sobe as orelhas e encara para a subida da montanha, você e Pancho não ouvem nada, segundos depois, começam a sentir um tremor no chão e muitos passos subindo a montanha perto de vocês, na frente vinha um soldado dos Tooney Lunes com uma flecha no ombro e atrás uma dezena de soldados\n";
                        cout << "\"Ali estão os dois prisoneiros, eles prenderam o James e fugiram! Não deixem eles escaparem! Peguem este arqueiro que me acertou também, ninguém irá se safar dos Tooney Lunes!\" - Soldado\n";
                        cout << "*O coelho arqueiro olha para você e diz:\n";
                        cout << "\"É agora ou nunca, me provem o valor de vocês\" - Coelho Arqueiro\n";
                        cout << "*Vocês três se juntam para acabar com os soldados e depois de alguns minutos batalhando, saem vitoriosos.\n";
                        cout << "*Após a batalha, vocês entram na caverna e o coelho se apresenta.\n";
                        cout << "\"Prazer, me chamo Maximus, vocês provaram o seu valor, me contem sua história\" - Maximus\n";

                        cout << "*Após algum tempo conversando explicando a situação da resistência, como vocês foram parar ali e falando sobre o Ovo Dourado, Maximus não conta muito sobre ele mas diz que está atras de Wallace e não do Ovo Dourado em si. Vocês decidem formar uma parceria e seguir até a base onde localiza-se o Ovo Dourado.\n";
                    }

                    // GAME OVER
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }

                // GAME OVER
                else
                {
                    cout << "Escolha inválida - GAME OVER";
                    return 0;
                }
            }
        }

        // GAME OVER
        else
        {
            cout << "Escolha invalida - GAME OVER";
            return 0;
        }
    }

    // Game Over
    else
    {
        cout << "Escolha invalida - GAME OVER\n";
        return 0;
    }

    /*Terceiro cenário*/
    cout << "*Após algum tempo caminhando e se escondendo de soldados, vocês conseguem chegar próximo a base onde está localizado o Ovo Dourado, a base tem muros altos feitos de material extremamente resistente, vocês estão escondidos em uma grande árvore olhando para um dos portões onde entram e saem guardas analisando como poderiam entrar. Vocês decidem entrar disfarçados dentro da base deles, se passando por eles.\n\n";
    cout << "* Vocês entram na floresta para procurar por guardas, depois de alguns minutos vocês acham um grupo de soldados e armam uma armadilha para derrotar eles, após pegarem as armaduras, voltam para perto do portão e Maximus diz para seguir a deixa dele.\n\n";
    cout << "* Vocês vão caminhando até o portão, os dois soldados coelho que controlam o portão param você. Maximus ja havia entrado e Pancho logo atrás de você.\n\n\n";
    cout << "\"Ei humano, onde você pensa que vai?\" - Soldado\n";
    cout << "*Você olha para Maximus e ele faz um gesto de reverência com o corpo, você:\n\n";
    cout << "# 1- Faz uma reverência para os guardas \n";
    cout << "# 2- Responde: \"Estou voltando do meu turno\" \n\n";
    cin >> escolha;
    if (escolha == 1)
    {
        cout << "1 #> *Você faz uma reverência para os guardas e eles começam a rir como se você tivesse contado uma piada\n\n";
        cout << "\"Olha só para esse pobre humano, criatura inferior, entra logo e faça seu trabalho\" - Soldado";
        cout << "*Maximus faz um sinal para você ir depressa e Pancho te segue logo atrás, você fica sem entender muito bem a situação, já que os Tooney Lunes também tem humanos em seu grupo, Maximus explica que mesmo tendo humanos que apoiam Wallace, eles ainda são discriminados por outros coelhos do império.  Enquanto vocês andam pelo pátio em direção ao salão principal, outros humanos que passam por vocês e fazem parte do Tooney Lunes olham estranho para você, um deles fala com um coelho, o coelho começa a vir na direção de vocês. Maximus fica na sua frente e começa a falar com o guarda.\n\n\n";

        cout << "\"Tudo bem amigo? Algum problema?\" - Maximus\n\n";
        cout << "\"Meu subordinado disse que nunca viu esse humano nessa unidade, vou levar ele para a sala de análise\" - Soldado\n\n";
        cout << "\"Está tudo bem companheiro, o próprio Wallace designou esse para esta unidade, acho que ja ouviu falar do grupo seleto de humanos que ele treina certo? Eu estou trazendo este para cá justamente para defender \"você sabe o que.\" - Maximus\n\n";
        cout << "\"Grupo de humanos que ele treina? É.. mas.. mas é claro que eu sei, eu sei tudo sobre Wallace, ele me recrutou pessoalmente, diferente de vocês que foram escolhidos por aquele processo de seleção, sou o melhor de todos aqui. \" - Soldado\n\n";
        cout << "\"Bom saber\" - Maximus\n\n\n\n";
        cout << "*O soldado vai embora e Maximus volta a andar, Pancho olha para você com um olhar de desconfiado depois da fala de Maximus e faz um sinal para tomarem cuidado, você concorda e voltam a seguir Maximus.\n\n";
        cout << "*Vocês seguem para dentro da base e chegam ao salão principal, quando conversaram na montanha, você, Pancho e Maximus chegaram a conclusão de que o Ovo Dourado estaria na parte mais alta da base. Vocês andam até o elevador da base, você olha para os botões que vão de -1 até 6, qual você aperta?\n\n";
        cout << "\n\n1 - Apertar botão do 1° andar\n";
        cout << "\n\n2 - Apertar botão do 6° andar\n";
        cin >> escolha;
        /*clear*/
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
        /*escolha 1 do elevador*/
        if (escolha == 1)
        {
            cout << "\n\n\n*Você aperta no -1, Maximus olha para você desconfiado e Pancho te olha como quem irá concordar com qualquer decisão que você faça, o elevador começa a descer e depois de alguns segundos ele para, um alarme pode ser ouvido acima, o elevador começa a piscar em vermelho e uma tela aparece na frente de vocês.\n\n";
            cout << "\"Vocês acham mesmo que poderiam vir em meu cômodo? Por acaso não lembram que eu sou? Esse foi o primeiro e último erro de vocês... \" -------\n\n";
            cout << "*Conforme vocês ouviam a voz, a imagem de um coelho ficava mais nítida na tela, era Wallace Pascal, ele olha para vocês e começa a bufar, então clica em um botão no painel e um gás começa a entrar no elevador, vocês prendem a respiração.\n\n";
            cout << "\"Uma tentativa de sobrevivência, que lindo... Acho que até vou deixar vocês viverem... SÓ QUE NÃO, MORRAM!\" - Wallace\n\n";
            cout << "*Maximus olha para a câmera e Wallace vê o rosto de Maximus, Wallace fica com uma expressão confusa e desliga a câmera, o elevador volta a andar, Maximus pega seu arco e prepara uma flecha, o elevador para no andar -1 e as portas se abrem. Quatro coelhos enormes aparecem, Maximus dispara a flecha na cabeça do coelho que estava entrando no elevador, pega um impulso em seu corpo e pula por cima dos demais coelhos, um dos coelhos corre atrás dele, o que você faz?\n\n\n";
            cout << "# 1- Bater nos dois coelhos com o seu cajado\n";

            cout << "# 2- Arremessar o coelho dentro do elevador em cima dos outros dois coelhos e clicar em outro andar\n\n";

            cin >> escolha;
            /* escolha 1 da luta contra coelhos */
            if (escolha == 1)
            {
                cout << "1 #> *Os dois coelhos estavam distraídos com o Maximus e você acerta dois coelhos com uma cajadada só, o primeiro atingido cai no chão e o outro vira-se para vocês, Pancho corre em direção ao coelho de pé e empurra-o para longe, o coelho no chão pega o seu pé e te arremessa em cima de Pancho que estava lutando contra o outro coelho, vocês dois colidem contra a parede, Pancho se levanta e defende um golpe do coelho, você aproveita a abertura e acerta os joelhos do coelho, ele cai no chão novamente, o outro coelho se levanta e corre em direção a vocês, Pancho e o coelho travam uma luta corporal.\n\n";
                cout << "\"Vai, corre logo," + JOGADOR + ", eu seguro os dois, você e o Maximus precisam derrotar o Wallace!\" - Pancho\n\n\n";

                cout << "# 1- Ir atrás de Wallace\n";
                cout << "# 2- Ficar e ajudar Pancho\n\n";
                cin >> escolha;

                /*escolha 1 WALLACE X PANCHO*/
                if (escolha == 1)
                {
                    cout << "*Enquanto você corre, olha para trás e vê Pancho sorrindo para você, então ele se volta para os coelhos e começa a empurra-los em direção ao elevador, ele aperta nos botões e a porta se fecha. Você continua pelo corredor e encontra uma bifurcação\n\n";
                    cout << "# 1- Ir pela direita\n";
                    cout << "# 2- Ir pela esquerda\n\n";

                    cin >> escolha;
                    cout << "\n * Você segue e vira o corredor, encontra o coelho que estava seguindo Maximus com o corpo quase todo queimado, continua seguindo até o fim e encontra Maximus e Wallace.\n\n";
                    cout << "\"Então você realmente veio huh?\" - Wallace\n\n";
                    cout << "\"Eu prometi que nunca te perdoaria pelo o que você fez com nossa mãe\" - Maximus\n\n";
                    cout << "\"Irmãozinho, você ainda pensa nela? Ela era só um estorvo para a nossa pesquisa, você sabe disso\" - Wallace\n\n";
                    cout << "\"Não, você que é um estorvo! Você sacrificou ela só para ter o poder do Ovo Dourado\" - Maximus\n\n";
                    cout << "\"Não se finja de inocente, você me ajudou a pegar o Ovo Dourado, não venha botar a culpa em mim seu hipócrita\" - Wallace\n\n";
                    cout << "\"Você me enganou! Disse que ia curar a nossa mãe com o poder do Ovo Dourado, mas usou ela como fonte de energia para ter mais poder. O seu reinado acaba aqui irmão.\" - Maximus\n\n";
                    cout << "*Maximus joga o arco para longe, tira a aljava de sua cintura e junta as palmas de suas mãos, uma luz forte começa a brilhar dentro de suas mãos, quando as abre, uma bola de fogo está flutuando sobre a sua mão e então ele a joga em Wallace.\n\n";
                    cout << "*Wallace fica parado vendo a bola de fogo indo em sua direção, centímetros antes da bola lhe atingir, uma espécie de escudo em volta do seu corpo o protege.\n\n";
                    cout << "\"Então você ficou mais forte, mas isso é apenas uma fração do meu poder que eu te emprestei, presencie o verdadeiro poder!\" - Wallace\n\n";
                    cout << "*Wallace levanta a mão e uma névoa começa a se formar, Maximus joga mais uma bola de fogo em direção a Wallace, mas não tem nenhum efeito, a névoa chega até Maximus, seus olhos ficam estranhos e ele paralisado.\n\n";
                    cout << "\"Mãe? Você... Você está viva? Eu achei que tinha te perdido para sempre.\" - Maximus\n\n";
                    cout << "*Maximus parece estar em algum tipo de ilusão e Wallace está se aproximando dele, o que você faz?\n\n\n";

                    cout << "# 1- Atacar Wallace\n";
                    cout << "# 2- Correr até Maximus e acordar ele\n\n";
                    cin >> escolha;

                    /*escolha 1 bater no wallace ou não*/
                    if (escolha == 1)
                    {
                        cout << "\n1 #> *Você se esgueira por tras de Wallace, com seu cajado, e prepara um ataque, quando vai acerta-lo, o mesmo escudo que protegeu-lhe da bola de fogo rebate o ataque do cajado. Wallace se vira furioso\n\n";
                        cout << "\"Olha só o que temos aqui, um humano insolente, acha mesmo que pode me atacar? O coelho mais poderoso de Senora? Saia do meu caminho. \" - Wallace\n\n";

                        cout << "*Wallace estende a mão em sua direção e uma névoa o empurra até a parede com muita força, você bate a cabeça e desfalece no chão. GAME OVER\n\n";
                        return 0;
                        /*escolha 2 bateer no wallace ou não*/
                    }
                    else if (escolha == 2)
                    {
                        cout << "\n*Você corre até Maximus e empurra ele, levando-o para trás de uma parede, para se protegerem de Wallace, Maximus acorda sem entender muito bem o que estava acontecendo e recorda-se de estar batalhando com o irmão.\n\n";
                        cout << "\"" + JOGADOR + ", o que você esta fazendo aqui? Esta é MINHA batalha, saia!\" - Maximus\n\n";
                        cout << "# 1- \"Me deixe te ajudar\"\n";
                        cout << "# 2- \"Você não irá ganhar sozinho\"\n";
                        cout << "# 3- \"Wallace é muito forte, precisamo de um plano\"\n\n\n";
                        cin >> escolha;
                        cout << "\"Obrigado " + JOGADOR + ", por me salvar, mas eu irei derrotar esse verme sozinho, não importa o que aconteça, jurei vingar a minha mãe\" -Maximus\n\n";
                        cout << "*Maximus levanta-se e enconsta as mãos na parede em que estavam apoiados, novamente um brilho começa a surgir, as mãos de Maximus explodem a parede e ela sai voando em direção a Wallace, o seu escudo novamente o protege e ele começa a rir euforicamente\n\n";
                        cout << "\"Olha só para vocês, achando mesmo que podem me derrotar, nem agora e nem em mil anos vocês vão tomar o poder do Ovo Dourado de mim \" - Wallace\n\n";
                        cout << "*Wallace estende as suas mãos e uma névoa mais densa começa a vir na direção de vocês dois, Maximus usa suas mãos e começa a atear fogo constantemente em direção à névoa.\n\n";
                        cout << "\"" + JOGADOR + ", rápido, você tem uma cenoura com você?\" - Maximus\n\n";
                        if (cenoura == 0)
                        {
                            cout << "*Você procura em sua bolsa e não acha nenhuma cenoura, Maximus é jogado para trás com a força de Wallace e bate contra a parede, ele cai no chão desfalecido, Wallace vira para você e ri novamente\n\n";
                            cout << "\"Então Maximus ainda tinha esperança de achar alguém digno para comer uma Cenoura Dourada? Pobre coitado, sempre foi iludido.\" - Wallace\n\n";
                            cout << "*Wallace invoca mais uma névoa que vai em sua direção e te agarra pelo pescoço, você não consegue mais respirar e vai perdendo suas forças até ficar inconsciente. GAME OVER\n";
                            return 0;
                        }
                        else
                        {
                            cout << "*Você pega a sua mochila e retira uma cenoura, Maximus olha para a cenoura fica com uma expressão esperançosa, ele redireciona a névoa com o fogo e te leva para trás de outra parede.\n\n";
                            cout << "\"Não adianta se esconderem de mim, a vida patética de vocês termina hoje\" - Wallace\n\n";
                            cout << "*Maximus pega a cenoura e envolve ela nas palmas das mãos, um brilho dourado começa a surgir, ele abre a mão e você vê uma cenoura dourada.\n\n";
                            cout << "\"Essa," + JOGADOR + ", é uma cenoura que contém uma parte do poder que eu obtive do Ovo Dourado, ela dá poder para aqueles que são dignos, esse é um fardo muito grande para se carregar mas, se quiser derrotar o Wallace agora, você precisa desse poder\" - Maximus\n\n";
                            cout << "*Maximus volta-se para Wallace e continuam o embate, você:\n\n";

                            cout << "# 1- Comer a Cenoura Dourada \n";
                            cout << "# 2- Não comer a cenoura\n\n";
                            cin >> escolha;
                            cout << "\n\n\n\n";
                            /*comer cenoura ou não*/
                            if (escolha == 1)
                            {
                                cout << "1 #> *Você come a Cenoura Dourada e sente um imenso poder surgindo, seu corpo começa a brilhar partindo do coração e erradiando até a ponta de seus dedos, Wallace e Maximus param a luta e olham para você\n\n";
                                cout << "\"Maximus, você deu uma Cenoura Dourada para ele?\" - Wallace\n\n";
                                cout << "\"O " + JOGADOR + " tem o potencial necessário para ser o herói que irá trazer Senora de volta a paz\" - Maximus\n\n";
                                cout << "*Wallace ataca você com a névoa, mas antes mesmo da névoa atingir você, seu corpo libera a energia acumulada e lança Wallace e Maximus para a parede. Você olha para suas mãos e elas estão brilhando, sentindo um enorme poder, você avança para cima de Wallace com seu cajado e o acerta na costela, seu escudo quebra e ele é arremessado para outra parede. Maximus se levanta e toca em seu ombro.\n\n";
                                cout << "\"Vamos acabar com isso, " + JOGADOR + "\" - Maximus\n\n";
                                cout << "*Vocês vão para cima de Wallace, Maximus lança uma bola de fogo e Wallace desvia, ele prepara para lançar uma névoa e você salta por cima dele, atacando-o com o cajado novamente a névoa protege ele porém Maximus havia lançado mais uma bola de fogo enquanto ele estava distraído e ele é arremessado contra a parede, você pula até ele e golpeia com o cajado e ele desmaia.\n\n";
                                cout << "*Você e Maximus dominam a base e recuperam o Ovo Dourado, avisam a resistência e a operação de recuperação de Senora ocorre, depois de algumas semanas, os Tooney Lunes são erradicados e Senora volta ao normal, uma homenagem é prestada para Pancho em praça pública por seu sacrifício e coragem. FIM\n";

                                /*comer a cenoura ou não*/
                            }
                            else if (escolha == 2)
                            {
                                cout << "2 #> *Você não come a cenoura, Maximus é jogado para trás com a força de Wallace e bate contra a parede, ele cai no chão desfalecido, Wallace vira para você e ri novamente\n\n";
                                cout << "\"Então Maximus ainda tinha uma dessa depois de tantos anos hein? Ele deveria estar esperando por alguém certo para comer a Cenoura Dourada, mas esse é o seu fim\" - Wallace\n\n";
                                cout << "*Wallace invoca mais uma névoa que vai em sua direção e te agarra pelo pescoço, você não consegue mais respirar e vai perdendo suas forças até ficar inconsciente. GAME OVER\n";
                                return 0;
                            }
                            else
                            {
                                cout << "Escolha invalida - GAME OVER\n";
                                return 0;
                            }
                        }
                    }
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                    /*escolha 2 WALLACE X PANCHO*/
                }
                else if (escolha == 2)
                {
                    cout << "*Você acerta uma cajadada no coelho em pé e ele cambaleia para trás, Pancho aproveita a situação e o empurra para dentro do elevador, ele aperta um botão e sai do elevador. A porta se fecha, o outro coelho caído começa a se levantar e você acerta mais um golpe com o cajado, Pancho segura-o e você finaliza ele.\n\n";
                    cout << "*Vocês seguem e viram o corredor, encontram o coelho que estava seguindo Maximus com o corpo quase todo queimado, continuam seguindo até o fim e encontram Wallace segurando Maximus pelo pescoço, Maximus quase sem forças e totalmente rendido.\n\n";
                    cout << "\"Me desculpem, eu não era forte o suficiente\" - Maximus\n\n";
                    cout << "*Wallace joga Maximus contra a parede e ele cai desfalecido no chão. Você e Pancho correm até ele, porém uma névoa estranha não deixa vocês passarem, vocês olham para Wallace e ele esta com a mão esticada e a névoa vem de sua palma. Wallace começa a rir\n\n";
                    cout << "\"Olha só quem temos aqui, o tico e o teco. Vocês nunca irão tirar Senora de minhas mãos, morram!\" - Wallace\n\n";
                    cout << "*A névoa avança contra vocês, Pancho te protege com o escudo e é arremessado contra a parede, o escudo sai voando e ele cai no chão, Pancho não se movimenta mais. Você avança contra Wallace para lhe acertar com o cajado, Wallace fica parado te encarando, quando o cajado vai acertar ele, um escudo o protege e seu cajado voa para longe, Wallace envolve a névoa em você e te levanta no ar, você começa a perder a respiração e sua visão começa a ficar turva, Wallace te joga na parede e você cai inconsciente no chão. \n\n";
                    cout << "*Wallace Pascal anuncia para Senora que o herói mandado para acabar com seu império fora derrotado, a resistência perde suas esperanças e Senora enfim sucumbe a seu poder.\n\n";
                    cout << "GAME OVER\n";
                    return 0;
                }
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
                /*escolha 2 da luta contra coelhos*/
            }
            else if (escolha == 2)
            {
                cout << "2 #> *Você e Pancho, com todas as suas forças, levantam o coelho e arremesa-o nos outros dois coelhos que estavam destraídos com o Maximus, que caem no chão, então Pancho clica em qualquer botão do elevador e a porta se fecha, porém o elevador não começa a subir e o gás volta a ser solto dentro do elevador, você e Pancho aguentam o máximo que podem, porém não tem mais saída. GAME OVER\n";
            }
        }
        /*escolha 2 do elevador*/
        else if (escolha == 2)
        {
            cout << "*Você aperta no sexto andar, Maximus e Pancho ficam ao seu lado e se preparam para quando a porta abrir. Ao chegar no sexto andar, o elevador abre e vocês enxergam um coelho sentado a uma mesa, parece ser alguém que controla a entrada e saída das pessoas desse cômodo, e vêem também uma porta enorme de metal que parece ser bem resistente. Maximus começa a andar e você e Pancho o seguem, ele chega até a mesa do coelho.\n\n";
            cout << "\"Quem são vocês? Humanos não são permitidos aqui em cima. \" - Coelho\n\n";
            cout << "\"Ah você sabe como é... \" - Maximus \n\n";
            cout << "*Maximus da um soco no coelho, que cai da cadeira para trás, Maximus pula a mesa e continua a luta corporal com o coelho.\n\n";
            cout << "\"Vocês dois, procurem algo na mesa para abrir a porta, rápido!\" - Maximus\n\n";
            cout << "*Você e Pancho olham na mesa e encontram um botão amarelo e um botão azul, qual você aperta?\n\n";
            cout << "# 1- Botão amarelo\n";
            cout << "# 2- Botão azul\n";

            cin >> escolha;
            cout << "\n\n\n";
            /*Botão amarelo*/
            if (escolha == 1)
            {
                cout << "*Você aperta o botão amarelo e a porta se abre, você vê o Ovo Dourado dentro de um recipiente em uma espécie de torre no meio da sala, dentro da sala têm diversos soldados coelhos. Maximus esconde o corpo do coelho que havia deixado inconsciente e vocês entram na sala, os guardas coelhos começam a olhar para você e entram em posição de combate, Maximus põe a mão em seu ombro e diz\n\n";
                cout << "\"Companheiros, relaxem, essa é a nova oferenda para o Ovo Dourado\" - Maximus\n\n";
                cout << "*Pancho encara Maximus, que pisca para ele, então ele entra no jogo\n\n";
                cout << "\"Wallace selecionou especialmente esse humano para a oferenda hoje\" - Pancho\n\n";
                cout << "*Maximus pisa em sua perna e você fica de joelhos no chão, os outros guardas saem da posição de combate e um dos soldados aproxima-se de você. Ele segura sua cabeça e te encara, então faz um sinal para outro soldado. O outro soldado retira um dispositivo do bolso e aperta um botão, a torre começa a descer junto com o recipiente em que está guardado o Ovo Dourado até parar e aumentar, formando uma mesa retangular.\n\n";
                cout << "\"Muito bem, vamos começar o ritual\" - Soldado\n\n";
                cout << "*O soldado te segura pelo braço para te levantar e Maximus o golpeia na cabeça com o arco, ele cai inconsciente no chão, Pancho parte para cima de dois soldados e segura-os contra a parede, Maximus atira em dois soldados e entra em combate com mais três, você começa a correr em direção ao Ovo Dourado, o soldado que estava segurando o dispositivo larga-o e vem para te atacar, você bloqueia o golpe com o cajado e da uma rasteira nele, ele cai no chão e segura sua perna, você golpeia ele na cabeça e volta a correr em direção ao Ovo Dourado.\n\n";
                cout << "*Você chega até a mesa e segura o recipiente, avisa para Maximus e Pancho que conseguiu, porém ao virar para trás, avista Pancho imobilizado pelos dois guardas e Maximus contra a parede cercado por outros dois soldados, um dos guardas havia saido para avisar o resto da base, você olha para o fim do corredor e vê a porta do elevador se abrindo, Wallace Pascal aparece e te encara furiosamente, ele estende a mão e uma névoa começa a se materializar, ela avança na sua direção, você:\n\n";
                cout << "# 1- Pega o Ovo Dourado\n";
                cout << "# 2- Usa seu cajado para se defender\n";
                cin >> escolha;
                cout << "\n\n";
                /*pegar o ovo dourado ou se defender*/
                if (escolha == 1)
                {
                    cout << "1 #>* Antes da névoa te acertar, uma bola de fogo dissipa-a e você consegue segurar o Ovo Dourado com suas mãos, você sente um poder imenso surgindo em seu corpo que começa a brilhar, partindo do coração e erradiando até a ponta de seus dedos, todos na sala olham para você.\n\n";
                    cout << "\"NÃO, O QUE VOCÊ FEZ!\" - Wallace\n\n";
                    cout << "*Wallace entra na sala e estende as mãos para você, materializa mais névoa e te ataca,mas antes mesmo da névoa atingir você, seu corpo libera a energia acumulada e lança todos na sala contra a parede. Pancho consegue se libertar e Maximus foge dos soldados. Wallace olha furioso para Maximus.\n\n";
                    cout << "\"Eu sabia que era você depois de ver a bola de fogo, o que está fazendo aqui atrapalhando meus planos irmão\" - Wallace\n\n";
                    cout << "\"Eu prometi que nunca te perdoaria pelo o que você fez com nossa mãe, seu reinado acaba agora irmão\" - Maximus\n\n";
                    cout << "*Você olha para suas mãos e elas estão brilhando, sentindo um enorme poder, você avança para cima de Wallace com seu cajado e o acerta na costela, seu escudo quebra e ele é arremessado para outra parede. Pancho e Maximus aproximam-se de você.\n\n";
                    cout << "# 1- \"Vamos acabar com isso\"\n";
                    cin >> escolha;
                    cout << "1 #> *Vocês vão para cima de Wallace, Maximus lança uma bola de fogo e Wallace desvia, ele prepara para lançar uma névoa e você salta por cima dele, atacando-o com o cajado novamente, a névoa protege ele porém Pancho aproxima-se enquanto ele estava distraído e arremessa-o na direção de Maximus, ele acerta um golpe flamejante em Wallace e ele cai no chão, você finaliza-o com uma cajadada e ele fica inconsciente no chão.\n\n";
                    cout << "*Vocês três dominam a base e recuperam o Ovo Dourado, avisam a resistência e a operação de recuperação de Senora ocorre, depois de algumas semanas os Tooney Lunes são erradicados e Senora volta ao normal e uma homenagem é prestada para os três grandes heróis de Senora. FIM\n\n";
                    return 0;
                }
                /*pegar o ovo dourado ou se defender*/
                else if (escolha == 2)
                {
                    cout << "2 #> *Você segura seu cajado na sua frente para se defender, a névoa acerta em seu cajado e ele sai voando,você é arremessado contra a parede e deixa o recipiente com o Ovo Dourado cair, Wallace usa a névoa para pega-lo, nesse momento, uma bola de fogo interrompe a névoa e o recipiente cai no chão. Wallace entra na sala com uma expressão confusa.\n\n";
                    cout << "\"Uma bola de fogo? Somente uma pessoa consegue usar magia além de mim.\" - Wallace\n\n";
                    cout << "*Wallace olha para Maximus batalhando contra o último soldado restante.\n\n";
                    cout << "\"Maximus? Então você realmente veio... \" - Wallace\n\n";
                    cout << "*O soldado caí no chão depois de um golpe no queixo e Maximus vira-se com uma expressão furiosa\n\n";
                    cout << "\"Eu prometi que nunca te perdoaria pelo o que você fez com nossa mãe\" - Maximus\n\n";
                    cout << "\"Irmãozinho, você ainda pensa nela? Ela era só um estorvo para a nossa pesquisa, você sabe disso\" - Wallace\n\n";
                    cout << "\"Não, você que é um estorvo! Você sacrificou ela só para ter o poder do Ovo Dourado\" - Maximus\n\n";
                    cout << "*Maximus atira uma bola de fogo em direção a Wallace, ele fica parando vendo a bola de fogo indo em sua direção, centímetros antes da bola lhe atingir, uma espécie de escudo em volta do seu corpo o protege.\n\n";
                    cout << "\"Não se finja de inocente, você me ajudou a pegar o Ovo Dourado, não venha botar a culpa em mim seu hipócrita\" - Wallace\n\n";
                    cout << "*Wallace materializa névoa em direção a Maximus\n\n";
                    cout << "\"Você me enganou! Disse que ia curar a nossa mãe com o poder do Ovo Dourado, mas usou ela como fonte de energia para ter mais poder. O seu reinado acaba aqui irmão.\" - Maximus\n\n";
                    cout << "\"Meu reinado irá acabar pois um humano patético, um coelho fraco e meu pequeno irmãozinho estão aqui para me derrotar? Me conte outra piada irmão, estou gostando\" - Wallace\n\n";
                    cout << "*Maximus, furioso, avança em Wallace e tenta acerta-lo com um soco flamejante, a névoa protege Wallace e ele arremessa Maximus no chão, cobrindo-o com a névoa, Pancho tenta se levantar mas os soldados continuam limitando seus movimentos, Wallace olha para você.\n\n";
                    cout << "\"Humano, preste atenção, assista a sua última gota de esperança secar\" - Wallace\n\n";
                    cout << "*Wallace leva uma névoa até Pancho, levanta ele e Maximus no ar com a névoa, caminha até o recipiente com o Ovo Dourado, pega-o do chão e ri de você, ele volta para a entrada da sala.\n\n";
                    cout << "\"Guardas, acabem com ele\" - Wallace\n\n";
                    cout << "*Dezenas de soldados entram na sala e você luta incessantemente até que os guardas conseguem te acertar e você cai no chão desfalecido, Wallace Pascal anuncia para Senora que o herói mandado para acabar com seu império fora derrotado, a resistência perde suas esperanças e Senora enfim sucumbe a seu poder.\n\n";
                    cout << "GAME OVER\n";
                    return 0;
                }
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }
            /*botão azul*/
            else if (escolha == 2)
            {
                cout << "*Você aperta o botão azul e um alarme começa a soar, a porta se abre e você vê o Ovo Dourado dentro de um recipiente em uma espécie de torre no meio da sala, diversos soldados começam a sair da sala e os cercam, vocês começam a batalhar contra os soldados e percebem que o elevador vai até o andar -1, Pancho abre um caminho entre os soldados, Maximus pula por cima dos soldados e corre para o fundo da sala, você ajuda Pancho e vocês entram na sala conforme vão derrotando os soldados, Maximus pega o arco e flecha e atira no recipiente que protege o Ovo Dourado, a flecha reflete e prende no teto.\n\n";
                cout << "*O elevador chega ao sexto andar e a porta se abre, Wallace Pascal aparece furioso, uma névoa se materializa de suas mãos, empurrando todos os soldados para abrir caminho em direção a vocês, ele entra na sala e tranca a porta. Wallace levanta a mão em direção a Pancho e lança uma névoa, Pancho se protege com o escudo mas é arremessado para a parede com tamanha força de Wallace, ele levanta uma mão para você e também lança uma névoa, você se protege com o cajado em sua frente, porém antes de te acertar, uma bola de fogo cruza o caminho da névoa e dissipa-a, você se afasta de Wallace e observa a situação.\n\n";
                cout << "\"Uma bola de fogo? Somente uma pessoa consegue usar magia além de mim.\" - Wallace\n\n";
                cout << "*Wallace olha para o fundo da sala e vê Maximus que está lançando mais uma bola de fogo em direção a ele, Wallace fica parando vendo a bola de fogo indo em sua direção, centímetros antes da bola lhe atingir, uma espécie de escudo em volta do seu corpo o protege.\n\n";
                cout << "\"Maximus? Então você realmente veio... \" - Wallace\n\n";
                cout << "\"Eu prometi que nunca te perdoaria pelo o que você fez com nossa mãe\" - Maximus\n\n";
                cout << "\"Irmãozinho, você ainda pensa nela? Ela era só um estorvo para a nossa pesquisa, você sabe disso\" - Wallace\n\n";
                cout << "*Maximus atira uma flecha em direção a Wallace, joga o arco para longe e começa a correr em direção a ele, preparando mais uma bola de fogo.\n\n";
                cout << "\"Não, você que é um estorvo! Você sacrificou ela só para ter o poder do Ovo Dourado\" - Maximus\n\n";
                cout << "*Wallace desvia da flecha e materializa mais névoa em direção a Maximus\n\n";
                cout << "\"Você me enganou! Disse que ia curar a nossa mãe com o poder do Ovo Dourado, mas usou ela como fonte de energia para ter mais poder. O seu reinado acaba aqui irmão.\" - Maximus\n\n";
                cout << "*Wallace vai para cima de Maximus e eles começam a batalhar com magia, Pancho se levanta, confuso com toda a situação e corre para o seu lado, você explica toda a situação, Pancho diz para vocês irem ajudar Maximus, você:\n\n";
                cout << "# 1- Atacar Wallace com a ajuda de Pancho\n";
                cout << "# 2- Tenta pegar o Ovo Dourado \n";
                cin >> escolha;
                cout << "\n\n\n";

                /*atacar com ajuda de panche*/
                if (escolha == 1)
                {
                    cout << "1 #> *Você e Pancho vão para cima de Wallace, tentam ataca-lo mas o escudo dele o protege, uma névoa surge por debaixo dele e arremessa vocês dois para longe, Maximus está em seu limite, Pancho joga o escudo em direção a Wallace que vira em direção a Pancho, joga Maximus contra a parede e avança para Pancho, segura-o pelo pescoço e afunda ele no chão, você golpeia Wallace com seu cajado mas o escudo novamente o protege, seu cajado sai voando e Wallace te envolve com névoa, Pancho levanta e agarra Wallace, Maximus, sem ter visto Pancho, lança uma bola de fogo em direção a Wallace e ele bota Pancho como escudo coelho para tomar a bola de fogo, Pancho cai no chão todo queimado e Wallace força a névoa envolta de seu pescoço, você não consegue mais respirar e começa a perder sua consciência, Wallace fala algo para Maximus, porém você não consegue mais ouvir, Wallace te joga no chão, já desfalecido, você se força para abrir os olhos e vê Maximus se rendendo para Wallace. Você fecha os olhos e desmaia.\n\n";
                    cout << "*Wallace Pascal anuncia para Senora que o herói mandado para acabar com seu império fora derrotado, a resistência perde suas esperanças e Senora enfim sucumbe a seu poder.\n\n";
                    cout << "GAME OVER\n";
                    return 0;
                }
                /*pegar o ovo dourado*/
                else if (escolha == 2)
                {
                    cout << "*Você chama Pancho para te ajudar a pegar o Ovo Dourado, vocês chegam perto da torre onde está o recipiente e Pancho pega o arco e flecha que Maximus havia largado, ele tenta acertar uma flecha mas erra, você pede para Pancho lhe ajudar a subir, ele faz uma plataforma com o escudo e você sobe, então ele te empurra com toda a força e você se segura na torre, enquanto isso, Wallace empurra Maximus contra a parede e mira uma névoa em você, na tentativa de te impedir de chegar ao Ovo Dourado, Maximus lança uma bola de fogo na névoa e dissipa-a\n\n";
                    cout << "\"Seu oponente sou eu, irmão\" - Maximus\n\n";
                    cout << "\"Seu desgraçado, vocês não irão me parar\" - Wallace\n\n";
                    cout << "*Maximus força Wallace para trás, Pancho corre até Maximus para ajudá-lo, eles param os ataques de Wallace em sua direção, os dois estão contando com você para derrotar Wallace Pascal. Você continua subindo a torre e chega até o recipiente onde está o Ovo Dourado, retira ele da torre e segura em suas mãos, você abre o recipiente e o Ovo Dourado começa a brilhar fortemente, você:\n\n";
                    cout << "# 1- Pega o Ovo Dourado\n";
                    cout << "# 2- Joga o Ovo Dourado para baixo\n";
                    cin >> escolha;
                    cout << "\n\n\n";
                    /*pegar ovo dourado*/
                    if (escolha == 1)
                    {
                        cout << "1 #>* Você segura o Ovo Dourado com suas mãos e sente um poder imenso surgindo em seu corpo que começa a brilhar, partindo do coração e erradiando até a ponta de seus dedos, Wallace, Maximus e Pancho param a luta e olham para você.\n\n";
                        cout << "\"NÃO, O QUE VOCÊ FEZ!\" - Wallace\n\n";
                        cout << "\"Esse é seu fim irmão, você irá pagar por todos os seus pecados\" - Maximus\n\n";
                        cout << "*Maximus se apoia no escudo de Pancho e pega impulso indo para cima de Wallace, acerta-o com sua mão flamejante e ele é arremessado para a parede. Você olha para suas mãos e elas estão brilhando, sentindo um enorme poder, você avança para cima de Wallace com seu cajado e o acerta, o escudo dele quebra e a parede atrás dele também, você manda Wallace voando pelo pátio da base e ele para quando atinge um pilar. Todos os soldados olham para cima e vêem vocês três, os heróis de Senora, após uma intensa batalha, vocês dominam a base e recuperam o Ovo Dourado, avisam a resistência e a operação de recuperação de Senora ocorre, depois de algumas semanas, os Tooney Lunes são erradicados, Senora volta ao normal e uma homenagem é prestada para os três grandes heróis de Senora.\n\n";

                        cout << "FIM\n";
                        return 0;
                        /*jogar o ovo dourado*/
                    }
                    else if (escolha == 2)
                    {
                        cout << "2 #> *Você joga o Ovo Dourado abaixo, ele quebra em vários pedaços e uma fumaça dourada começa a sair de dentro dele, Wallace e Maximus olham assustados para a fumaça que avança contra eles, cobrindo-os. Pancho se afasta e olha para você.\n\n";
                        cout << "\"" + JOGADOR + ", o que aconteceu? Que fumaça é essa?\" - Pancho\n\n";
                        cout << "*Uma explosão onde estavam Wallace e Maximus ocorre e você e Pancho são jogados para trás, quando levantam, presenciam uma cena inacreditável, um coelho gigante e dourado, rindo euforicamente e comemorando.\n\n";
                        cout << "\"FINALMENTE, EU ESTOU LIVRE\" ------\n\n";
                        cout << "*O coelho olha para vocês, Pancho se levanta e te protege com o escudo, o coelho ri novamente, agradece a sua estupidez e começa a flutuar no ar, ele quebra o teto e sai voando. Nem o corpo de Wallace e nem o corpo de Maximus estavam mais ali. Gritos podem ser ouvidos, no pátio da base, você e Pancho saem e presenciam um cena apocalíptica, o coelho dourado sugando a vida vital de todos os humanos e coelhos. Após alguns dias, toda a vida no planeta é erradicada pelo coelho dourado.\n\n";
                        cout << "GAME OVER\n";
                        return 0;
                    }
                    else
                    {
                        cout << "Escolha invalida - GAME OVER\n";
                        return 0;
                    }
                }
                else
                {
                    cout << "Escolha invalida - GAME OVER\n";
                    return 0;
                }
            }
            else
            {
                cout << "Escolha invalida - GAME OVER\n";
                return 0;
            }

            return 0;
        }
        else
        {
            cout << "Escolha invalida - GAME OVER\n";
            return 0;
        }
    }
    else if (escolha == 2)
    {
        cout << "2 #> *Os guardas se entreolham e o soldado atrás de você bate na sua cabeça com toda a força, você cai no chão atordoado quase não conseguindo manter os olhos abertos e não ouve mais nada, Pancho vai para cima do soldado e prensa ele contra a parede, o outro soldado acerta Pancho com a espada na cintura e ele cambaleia para trás, sangrando, e cai, outros guardas vêem o ocorrido e seguram Maximus, você não consegue mais se manter acordado. GAME OVER\n\n";
        return 0;
    }
    else
    {
        cout << "Escolha invalida - GAME OVER\n";
        return 0;
    }
    return 0;
}