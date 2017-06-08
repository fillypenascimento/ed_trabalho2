<<<<<<< HEAD
/*
void insere(Tree *personagem){

    if(personagem == NULL)
        return;


    if(strcmp(personagem->left->info->carac,"VAZIO") || strcmp(personagem->right->info->carac,"VAZIO"))
    {
        Genetica *genetic;

        if(strcmp(personagem->info->caract,"cor"))
        {
            // aqui tem um execeçao, pois existem dois nós na arvore que se chamam "cor"

        }
        else if(strcmp(personagem->info->caract,"formato"))
        {

        }
        else if(strcmp(personagem->info->caract,"tipo"))
        {

        }
        else if(strcmp(personagem->info->caract,"calca"))
        {

        }
        else if(strcmp(personagem->info->caract,"botas"))
        {

        }
        else if(strcmp(personagem->info->caract,"raca"))
        {

        }
        else if(strcmp(personagem->info->caract,"camisa"))
        {

        }

    }
    else
    {
        insere(personagem->left);
        insere(personagem->right);
    }
}
*/

void insere(Tree *nodo, Genetica *genetic){

    if(nodo == NULL)
        return;

    if(strcmp(nodo->info->carac,genetic->carac))
        preenche_carac(nodo,genetic);
    else
    {
        insere(nodo->left,genetic);
        insere(nodo->right,genetic);
    }

}

void preenche_carac(Tree *nodo, Genetica *g){




void insere(Tree* nodo, Genetica* carac){
  char compara[20]="VAZIO\0";
  if(strcmp(nodo->info->carac,compara) && nodo->left != NULL && strcmp(nodo->left->info->carac,compara)){
    insere(nodo->left, carac);
  }
  else{
    if(nodo->left == NULL && nodo->right == NULL){
      nodo->info = carac;
      return;
    }
    else{
      if(!strcmp(nodo->left->info->carac,compara) && !strcmp(nodo->right->info->carac,compara)){
        nodo->info = carac;
        return;
      }
      else
        insere(nodo->right, carac);
    }
  }
}

void preenche_olhos_cor(Tree* personagem, Genetica* cor1, Genetica* cor2){
    insere(personagem, cor1);
    insere(personagem, cor2);
}

//void preenche_olhos_tipo(Tree* personagem, Genetica* tipo1, Genetica* tipo2){

//}

void preenche_personagem_inicial(Tree* personagem){
  Genetica* olhos_cor_1 = cria_cor_olhos();
  imprime_genetica(olhos_cor_1);
  Genetica* olhos_cor_2 = cria_cor_olhos();
  imprime_genetica(olhos_cor_2);

  //Genetica* olhos_tipo_1 = cria_tipo_olhos();
  //Genetica* olhos_tipo_2 = cria_tipo_olhos();

  preenche_olhos_cor(personagem, olhos_cor_1, olhos_cor_2);

  preenche_olhos_tipo(personagem, olhos_tipo_1, olhos_tipo_2);


  //preenche_olhos_tipo(personagem, olhos_tipo_1, olhos_tipo_2);

}
