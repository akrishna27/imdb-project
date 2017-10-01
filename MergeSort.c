#include <stdio.h>
#include <stdlib.h>
#include "Sorter.h"

film* mergesort(film* array, int size){//pointer to unsorted array, size of array, column to sort by
	if(size == 1){
		return array;
	}
	 int mid = size>>1;//find midpoint
	 //allocate 2 arrays
	 film* arrayA = (film*) malloc(sizeof(film)*mid);
	 film* arrayB = film*) malloc(sizeof(film)*(size-mid));
	 int i=0; int k=0;
	 for(i=0; i<mid; i++){//loop for filling arrayA, mid is size of A
		 arrayA[i].color = strcpy(arrayA[i].color, array[i].color);
		 arrayA[i].director_name = strcpy(arrayA[i].director_name, array[i].director_name);
		 arrayA[i].num_critic_for_reviews = array[i].num_critic_for_reviews;
		 arrayA[i].duration = array[i].duration;
		 arrayA[i].director_facebook_likes = array[i].director_facebook_likes;
		 arrayA[i].actor_3_facebook_likes = array[i].actor_3_facebook_likes;
		 arrayA[i].actor_2_name = strcpy(arrayA[i].actor_2_name, array[i].actor_2_name);
		 arrayA[i].actor_1_facebook_likes = array[i].actor_1_facebook_likes;
		 arrayA[i].gross = array[i].gross;
		 arrayA[i].genres = strcpy(arrayA[i].genres, array[i].genres);
		 arrayA[i].actor_1_name = strcpy(arrayA[i].actor_1_name, array[i].actor_1_name);
		 arrayA[i].movie_title = strcpy(arrayA[i].movie_title, array[i].movie_title);
		 arrayA[i].num_voted_users = array[i].num_voted_users;
		 arrayA[i].cast_total_facebook_likes = array[i].cast_total_facebook_likes;
		 arrayA[i].actor_3_name = strcpy(arrayA[i].actor_3_name, array[i].actor_3_name);
		 arrayA[i].facenumber_in_poster = array[i].facenumber_in_poster;
		 arrayA[i].plot_keywords = strcpy(arrayA[i].plot_keywords, array[i].plot_keywords);
		 arrayA[i].move_imdb_link = strcpy(arrayA[i].move_imdb_link, array[i].move_imdb_link);
		 arrayA[i].num_user_for_reviews = array[i].num_user_for_reviews;
		 arrayA[i].language = strcpy(arrayA[i].language, array[i].language);
		 arrayA[i].country = strcpy(arrayA[i].country, array[i].country);
		 arrayA[i].content_rating = strcpy(arrayA[i].content_rating, array[i].content_rating);
		 arrayA[i].budget = array[i].budget;
		 arrayA[i].title_year = array[i].title_year;
		 arrayA[i].actor_2_facebook_likes = array[i].actor_2_facebook_likes;
		 arrayA[i].imdb_score = array[i].imdb_score;
		 arrayA[i].aspect_ratio = array[i].aspect_ratio;
		 arrayA[i].movie_facebook_likes = array[i].movie_facebook_likes;
	 }
	 for(k=0; i<size; i++){//loop for filling arrayB, final k is size of B
		 arrayB[k].color = strcpy(arrayB[k].color, array[i].color);
		 arrayB[k].director_name = strcpy(arrayB[k].director_name, array[i].director_name);
		 arrayB[k].num_critic_for_reviews = array[i].num_critic_for_reviews;
		 arrayB[k].duration = array[i].duration;
		 arrayB[k].director_facebook_likes = array[i].director_facebook_likes;
		 arrayB[k].actor_3_facebook_likes = array[i].actor_3_facebook_likes;
		 arrayB[k].actor_2_name = strcpy(arrayB[k].actor_2_name, array[i].actor_2_name);//
		 arrayB[k].actor_1_facebook_likes = array[i].actor_1_facebook_likes;
		 arrayB[k].gross = array[i].gross;
		 arrayB[k].genres = strcpy(arrayB[k].genres, array[i].genres);//
		 arrayB[k].actor_1_name = strcpy(arrayB[k].actor_1_name, array[i].actor_1_name);//
		 arrayB[k].movie_title = strcpy(arrayB[k].movie_title, array[i].movie_title);//
		 arrayB[k].num_voted_users = array[i].num_voted_users;
		 arrayB[k].cast_total_facebook_likes = array[i].cast_total_facebook_likes;
		 arrayB[k].actor_3_name = strcpy(arrayB[k].actor_3_name, array[i].actor_3_name);//
		 arrayB[k].facenumber_in_poster = array[i].facenumber_in_poster;
		 arrayB[k].plot_keywords = strcpy(arrayB[k].plot_keywords, array[i].plot_keywords);//
		 arrayB[k].move_imdb_link = strcpy(arrayB[k].move_imdb_link, array[i].move_imdb_link);//
		 arrayB[k].num_user_for_reviews = array[i].num_user_for_reviews;
		 arrayB[k].language = strcpy(arrayB[k].language, array[i].language);//
		 arrayB[k].country = strcpy(arrayB[k].country, array[i].country);//
		 arrayB[k].content_rating = strcpy(arrayB[k].content_rating, array[i].content_rating);//
		 arrayB[k].budget = array[i].budget;
		 arrayB[k].title_year = array[i].title_year;
		 arrayB[k].actor_2_facebook_likes = array[i].actor_2_facebook_likes;
		 arrayB[k].imdb_score = array[i].imdb_score;
		 arrayB[k].aspect_ratio = array[i].aspect_ratio;
		 arrayB[k].movie_facebook_likes = array[i].movie_facebook_likes;
		 
		 k++;
	 }
	 /*
	 arrayA = mergesort(arrayA, mid);
	 arrayB = mergesort(arrayB, k);
	 
	 i=0; int j=0;
	 while(i<mid && j<k){
		 //depending on what column we're sorting by, do things
	 }
	 */
}
