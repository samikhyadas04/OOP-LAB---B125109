#include <iostream>
using namespace std;

class Compressor {
public:
    virtual void compress(double fileSize) {
        cout << "Compressing file..." << endl;
    }
};

class TextCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.40;

        cout << "Original text file size: "
             << fileSize << " MB" << endl;
        cout << "Compressed text file size: "
             << compressedSize << " MB" << endl;
    }
};

class ImageCompressor : public Compressor {
public:
    void compress(double fileSize) override {
        double compressedSize = fileSize * 0.70;

        cout << "Original image file size: "
             << fileSize << " MB" << endl;
        cout << "Compressed image file size: "
             << compressedSize << " MB" << endl;
    }
};

int main() {
    TextCompressor text;
    ImageCompressor image;

    text.compress(100);
    image.compress(100);

    return 0;
}