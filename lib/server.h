#ifndef _WEBSERVER_H_
#define _WEBSERVER_H_

int send_response(int fd, char *header, char *content_type, void *body, int content_length);
void get_d20(int fd);
void resp_404(int fd);
void get_file(int fd, struct cache *cache, char *request_path);
char *find_start_of_body(char *header);
void handle_http_request(int fd, struct cache *cache);

#endif
