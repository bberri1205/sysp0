//===========+++INSERT ORDER LEFT=======================//
/*
struct node * insert_order(struct node *head, char * song, char * singer){
  int artcmp= strcmp(head->artist, singer);
  int songcmp= strcmp(head->name,song);

  if(head|| artcmp<0||(artcmp==0&&songcmp<0)){
    return insert_front(head,song,singer);
  }

  struct node* temp= head; 
  while(head->next){//while it still has a next node
    struct node* tmpNext=head->next;
    int acmp= strcmp(singer,tmpNext->artist);
    int scmp= strcmp(song, tmpNext->name);

    if(acmp<0||(acmp==0&& scmp<0)){
      //if it's a negative cmp num or the comparison to the next one is 0 for artist and
      //the name is negative then add at the next slot.
      head->next= insert_front(head->next,song,singer);
      return temp;
    }
    head= head->next;  
  }
  struct node * addToEnd= (struct node*)malloc(sizeof(struct node));
  head->next=addToEnd;
  strcpy(addToEnd->name,song);
  strcpy(addToEnd->artist,singer);
  return temp;
}
*/      
  /*char * start_char;
  strncpy(start_char,singer,1);
  struct node new;
  new.name = song;
  new.artist = singer;
  new.next = 0;
  struct node * tmp = table;
  }*/

//=========================Extra Code???========================//


/*
struct node * insert_order(char * song, char * singer){
  char * start_char;
  strncpy(start_char,singer,1);
  struct node new;
  new.name = song;
  new.artist = singer;
  new.next = 0;
  struct node * tmp = table;
  }
*/

/*
struct node * find_song(char * title, char * artist){
  char * start_char;
  strncpy(start_char,artist,1);
  //struct node* tmp = table;
  while(table){
    while(!(strcmp(tmp,start_char))){
      
      if(!(strcmp(tmp->name, title))){
	return tmp;
      }
      else
	tmp = tmp->next;
    }
    tmp++;
  }
  
  return 0;

struct node * find_first_artist_song(char * singer){

  char * start_char;
  strncpy(start_char,singer,1);
  struct node tmp[26] = table;
  while(tmp){
    while(!(strcmp(tmp,start_char))){
      
      if(!(strcmp(tmp->artist, singer))){
	return tmp;
      }
      else
	tmp = tmp->next;
    }
    tmp++;
  }
  
  return 0;
  
}

struct node * remove_node(char * song,char * singer){
 
  char * start_char;
  strncpy(start_char,singer,1);
  struct node * tmp = table;
  struct node * prev = table;
  while(tmp){
    while(!(strcmp(tmp,start_char))){
      
      if(!(strcmp(tmp->name, title))){
	prev->next = tmp->next;
	return tmp;
      }
      else{
	prev = tmp;
	tmp = tmp->next;
      }
    }
    prev = tmp;
    tmp++;
  }
  
  return 0;
  
}

struct node * free_list(struct node * lp){
  while(lp){
    struct node * next = lp-> next;
    free(lp);
    lp = next;
  }
  return lp;
}

struct node * find_rand(struct node* n){
  if(!n){
    return NULL;
  }
  if(!n->next){
    return n;
  }
  
}
*/
