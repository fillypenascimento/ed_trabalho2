
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

    
}
