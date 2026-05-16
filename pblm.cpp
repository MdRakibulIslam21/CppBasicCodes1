#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Applicant {
    int tokenNumber;
    string visaType;
};

int Maximum_applicants = 25;
int Maximum_total_applicant = 100;

Applicant touristQueue[100];
Applicant medicalQueue[100];
Applicant businessQueue[100];
Applicant governmentQueue[100];

int touristCount = 0, medicalCount = 0, businessCount = 0, governmentCount = 0;
int totalApplicantsToday = 0;
int globalToken = 1;

int counter1_TR = 0, counter1_MED = 0, counter1_BS = 0, counter1_GO = 0;
int counter2_MED = 0, counter2_TR = 0, counter2_BS = 0, counter2_GO = 0;
int counter3_BS = 0, counter3_TR = 0, counter3_MED = 0, counter3_GO = 0;
int counter4_GO = 0, counter4_TR = 0, counter4_MED = 0, counter4_BS = 0;

void resetDay() {
    touristCount = medicalCount = businessCount = governmentCount = 0;
    totalApplicantsToday = 0;
    globalToken = 1;
    counter1_TR = counter1_MED = counter1_BS = counter1_GO = 0;
    counter2_MED = counter2_TR = counter2_BS = counter2_GO = 0;
    counter3_BS = counter3_TR = counter3_MED = counter3_GO = 0;
    counter4_GO = counter4_TR = counter4_MED = counter4_BS = 0;
    cout << "Day reset successfully!" << endl;
}

void tokenEntry(string visaType) {
    if (visaType != "TR" && visaType != "MED" && visaType != "BS" && visaType != "GO") {
        cout << "Invalid visa type entered!" << endl;
        return;
    }

    if (totalApplicantsToday >= Maximum_total_applicant) {
        cout << "Daily total applicant limit reached!" << endl;
        return;
    }

    if (visaType == "TR" && touristCount < Maximum_applicants) {
        touristQueue[touristCount] = {globalToken, "TR"};
        touristCount++;
    }
    else if (visaType == "MED" && medicalCount < Maximum_applicants) {
        medicalQueue[medicalCount] = {globalToken, "MED"};
        medicalCount++;
    }
    else if (visaType == "BS" && businessCount < Maximum_applicants) {
        businessQueue[businessCount] = {globalToken, "BS"};
        businessCount++;
    }
    else if (visaType == "GO" && governmentCount < Maximum_applicants) {
        governmentQueue[governmentCount] = {globalToken, "GO"};
        governmentCount++;
    }
    else {
        cout << "Daily limit reached for visa type: " << visaType << endl;
        return;
    }

    cout << "Your token is: " << visaType << "-" << setw(3) << setfill('0') << globalToken << endl;
    globalToken++;
    totalApplicantsToday++;
}

void serve(Applicant queue[], int &count, int &counterServed) {
    if (count == 0) {
        cout << "No applicants to serve!" << endl;
        return;
    }

    cout << "Please serve token number " << queue[0].visaType << "-"
         << setw(3) << setfill('0') << queue[0].tokenNumber << endl;

    for (int i = 0; i < count - 1; i++) {
        queue[i] = queue[i + 1];
    }

    count--;
    counterServed++;
}

