// copyright(c) 2023 Vishal Ahirwar. All Rights reserved.

#include "../header/crow_all.h"

int main() {
  crow::SimpleApp app;

  CROW_ROUTE(app, "/")
  ([]() {
    return "<h1>Simple web server in c++ using crow microframework!</h1>";
  });

  CROW_ROUTE(app, "/about")
  ([]() { return "<h1>About page is in Development</h1>"; });

  CROW_ROUTE(app, "/home")
  ([]() { return "<h1>home page is in Development</h1>"; });
  CROW_ROUTE(app, "/career")
  ([]() { return "<h1 style='color:black;'>career page is in development</h1>"; });
  app.port(18080).run();
}
