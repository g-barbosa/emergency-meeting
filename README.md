# Emergency-Meeting
## Botão físico que quando pressionado, envia uma sala do meet para um grupo no telegram

### Como criar um bot para o telegram:
Você precisará de um token de acesso do bot do telegram. Para fazer isso, é muito simples:
* Pesquise pela conta BotFather no Telegram.
* Quando iniciamos uma conversa com ele, o mesmo apresenta um série de comandos para interagirmos. Digite /newbot para criar o novo bot.
* De um nome e um username terminado com bot. Pronto! Seu bot já estará criado.
* Você receberá um token de acesso e poderá preencher a variável de ambiente para trabalhar com seu bot.

### Como rodar o projeto:
* Crie um arquivo .env e cole os parametros que estão no arquivo .env_sample. Troque os valores deles pelas as informações do seu projeto (token do bot, url da sala, id do seu chat)
*  Rode o comando a seguir e seu projeto já estara rodando:
~~~
yarn start
~~~
* Você poderá testar, acessando a url: localhost:3333/sendMeetingLink