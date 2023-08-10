#include <iostream>

using namespace std;
//Création d'une procedure qui initialise le tableau:
void nbIniatialisation (char tab[9])
{
    tab[0]= ' ';
    tab[1]= ' ';
    tab[2]= ' ';
    tab[3]= ' ';
    tab[4]= ' ';
    tab[5]= ' ';
    tab[6]= ' ';
    tab[7]= ' ';
    tab[8]= ' ';
}
//Création d'une procedure qui affiche le tableau de morpion:
void tableau(char tab[9])
{
    cout<<" ----------------------\n";
    cout<<"|"<<tab[0]<<"      |"<<tab[1]<<"     |"<<tab[2]<<"     |\n";
    cout<<" ----------------------\n";
    cout<<"|"<<tab[3]<<"      |"<<tab[4]<<"     |"<<tab[5]<<"     |\n";
    cout<<" ----------------------\n";
    cout<<"|"<<tab[6]<<"      |"<<tab[7]<<"     |"<<tab[8]<<"     |\n";
    cout<<" ----------------------\n";
}



//Création des différentes procédures qui permettent de créer les différentes conditions possible dans le Morpion, avec le premier joueur:

void choix (    string prenom1,char tab[9])
{
    int ligne,colonne;
        cout<<prenom1<<"\n c'est a toi de jouer:\n ";
        cout<<"\nentrer numero ligne: ";
        cin>>ligne;
        cout<<"\nentrer numero colonne: ";
        cin>>colonne;
        if (ligne >3 | colonne>3 )
        {
            cout<<"votre ligne ou cologne depasse celle du tableau veuiller ressayer : \n";
            cout<<"\nentrer numero ligne: ";
            cin>>ligne;
            cout<<"\nentrer numero colonne: ";
            cin>>colonne;
        }

        if (ligne ==1 && colonne==1)
    {
            if (tab[0]!=' ' )
            {
                    cout<<"\n Case deja prise veuiller ressayer svp \n";
                    choix(prenom1,tab);
                }
            else{
        tab[0]='X';
        tableau(tab);
    }}

    if (ligne ==1 && colonne==2)
{
        if (tab[1]!=' ' )
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[1]='X';

    tableau(tab);
}}
    if (ligne ==1 && colonne==3)
{
        if (tab[2]!=' ' )
        {
           cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[2]='X';

    tableau(tab);
}}
    if (ligne ==2 && colonne==1)
{
        if (tab[3]!=' ')
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[3]='X';

    tableau(tab);
}}
    if (ligne ==2 && colonne==2)
{
        if (tab[4]!=' ')
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[4]='X';

    tableau(tab);
}}
    if (ligne ==2 && colonne==3)
{
        if (tab[5]!=' ')
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[5]='X';

    tableau(tab);
}}
    if (ligne ==3 && colonne==1)
{
        if (tab[6]!=' ')
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[6]='X';

    tableau(tab);
}}
    if (ligne ==3 && colonne==2)
{
        if (tab[7]!=' ')
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[7]='X';

    tableau(tab);
}}
    if (ligne ==3 && colonne==3)
{
        if (tab[8]!=' ')
        {
            cout<<"\n Case deja prise veuiller ressayer svp \n";
            choix(prenom1,tab);
        }
        else{
    tab[8]='X';

    tableau(tab);
}
}
}

