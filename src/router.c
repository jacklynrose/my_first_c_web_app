#include <string.h>
#include <fcgi_stdio.h>
#include "router.h"
#include "home_page.h"
#include "jacks_page.h"

void route_path(char *path) {
  if (strcmp(path, "/jack") == 0) {
    printf(jacks_page());
  } else {
    printf(home_page());
  }
}
