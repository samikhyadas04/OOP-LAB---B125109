#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(
        int userRating, int popularity) {
        cout << "Generating recommendation..." << endl;
    }

    virtual ~Recommender() {}
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(
        int userRating, int popularity) override {

        double score =
            0.7 * userRating + 0.3 * popularity;

        cout << "Personalized recommendation score: "
             << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(
        int userRating, int popularity) override {

        double score =
            0.3 * userRating + 0.7 * popularity;

        cout << "Trending recommendation score: "
             << score << endl;
    }
};

int main() {
    PersonalizedRecommender personalized;
    TrendingRecommender trending;

    Recommender* ptr;

    ptr = &personalized;
    ptr->generateRecommendation(80, 60);

    ptr = &trending;
    ptr->generateRecommendation(80, 60);

    return 0;
}