//Création d'une autres procédure qui permet de faire les différents choix possibles du joueur:
void choix2 (    string prenom2, char tab[9])
{
        int ligne,colonne;
        cout<<prenom2<<"\n  c'est a toi de jouer:\n ";
        cout<<"\n entrer numero ligne: ";
        cin>>ligne;
        cout<<"\n entrer numero colonne: ";
        cin>>colonne;
        if (ligne >3 | colonne>3 )
        {
            cout<<"votre ligne ou cologne depasse celle du tableau veuiller ressayer : \n";
            cout<<"\nentrer numero ligne: ";
            cin>>ligne;
            cout<<"\nentrer numero colonne: ";
            cin>>colonne;
        }

    if (ligne ==1 && colonne  ==1 )
{
        if (tab[0]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
           choix2(prenom2,tab);
        }
        else{
        tab[0]='O';
    tableau(tab);
}}
    if (ligne ==1 && colonne==2)
{
        if (tab[1]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[1]='O';
    tableau(tab);
}}

    if (ligne ==1 && colonne==3)
{
        if (tab[2]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[2]='O';
    tableau(tab);
}}

    if (ligne ==2 && colonne==1)
{
        if (tab[3]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[3]='O';
    tableau(tab);
}}

    if (ligne ==2 && colonne==2)
{
        if (tab[4]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
        tab[4]='O';
    tableau(tab);
}}
    if (ligne ==2 && colonne==3)
{
        if (tab[5]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[5]='O';
    tableau(tab);
}}
    if (ligne ==3 && colonne==1)
{
        if (tab[6]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[6]='O';
    tableau(tab);
}}
    if (ligne ==3 && colonne==2)
{
        if (tab[7]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[7]='O';
    tableau(tab);
} }
    if (ligne ==3 && colonne==3)
{
        if (tab[8]!=' ')
        {
            cout<<"\n Case deja prise ressayer svp \n";
                       choix2(prenom2,tab);
        }
        else{
    tab[8]='O';
    tableau(tab);
} }
}

int main()
{
    int i;
    cout<<"========== Jeu du Morpion ==========\n";
    string prenom1,prenom2;
    cout<<"\nEntrer le nom du 1er joueur : ";
    cin>>prenom1;
    cout<<"Entrer le nom du 2eme joueur : ";
    cin>>prenom2;
    char tab[9];
    nbIniatialisation (tab);
    tableau(tab);
    for (i=0;i<10;i++)
    {
        if (tab[0]!=' ' && tab[1]!=' ' && tab[2]!=' ' && tab[3]!=' ' && tab[4]!=' ' && tab[5]!=' ' && tab[6]!=' ' && tab[7]!=' ' && tab[8]!=' ')
        {
            cout<<" \n il y a match nul!! \n";
        exit(0);
        }

        if (tab[0]=='O' && tab[3]=='O' && tab[6]=='O' || tab[1]=='O' && tab[4]=='O' && tab[7]=='O' || tab[2]=='O' && tab[5]=='O' && tab[8]=='O' || tab[0]=='O' && tab[1]=='O' && tab[2]=='O' || tab[3]=='O' && tab[4]=='O' && tab[5]=='O' || tab[6]=='O' && tab[7]=='O' && tab[8]=='O' || tab[0]=='O' && tab[4]=='O' && tab[8]=='O' || tab[2]=='O' && tab[4]=='O' && tab[6]=='O')
        {cout<<prenom2<<" bravo tu as gagner\n";
        exit(0);
        }
        else{
            choix(prenom1,tab);
    }

         if (tab[0]=='X' && tab[3]=='X' && tab[6]=='X' || tab[1]=='X' && tab[4]=='X' && tab[7]=='X' || tab[2]=='X' && tab[5]=='X' && tab[8]=='X' || tab[0]=='X' && tab[1]=='X' && tab[2]=='X' || tab[3]=='X' && tab[4]=='X' && tab[5]=='X' || tab[6]=='X' && tab[7]=='X' && tab[8]=='X' || tab[0]=='X' && tab[4]=='X' && tab[8]=='X' || tab[2]=='X' && tab[4]=='X' && tab[6]=='X')
         {cout<<prenom1<<" bravo tu as gagner\n";
         exit(0);
         }
         else
         {

             if (tab[0]!=' ' && tab[1]!=' ' && tab[2]!=' ' && tab[3]!=' ' && tab[4]!=' ' && tab[5]!=' ' && tab[6]!=' ' && tab[7]!=' ' && tab[8]!=' ')
             {
                 cout<<" \n il y a match nul!! \n";
             exit(0);
             }
        choix2(prenom2,tab);
}
}
}