void nextApplicant(int counterNumber) {
    if (counterNumber == 1) {
        if (touristCount > 0) {
            cout << "Counter 1 (Tourist): ";
            serve(touristQueue, touristCount, counter1_TR);
        } else {
            if (businessCount >= medicalCount && businessCount >= governmentCount && businessCount > 0) {
                cout << "Counter 1 (Helping Business): ";
                serve(businessQueue, businessCount, counter1_BS);
            }
            else if (medicalCount >= governmentCount && medicalCount > 0) {
                cout << "Counter 1 (Helping Medical): ";
                serve(medicalQueue, medicalCount, counter1_MED);
            }
            else if (governmentCount > 0) {
                cout << "Counter 1 (Helping Government): ";
                serve(governmentQueue, governmentCount, counter1_GO);
            }
            else {
                cout << "Counter 1 is idle." << endl;
            }
        }
    }
    else if (counterNumber == 2) {
        if (medicalCount > 0) {
            cout << "Counter 2 (Medical): ";
            serve(medicalQueue, medicalCount, counter2_MED);
        } else {
            if (businessCount >= touristCount && businessCount >= governmentCount && businessCount > 0) {
                cout << "Counter 2 (Helping Business): ";
                serve(businessQueue, businessCount, counter2_BS);
            }
            else if (touristCount >= governmentCount && touristCount > 0) {
                cout << "Counter 2 (Helping Tourist): ";
                serve(touristQueue, touristCount, counter2_TR);
            }
            else if (governmentCount > 0) {
                cout << "Counter 2 (Helping Government): ";
                serve(governmentQueue, governmentCount, counter2_GO);
            }
            else {
                cout << "Counter 2 is idle." << endl;
            }
        }
    }
    else if (counterNumber == 3) {
        if (businessCount > 0) {
            cout << "Counter 3 (Business): ";
            serve(businessQueue, businessCount, counter3_BS);
        } else {
            if (touristCount >= medicalCount && touristCount >= governmentCount && touristCount > 0) {
                cout << "Counter 3 (Helping Tourist): ";
                serve(touristQueue, touristCount, counter3_TR);
            }
            else if (medicalCount >= governmentCount && medicalCount > 0) {
                cout << "Counter 3 (Helping Medical): ";
                serve(medicalQueue, medicalCount, counter3_MED);
            }
            else if (governmentCount > 0) {
                cout << "Counter 3 (Helping Government): ";
                serve(governmentQueue, governmentCount, counter3_GO);
            }
            else {
                cout << "Counter 3 is idle." << endl;
            }
        }
    }
    else if (counterNumber == 4) {
        if (governmentCount > 0) {
            cout << "Counter 4 (Government): ";
            serve(governmentQueue, governmentCount, counter4_GO);
        } else {
            if (medicalCount >= touristCount && medicalCount >= businessCount && medicalCount > 0) {
                cout << "Counter 4 (Helping Medical): ";
                serve(medicalQueue, medicalCount, counter4_MED);
            }
            else if (touristCount >= businessCount && touristCount > 0) {
                cout << "Counter 4 (Helping Tourist): ";
                serve(touristQueue, touristCount, counter4_TR);
            }
            else if (businessCount > 0) {
                cout << "Counter 4 (Helping Business): ";
                serve(businessQueue, businessCount, counter4_BS);
            }
            else {
                cout << "Counter 4 is idle." << endl;
            }
        }
    }
    else {
        cout << "Invalid counter number!" << endl;
    }
}

void tokenSummaryReport() {
    cout << "------ Daily Summary Report ------" << endl;

    int total_TR = counter1_TR + counter2_TR + counter3_TR + counter4_TR;
    int total_MED = counter1_MED + counter2_MED + counter3_MED + counter4_MED;
    int total_BS = counter1_BS + counter2_BS + counter3_BS + counter4_BS;
    int total_GO = counter1_GO + counter2_GO + counter3_GO + counter4_GO;

    cout << "Applicants served by Visa Type:" << endl;
    cout << "Tourist (TR): " << total_TR << endl;
    cout << "Medical (MED): " << total_MED << endl;
    cout << "Business (BS): " << total_BS << endl;
    cout << "Government Officials (GO): " << total_GO << endl;

    cout << "\nApplicants served by Counter:" << endl;
    cout << "Counter 1: TR " << counter1_TR << ", MED " << counter1_MED << ", BS " << counter1_BS << ", GO " << counter1_GO << endl;
    cout << "Counter 2: MED " << counter2_MED << ", TR " << counter2_TR << ", BS " << counter2_BS << ", GO " << counter2_GO << endl;
    cout << "Counter 3: BS " << counter3_BS << ", TR " << counter3_TR << ", MED " << counter3_MED << ", GO " << counter3_GO << endl;
    cout << "Counter 4: GO " << counter4_GO << ", TR " << counter4_TR << ", MED " << counter4_MED << ", BS " << counter4_BS << endl;

    cout << "\nIdle Counters:" << endl;
    if (counter1_TR == 0 && counter1_MED == 0 && counter1_BS == 0 && counter1_GO == 0) cout << "Counter 1 was idle." << endl;
    if (counter2_MED == 0 && counter2_TR == 0 && counter2_BS == 0 && counter2_GO == 0) cout << "Counter 2 was idle." << endl;
    if (counter3_BS == 0 && counter3_TR == 0 && counter3_MED == 0 && counter3_GO == 0) cout << "Counter 3 was idle." << endl;
    if (counter4_GO == 0 && counter4_TR == 0 && counter4_MED == 0 && counter4_BS == 0) cout << "Counter 4 was idle." << endl;

    cout << "-----------------------------------" << endl;
}

int main() {
    cout << "Set Maximum Applicants per Visa Type (e.g., 25): ";
    cin >> Maximum_applicants;
    cout << "Set Maximum Total Applicants for the Day (e.g., 100): ";
    cin >> Maximum_total_applicant;

    int choice;
    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Request Token\n";
        cout << "2. Call Next Customer\n";
        cout << "3. Daily Summary Report\n";
        cout << "4. Reset for New Day\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string visa;
            cout << "Enter visa type (TR, MED, BS, GO): ";
            cin >> visa;
            tokenEntry(visa);
        }
        else if (choice == 2) {
            int counter;
            cout << "Enter counter number (1-4): ";
            cin >> counter;
            nextApplicant(counter);
        }
        else if (choice == 3) {
            tokenSummaryReport();
        }
        else if (choice == 4) {
            resetDay();
        }
        else if (choice == 5) {
            cout << "Exiting... Thank you!" << endl;
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
