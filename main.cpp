#include <iostream>
#include <string>
#include "FactoryClass.cpp"

using namespace std;

// Example usage of the program
int main()
{
    MedicalTestFactory factory;

    MedicalTest *basic_blood_test = factory.get_test("basic blood", "");
    cout << "Basic blood test cost: $" << basic_blood_test->get_cost() << endl;

    MedicalTest *advanced_blood_test_with_report = factory.get_test("advanced blood", "report printing");
    cout << "Advanced blood test with report printing cost: $" << advanced_blood_test_with_report->get_cost() << endl;

    MedicalTest *ecg_with_fast_results_delivery = factory.get_test("ECG", "fast results delivery");
    cout << "ECG with fast results delivery cost: $" << ecg_with_fast_results_delivery->get_cost() << endl;

    return 0;
}
