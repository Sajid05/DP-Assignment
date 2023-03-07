// Define abstract class for medical tests
class MedicalTest
{
public:
    virtual double get_cost()
    {
        return 0.0;
    }
};

// Concrete class for basic blood test
class BasicBloodTest : public MedicalTest
{
public:
    double get_cost()
    {
        return 50.0;
    }
};

// Concrete class for advanced blood test
class AdvancedBloodTest : public MedicalTest
{
public:
    double get_cost()
    {
        return 100.0;
    }
};

// Concrete class for ECG test
class ECG : public MedicalTest
{
public:
    double get_cost()
    {
        return 200.0;
    }
};
