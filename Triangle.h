#pragma once
namespace shapes {
    class Triangle {
    private:
        double base;
        double height;

    public:
        Triangle();
        Triangle(double b, double h);
        ~Triangle();

        double getBase() const;
        double getHeight() const;
    };
}
