#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Sorter.h"

int main(int argc, char** argv){
	
	int sortby;
	
	if(strcmp("-c",argv[1])!=0){
		printf("ERROR: Invalid Value Type\n");
		return 1;
	}
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
	}else if (strcmp("movie_imdb_link",argv[2])==0){
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
	
	int loop=0;
	FILE* file=stdin;
	char line [5000];
	film* array=NULL;
	array=(film*)malloc(sizeof(film)*500);
	while(fgets(line,sizeof(line),file)!=NULL){
		film* x=NULL;
		x=(struct film*)malloc(sizeof(film));	//current film record being made
		loop++;
		if(loop==1){		//skip first line containing categories
				continue;
		}
		
		int assignto=0;	//determines where value will be stored
		char* val=strtok(line,",");

		while (val!=NULL){
			
			printf("current val is %s\n",val);
			
			if(strcmp(val,"")==0){	//empty value
				if(assignto==1){
					x->color="";
				}else if(assignto==2){
					x->director_name="";
				}else if(assignto==3){
					x->num_critic_for_reviews=0;
				}else if(assignto==4){
					x->duration=0;
				}else if(assignto==5){
					x->director_facebook_likes=0;
				}else if(assignto==6){
					x->actor_3_facebook_likes=0;
				}else if(assignto==7){
					x->actor_2_name="";
				}else if(assignto==8){
					x->actor_1_facebook_likes=0;
				}else if(assignto==9){
					x->gross=0;
				}else if(assignto==10){
					x->genres="";
				}else if(assignto==11){
					x->actor_1_name="";
				}else if(assignto==12){
					x->movie_title="";
				}else if(assignto==13){
					x->num_voted_users=0;
				}else if(assignto==14){
					x->cast_total_facebook_likes=0;
				}else if(assignto==15){
					x->actor_3_name="";
				}else if(assignto==16){
					x->facenumber_in_poster=0;
				}else if(assignto==17){
					x->plot_keywords="";
				}else if(assignto==18){
					x->movie_imdb_link="";
				}else if(assignto==19){
					x->num_user_for_reviews=0;
				}else if(assignto==20){
					x->language="";
				}else if(assignto==21){
					x->country="";
				}else if(assignto==22){
					x->content_rating="";
				}else if(assignto==23){
					x->budget=0;
				}else if(assignto==24){
					x->title_year=0;
				}else if(assignto==25){
					x->actor_2_facebook_likes=0;
				}else if(assignto==26){
					x->imdb_score=0;
				}else if(assignto==27){
					x->aspect_ratio=0;
				}else if(assignto==28){
					x->movie_facebook_likes=0;
				}
				val=strtok(NULL,",");	//move on to next token
				continue;		//jump to next token
			}else if((assignto==3)|(assignto==4)|(assignto==5)|(assignto==6)|(assignto==8)|(assignto==9)|(assignto==13)|(assignto==14)|(assignto==16)|(assignto==19)|(assignto==23)|(assignto==24)|(assignto==25)|(assignto==28)){	//convert to int
				int numval=atoi(val);
				if(assignto==3){
					x->num_critic_for_reviews=numval;
				}else if(assignto==4){
					x->duration=numval;
				}else if(assignto==5){
					x->director_facebook_likes=numval;
				}else if(assignto==6){
					x->actor_3_facebook_likes=numval;
				}else if(assignto==8){
					x->actor_1_facebook_likes=numval;
				}else if(assignto==9){
					x->gross=numval;
				}else if(assignto==13){
					x->num_voted_users=numval;
				}else if(assignto==14){	
					x->cast_total_facebook_likes=numval;
				}else if(assignto==16){
					x->facenumber_in_poster=numval;
				}else if(assignto==19){	
					x->num_user_for_reviews=numval;
				}else if(assignto==23){
					x->budget=numval;
				}else if(assignto==24){
					x->title_year=numval;
				}else if(assignto==25){
					x->actor_2_facebook_likes=numval;
				}else{
					x->movie_facebook_likes=numval;
				}	
				val=strtok(NULL,",");	//move on to next token
				continue;	//jump to next token
										
			}else if((assignto==26)|(assignto==27)){		//convert to double
				if(assignto==26){
					x->imdb_score=atof(val);
				}else{
					x->aspect_ratio=atof(val);
				}
				val=strtok(NULL,",");	//move on to next token
				continue;	//jump to next token
			}
			
			if(val[0]=='"'){	//opening quotation, check for closing quote
				while(val[strlen(val)-1]!='"'){	//lacks a closing quote
					strcat(val,strtok(NULL,","));	//concatenates next token to current token
				}
			}
				//enter values if token is a string
				if(assignto==1){
					x->color=val;
				}else if(assignto==2){
					x->director_name=val;
				}else if(assignto==7){
					x->actor_2_name=val;
				}else if(assignto==10){
					x->genres=val;
				}else if(assignto==11){
					x->actor_1_name=val;
				}else if(assignto==12){
					x->movie_title=val;
				}else if(assignto==15){
					x->actor_3_name=val;
				}else if(assignto==17){
					x->plot_keywords=val;
				}else if(assignto==18){
					x->movie_imdb_link=val;
				}else if(assignto==20){
					x->language=val;
				}else if(assignto==21){
					x->country=val;
				}else if(assignto==22){
					x->content_rating=val;
				}	
			
			if(sortby==28){		//x is a complete film to add to the array
				//add x
				assignto=0;
			}
			
			
			val=strtok(NULL,",");	//move on to next token

		
		}
	
	
	}//done reading file
	//insert mergesort here
	//print the sorted stuff
	
	return 0;
}
