#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "utilisateur.h"

int type=1;
int choix[]={0,0};
void
on_next_liste_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ajout_cond_clicked                  (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_bouton_vote_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_bouton_modif_clicked                (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_bouton_supp_clicked                 (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonAjouter_user_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifier_user_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSupprimer_user_clicked        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonValider_user_clicked (GtkWidget *objet_graphique, gpointer user_data)
{	
GtkWidget *nom;
GtkWidget *prenom;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
GtkWidget *cin;
GtkWidget *role;
GtkWidget *numBv;
GtkWidget *vote;
GtkWidget *app;
GtkWidget *profession;

utilisateur u;
char msg[20],texte[20];

//associer les objets avec des variables 

nom= lookup_widget(objet_graphique, "entryNom_user") ;
prenom= lookup_widget(objet_graphique, "entryPrenom_user") ;
jour =lookup_widget(objet_graphique, "spinbuttonJour_user") ;	
mois= lookup_widget(objet_graphique, "spinbuttonMois_user") ;
annee= lookup_widget(objet_graphique, "spinbuttonAnnee_user") ;
cin= lookup_widget(objet_graphique, "entryCin_user") ;
numBv=lookup_widget(objet_graphique, "spinbuttonNumBV_user");
vote=lookup_widget(objet_graphique, "spinbuttonVote_user") ;
role= lookup_widget(objet_graphique, "comboboxRole_user") ;
app =lookup_widget(objet_graphique, "comboboxApp_obs") ;
profession= lookup_widget(objet_graphique, "comboboxProf_obs") ;

// recuperer les valeurs des spin buttons 

u.date.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (jour));
u.date.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (mois));
u.date.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON (annee));

// recuperer les valeurs des combobox 

ajout_user("ajout_user.txt", u);
genre (type , msg);
resultat(choix ,texte);

}


void
on_buttonAjouter_rec_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonModifier_rec_clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSupprimer_rec_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonvalider_rec_clicked           (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_bourtton_ajoutervote__clicked       (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_modifiervoteiheb_clicked     (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_supprimervoteiheb_clicked    (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ok_bureau_de_vote__clicked          (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_button_iheb_annulerajouter_vote_clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonanuller_modifiervoteiheb__clicked
                                        (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_modifier_younes_clicked             (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_ajouter_younes_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_supprimer_younes_clicked            (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonSupprimer_obs_clicked         (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_buttonEnrg_obs_clicked              (GtkButton       *button,
                                        gpointer         user_data)
{

}


void
on_radiobuttonFemme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
	type=2;
}


void
on_checkbuttonTun_user_toggled         (GtkToggleButton *togglebutton,
                                       gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
{choix[0]=1;}

}


void
on_checkbuttonEtranger_user_toggled    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if (gtk_toggle_button_get_active(togglebutton))
{choix[1]=1;}

}


void
on_radiobuttonHomme_user_toggled       (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_RADIO_BUTTON(togglebutton)))
	type=1;
}

