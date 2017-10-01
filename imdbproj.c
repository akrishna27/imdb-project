#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct film{
		char* color;				//sortby= 1
		char* director_name;		//2
		int num_critic_for_reviews;	//3
		int duration;				//4
		int director_facebook_likes;//5
		int actor_3_facebook_likes;	//6
		char* actor_2_name;			//7
		int actor_1_facebook_likes;	//8
		int gross;					//9
		char* genres;				//10
		char* actor_1_name;			//11
		char* movie_title;			//12
		int num_voted_users;		//13
		int cast_total_facebook_likes;//14
		char* actor_3_name;			//15
		int facenumber_in_poster;	//16
		char* plot_keywords;		//17
		char* move_imdb_link;		//18
		int num_user_for_reviews;	//19
		char* language;				//20
		char* country;				//21
		char* content_rating;		//22
		int budget;					//23
		int title_year;				//24
		int actor_2_facebook_likes;	//25
		double imdb_score;			//26
		double aspect_ratio;		//27
		int movie_facebook_likes;	//28
}film;


int main(int argc, char** argv){
	
	int sortby; //integer holding value corresponding to what the files will be sorted by
//	char* alpha=(char*)malloc(sizeof(char)*5);
//	char* beta=(char*)malloc(sizeof(char)*5);
//	char* gamma=(char*)malloc(sizeof(char)*5);
	
	printf("the first arg is %s\n",argv[0]);
	printf("the second arg is %s\n", argv[1]);
	printf("the third arg is %s\n", argv[2]);
	
//	scanf("%[^','],%[^','],%[^',']\n",alpha, beta, gamma);
//	printf("the first input is %s\n", alpha);
//	printf("the next input is %s\n", beta);
//	printf("the last input is %s\n", gamma);

	if(strcmp("-c",argv[1])!=0){
		printf("ERROR: Invalid Value Type\n");
		return 1;
	}
	//set string to argv[2] then compare to set sortby var
	sortby=0;
	if(strcmp("color",argv[2])==0){
		sortby=1;
	}else if (strcmp("director_name",argv[2])==0){
		sortby=2;
	}else if (strcmp("num_critic_for_reviews",argv[2])==0){
		sortby=3;
	}else if (strcmp("duration",argv[2])==0){
		sortby=4;
	}else if (strcmp("director_facebook_likes",argv[2])==0){
		sortby=5;
	}else if (strcmp("actor_3_facebook_likes",argv[2])==0){
		sortby=6;
	}else if (strcmp("actor_2_name",argv[2])==0){
		sortby=7;
	}else if (strcmp("actor_1_facebook_likes",argv[2])==0){
		sortby=8;
	}else if (strcmp("gross",argv[2])==0){
		sortby=9;
	}else if (strcmp("genres",argv[2])==0){
		sortby=10;
	}else if (strcmp("actor_1_name",argv[2])==0){
		sortby=11;
	}else if (strcmp("movie_title",argv[2])==0){
		sortby=12;
	}else if (strcmp("num_voted_users",argv[2])==0){
		sortby=13;
	}else if (strcmp("cast_total_facebook_likes",argv[2])==0){
		sortby=14;
	}else if (strcmp("actor_3_name",argv[2])==0){
		sortby=15;
	}else if (strcmp("facenumber_in_poster",argv[2])==0){
		sortby=16;
	}else if (strcmp("plot_keywords",argv[2])==0){
		sortby=17;
	}else if (strcmp("move_imdb_link",argv[2])==0){
		sortby=18;
	}else if (strcmp("num_user_for_reviews",argv[2])==0){
		sortby=19;
	}else if (strcmp("language",argv[2])==0){
		sortby=20;
	}else if (strcmp("country",argv[2])==0){
		sortby=21;
	}else if (strcmp("content_rating",argv[2])==0){
		sortby=22;
	}else if (strcmp("budget",argv[2])==0){
		sortby=23;
	}else if (strcmp("title_year",argv[2])==0){
		sortby=24;
	}else if (strcmp("actor_2_facebook_likes",argv[2])==0){
		sortby=25;
	}else if (strcmp("imdb_score",argv[2])==0){
		sortby=26;
	}else if (strcmp("aspect_ratio",argv[2])==0){
		sortby=27;
	}else if (strcmp("movie_facebook_likes",argv[2])==0){
		sortby=28;
	}
	if(sortby==0){
		printf("ERROR: Invalid Category For Sorting\n");
		return 1;
	}
	//use strtok to read thru the file, checking for leading spaces for removal or opening quotations to signify a title which can contain a comma

	return 0;

}

