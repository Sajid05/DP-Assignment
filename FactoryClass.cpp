#include <iostream>
#include <string>
#include "DecoratorClass.cpp"

using namespace std;

// Factory class for creating medical tests with additional services
class MedicalTestFactory
{
public:
    MedicalTest *get_test(string test_type, string additional_services)
    {
        if (test_type == "basic blood")
        {
            medical_test = new BasicBloodTest();
        }
        else if (test_type == "advanced blood")
        {
            medical_test = new AdvancedBloodTest();
        }
        else if (test_type == "ECG")
        {
            medical_test = new ECG();
        }

        if (additional_services == "report printing")
        {
            medical_test = new ReportPrinting(medical_test);
        }
        else if (additional_services == "fast results delivery")
        {
            medical_test = new FastResultsDelivery(medical_test);
        }

        return medical_test;
    }

private:
    MedicalTest *medical_test;
};
