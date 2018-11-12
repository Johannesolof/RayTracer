#include <iostream>

int main(int, char**) {
    int nx = 200;
    int ny = 100;
    std::cout << "P3\n" << nx << " " << ny << "\n255\n";
    for (int j = ny-1; j >= 0; j--)
    {
        for (int i = 0; i < nx; i++)
        {
            float r = static_cast<float>(i) / static_cast<float>(nx);
            float g = static_cast<float>(j) / static_cast<float>(ny);
            float b = 0.2f;
            int ir =  static_cast<int>(255.99f * r);
            int ig =  static_cast<int>(255.99f * g);
            int ib =  static_cast<int>(255.99f * b);
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
}
