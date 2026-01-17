#include "httplib.h"
using namespace std;
using namespace httplib;

int main(){
    Server svr;
    svr.Get("/", [](const Request& req, Response& res){
        res.set_content("Hello World!", "text/plain");
    });
    auto ret = svr.set_mount_point("/", "./public");
    svr.listen("localhost", 8080);
    return 0;
}