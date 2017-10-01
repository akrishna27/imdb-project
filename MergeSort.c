#include <stdio.h>
#include <stdlib.h>
#include "Sorter.h"

film* mergesort(film* array, int size, int col){//pointer to unsorted array, size of array, column to sort by
	if(size == 1){
		return array;
	}
	 int mid = size>>1;//find midpoint
	 //allocate 2 arrays
	 film* arrayA = (film*) malloc(sizeof(film)*mid);
	 film* arrayB = film*) malloc(sizeof(film)*(size-mid));
	 
	 int i=0; int k=0;
	 
	 for(i=0; i<mid; i++){//loop for filling arrayA, mid is size of A
		 arrayA[i] = filmcpy(array[i], arrayA[i]);
	 }
	 for(k=0; i<size; i++){//loop for filling arrayB, final k is size of B
		 
		 arrayB[k] = filmcpy(array[i], arrayB[k]);
		 
		 k++;
	 }
	 
	 arrayA = mergesort(arrayA, mid, col);
	 arrayB = mergesort(arrayB, k, col);
	 
	 i=0; int j=0; int a=0;
	 while(i<mid && j<k){
		 //depending on what column we're sorting by, do things
		 if(col == 1 || col == 2 || col == 7 || col == 10 || col == 11 || col == 12 || col == 15 || col == 17 || col == 20 || col == 21 || col == 22){
			 //sort by string, first being NULL
			 switch(col){
				 case(1):{
					 if(strcmp(arrayA[i].color, arrayB[j].color) > 0){//arrayA's val is greater
						 array[a] = filmcpy(arrayB[j],array[a]);
						 j++;
						 break;
					 }else{//arrayA's val is less or equal
						 array[a] = filmcpy(arrayA[i],array[a]);
						 i++;
						 break;
					 }
				 }//end of case1
				 case(2):{
					 
				 }
			 }
		 }else{
			 //sort numerically
		 }
		 a++;
	 }//end of while loop
	 
}

film* filmcpy(film* filmA, film* filmB){//copy film A to film B
	filmB.color = strcpy(filmB.color, filmA.color);
	 filmB.director_name = strcpy(filmB.director_name, filmA.director_name);
	 filmB.num_critic_for_reviews = filmA.num_critic_for_reviews;
	 filmB.duration = filmA.duration;
	 filmB.director_facebook_likes = filmA.director_facebook_likes;
	 filmB.actor_3_facebook_likes = filmA.actor_3_facebook_likes;
	 filmB.actor_2_name = strcpy(filmB.actor_2_name, filmA.actor_2_name);
	 filmB.actor_1_facebook_likes = filmA.actor_1_facebook_likes;
	 filmB.gross = filmA.gross;
	 filmB.genres = strcpy(filmB.genres, filmA.genres);
	 filmB.actor_1_name = strcpy(filmB.actor_1_name, filmA.actor_1_name);
	 filmB.movie_title = strcpy(filmB.movie_title, filmA.movie_title);
	 filmB.num_voted_users = filmA.num_voted_users;
	 filmB.cast_total_facebook_likes = filmA.cast_total_facebook_likes;
	 filmB.actor_3_name = strcpy(filmB.actor_3_name, filmA.actor_3_name);
	 filmB.facenumber_in_poster = filmA.facenumber_in_poster;
	 filmB.plot_keywords = strcpy(filmB.plot_keywords, filmA.plot_keywords);
	 filmB.move_imdb_link = strcpy(filmB.move_imdb_link, filmA.move_imdb_link);
	 filmB.num_user_for_reviews = filmA.num_user_for_reviews;
	 filmB.language = strcpy(filmB.language, filmA.language);
	 filmB.country = strcpy(filmB.country, filmA.country);
	 filmB.content_rating = strcpy(filmB.content_rating, filmA.content_rating);
	 filmB.budget = filmA.budget;
	 filmB.title_year = filmA.title_year;
	 filmB.actor_2_facebook_likes = filmA.actor_2_facebook_likes;
	 filmB.imdb_score = filmA.imdb_score;
	 filmB.aspect_ratio = filmA.aspect_ratio;
	 filmB.movie_facebook_likes = filmA.movie_facebook_likes;
	 
	 return filmB;
}
