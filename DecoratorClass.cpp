#include <iostream>
#include <string>
#include "MedicalTest.cpp"

using namespace std;

// Decorator class for additional services for medical tests
class AdditionalService : public MedicalTest
{
public:
    AdditionalService(MedicalTest *medical_test)
    {
        this->medical_test = medical_test;
    }

    double get_cost()
    {
        return medical_test->get_cost();
    }

protected:
    MedicalTest *medical_test;
};

// Concrete decorator class for report printing
class ReportPrinting : public AdditionalService
{
public:
    ReportPrinting(MedicalTest *medical_test) : AdditionalService(medical_test) {}

    double get_cost()
    {
        return medical_test->get_cost() + 10.0;
    }
};

// Concrete decorator class for fast results delivery
class FastResultsDelivery : public AdditionalService
{
public:
    FastResultsDelivery(MedicalTest *medical_test) : AdditionalService(medical_test) {}

    double get_cost()
    {
        return medical_test->get_cost() + 15.0;
    }
};
