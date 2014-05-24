# My first C web app

This is just me screwing around again, I'm learning more about C at the moment. This project is just using C/FastCGI/Ngnix to serve a hello world website.

## Setup

Make sure you've got `fgci` and `spawn-fcgi` installed, you can do that with `brew install fcgi spawn-fcgi` if you have homebrew installed.

## Running the server

First of all, you need to configure Nginx.

```
server {
  listen       8080;
  server_name  _;
  location / {
    include fastcgi_params;
    root   html;
    index  index.html index.htm;
    fastcgi_pass 127.0.0.1:9000;
  }
}
```

Remember to restart nginx.

Then you can simply run `make run` to compile and run my little web app.

## Use

If you visit [http://localhost:8080/](http://localhost:8080/) you will see a h1 saying "Hello World!", and if you visit [http://localhost:8080/jack](http://localhost:8080/jack) you will see a h1 saying "Welcome Jack!". Not very exciting, but it works, yay!
