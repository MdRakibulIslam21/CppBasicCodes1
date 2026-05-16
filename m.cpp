int main() {
    // Sample issuing
    issueToken("TR");
    issueToken("MED");
    issueToken("BS");
    issueToken("GO");
    issueToken("BS");
    issueToken("TR");

    // Sample calling
    callNextCustomer(0);
    callNextCustomer(1);
    callNextCustomer(2);
    callNextCustomer(3);

    callNextCustomer(0);
    callNextCustomer(1);
    callNextCustomer(2);
    callNextCustomer(3);

    // Print report
    summaryReport();

    return 0;
}
