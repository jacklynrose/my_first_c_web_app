#include <stdlib.h>
#include "fcgi_config.h"
#include <fcgi_stdio.h>
#include "router.h"

int main(int argc, char* argv[])
{
  while(FCGI_Accept() >= 0) {
    printf( "Content-Type: text/html\n\n" );
    route_path(getenv("REQUEST_URI"));
  }
  return 0;
}
