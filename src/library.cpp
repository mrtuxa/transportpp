#include "library.h"
#include <iostream>
#include <curl/curl.h>

#include "include/http.h"

size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

std::string HttpClient::get(const std::string &url)  {
    CURL* curl;
    CURLcode res;
    std::string result;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);

        res = curl_easy_perform(curl);

        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            std::cerr << "Error performing HTTP request: " << curl_easy_strerror(res) << std::endl;
        }
    }

    return result;
}


std::string Transport::GetData(const std::string &url) {
    std::string response = HttpClient::get(url);

    return response;
}
