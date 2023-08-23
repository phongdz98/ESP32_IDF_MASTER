set(app_src main.c rgb_led.c wifi_app.c http_server.c dht11.c)
set(pri_req)
set(embed_file webpage/app.css webpage/app.js webpage/index.html webpage/favicon.ico webpage/jquery-3.3.1.min.js)
idf_component_register(SRCS ${app_src}
                        INCLUDE_DIRS "."
                        REQUIRES ${pri_req}
                        EMBED_FILES ${embed_file})