#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**************************************************************************/

// Define a structure to hold the diagnostic test results
struct HardwareTestResult {
    int cpu_status;
    int memory_status;
    int disk_status;
};

// Function to run hardware diagnostic test and return the results
struct HardwareTestResult run_hardware_test() {
    struct HardwareTestResult result;

    // Code to run diagnostic test for CPU, memory, and disk
    // Assume status is 0 if there is no issue, and 1 if there is an issue
    result.cpu_status = 0;
    result.memory_status = 1;
    result.disk_status = 0;

    return result;
}


void check_hardware_issues() { // code to run a hardware diagnostic test
     struct HardwareTestResult test_result = run_hardware_test();

    // Check for issues and print the corresponding message
    if (test_result.cpu_status == 1) {
        printf("CPU issue detected.\n\n");
    }
    if (test_result.memory_status == 1) {
        printf("Memory issue detected.\n\n");
    }
    if (test_result.disk_status == 1) {
        printf("Disk issue detected.\n\n");
    }

    // If no issues found, print success message
    if (test_result.cpu_status == 0 && test_result.memory_status == 0 && test_result.disk_status == 0) {
        printf("Hardware diagnostic test passed.\n\n");
    }



}

/*******************************************************************************/

// Define a structure to hold the software scan results
struct SoftwareScanResult {
    int virus_detected;
    int malware_detected;
    int system_file_corrupted;
};

// Function to scan for software issues and return the results
struct SoftwareScanResult scan_for_software_issues() {
    struct SoftwareScanResult result;

    // Code to scan for viruses, malware, and corrupted system files
    // Assume detection is 0 if there is no issue, and 1 if there is an issue
    result.virus_detected = 1;
    result.malware_detected = 0;
    result.system_file_corrupted = 0;

    return result;
}

void check_software_issues()     // code to scan for software-related problems
{
    struct SoftwareScanResult scan_result = scan_for_software_issues();

    // Check for issues and print the corresponding message
    if (scan_result.virus_detected == 1) {
        printf("Virus detected.\n\n");
    }
    if (scan_result.malware_detected == 1) {
        printf("Malware detected.\n\n");
    }
    if (scan_result.system_file_corrupted == 1) {
        printf("System file corrupted.\n\n");
    }

    // If no issues found, print success message
    if (scan_result.virus_detected == 0 && scan_result.malware_detected == 0 && scan_result.system_file_corrupted == 0) {
        printf("Software scan passed.\n\n");
    }
}

/*******************************************************************************************/

// Define a structure to hold the repair instructions
struct HardwareRepairInstructions {
    char *fix_instructions;
    char *schedule_repair_instructions;
};

// Function to provide repair instructions based on the hardware issue
struct HardwareRepairInstructions get_hardware_repair_instructions(int cpu_issue, int memory_issue, int disk_issue) {
    struct HardwareRepairInstructions instructions;

    if (cpu_issue == 1) {
        instructions.fix_instructions = "Try reseating the CPU and ensure it is properly cooled. If the issue persists, contact technical support.";
    } else if (memory_issue == 1) {
        instructions.fix_instructions = "Try reseating the memory modules and testing one module at a time. If the issue persists, consider replacing the memory or contact technical support.";
    } else if (disk_issue == 1) {
        instructions.fix_instructions = "Run disk diagnostics and repair tools to attempt to fix the issue. If the issue persists, consider replacing the disk or contact technical support.";
    } else {
        instructions.fix_instructions = "No hardware issue detected.";
    }

    instructions.schedule_repair_instructions = "If you are unable to fix the issue using the instructions provided, contact technical support to schedule a repair service.";

    return instructions;
}


void repair_hardware_issues()     // code to provide instructions on how to fix hardware issues or schedule a repair service
{
    // Assume hardware issues are detected in the diagnostic test
    int cpu_issue = 1;
    int memory_issue = 1;
    int disk_issue = 0;

    struct HardwareRepairInstructions repair_instructions = get_hardware_repair_instructions(cpu_issue, memory_issue, disk_issue);

    // Print the fix instructions and schedule repair instructions
    printf("Fix instructions: %s\n\n", repair_instructions.fix_instructions);
    printf("Schedule repair instructions: %s\n\n", repair_instructions.schedule_repair_instructions);

}

/******************************************************************************************************/


// Define a structure to hold the repair instructions
struct SoftwareRepairInstructions {
    char *virus_removal_instructions;
    char *malware_removal_instructions;
    char *system_file_repair_instructions;
};

// Function to provide repair instructions based on the software issue
struct SoftwareRepairInstructions get_software_repair_instructions(int virus_detected, int malware_detected, int system_file_corrupted) {
    struct SoftwareRepairInstructions instructions;

    if (virus_detected == 1) {
        instructions.virus_removal_instructions = "Use a trusted antivirus software to scan and remove the virus.";
    } else {
        instructions.virus_removal_instructions = "";
    }

    if (malware_detected == 1) {
        instructions.malware_removal_instructions = "Use a trusted anti-malware software to scan and remove the malware.";
    } else {
        instructions.malware_removal_instructions = "";
    }

    if (system_file_corrupted == 1) {
        instructions.system_file_repair_instructions = "Use the Windows System File Checker tool to scan and repair corrupted system files.";
    } else {
        instructions.system_file_repair_instructions = "";
    }

    return instructions;
}


void repair_software_issues()    // code to provide instructions on how to fix software issues or offer a software repair service
{
    // Assume software issues are detected in the scan
    int virus_detected = 1;
    int malware_detected = 0;
    int system_file_corrupted = 1;

    struct SoftwareRepairInstructions repair_instructions = get_software_repair_instructions(virus_detected, malware_detected, system_file_corrupted);

    // Print the repair instructions
    printf("Repair instructions:\n\n");
    printf("%s\n\n", repair_instructions.virus_removal_instructions);
    printf("%s\n\n", repair_instructions.malware_removal_instructions);
    printf("%s\n\n", repair_instructions.system_file_repair_instructions);
}

/*********************************************************************************************************/

// Define a structure to hold the upgrade instructions
struct HardwareUpgradeInstructions {
    char *cpu_upgrade_instructions;
    char *memory_upgrade_instructions;
    char *disk_upgrade_instructions;
};

// Function to provide upgrade instructions based on the hardware specifications
struct HardwareUpgradeInstructions get_hardware_upgrade_instructions(int cpu_speed, int memory_size, int disk_size) {
    struct HardwareUpgradeInstructions instructions;

    if (cpu_speed < 3.0) {
        instructions.cpu_upgrade_instructions = "Upgrade to a faster CPU with a clock speed of at least 3.0 GHz.";
    } else {
        instructions.cpu_upgrade_instructions = "";
    }

    if (memory_size < 8) {
        instructions.memory_upgrade_instructions = "Upgrade to at least 8 GB of memory.";
    } else {
        instructions.memory_upgrade_instructions = "";
    }

    if (disk_size < 500) {
        instructions.disk_upgrade_instructions = "Upgrade to at least a 500 GB hard drive or consider switching to an SSD.";
    } else {
        instructions.disk_upgrade_instructions = "";
    }

    return instructions;
}


void upgrade_hardware()    // code to display a list of compatible hardware upgrades and provide installation instructions or schedule an upgrade service
{
     // Assume the current hardware specifications are below the recommended requirements
    int cpu_speed = 2.4;
    int memory_size = 4;
    int disk_size = 320;

    struct HardwareUpgradeInstructions upgrade_instructions = get_hardware_upgrade_instructions(cpu_speed, memory_size, disk_size);

    // Print the upgrade instructions
    printf("Upgrade instructions:\n\n");
    printf("%s\n\n", upgrade_instructions.cpu_upgrade_instructions);
    printf("%s\n\n", upgrade_instructions.memory_upgrade_instructions);
    printf("%s\n\n", upgrade_instructions.disk_upgrade_instructions);

}

/*****************************************************************************************************************/

// Define a structure to hold the upgrade instructions
struct SoftwareUpgradeInstructions {
    char *operating_system_upgrade_instructions;
    char *application_upgrade_instructions;
    char *driver_upgrade_instructions;
};

// Function to provide upgrade instructions based on the software versions
struct SoftwareUpgradeInstructions get_software_upgrade_instructions(char *os_version, char *app_version, char *driver_version) {
    struct SoftwareUpgradeInstructions instructions;

    if (os_version != "Windows 10") {
        instructions.operating_system_upgrade_instructions = "Upgrade to Windows 10 or a newer version of the operating system.";
    } else {
        instructions.operating_system_upgrade_instructions = "";
    }

    if (app_version != "Latest version") {
        instructions.application_upgrade_instructions = "Upgrade to the latest version of the application.";
    } else {
        instructions.application_upgrade_instructions = "";
    }

    if (driver_version != "Latest version") {
        instructions.driver_upgrade_instructions = "Upgrade to the latest version of the driver.";
    } else {
        instructions.driver_upgrade_instructions = "";
    }

    return instructions;
}


void upgrade_software()    // code to display a list of compatible software upgrades and provide installation instructions or perform a software upgrade service
{
       // Assume the current software versions are not up-to-date
    char *os_version = "Windows 8.1";
    char *app_version = "Version 3.0";
    char *driver_version = "Version 2.0";

    struct SoftwareUpgradeInstructions upgrade_instructions = get_software_upgrade_instructions(os_version, app_version, driver_version);

    // Print the upgrade instructions
    printf("Upgrade instructions:\n\n");
    printf("%s\n\n", upgrade_instructions.operating_system_upgrade_instructions);
    printf("%s\n\n", upgrade_instructions.application_upgrade_instructions);
    printf("%s\n\n", upgrade_instructions.driver_upgrade_instructions);
}


/******************************************************************************************************************************/


struct User {
    char username[20];
    char password[20];
};

struct User users[10] = {
    {"admin", "admin"},
    {"user1", "password1"},
    {"user2", "password2"},
    {"user3", "password3"},
    {"user4", "password4"},
    {"user5", "password5"},
    {"user6", "password6"},
    {"user7", "password7"},
    {"user8", "password8"},
    {"user9", "password9"}
};


int login() {
    char username[20], password[20];
    int i, found = 0;

    printf("Enter username: ");
    scanf("%s", username);

    printf("Enter password: ");
    scanf("%s", password);

    for (i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0 && strcmp(users[i].password, password) == 0) {
            printf("\nLogin successful!\n\n");
            return found = 1;
        }
    }

    if (!found)
        {
            printf("Invalid username or password. Please try again.\n");
            return found =0;
    }
}

void forgot_password() {
    char username[20];
    int i, found = 0;

    printf("Enter username: ");
    scanf("%s", username);

    for (i = 0; i < 10; i++) {
        if (strcmp(users[i].username, username) == 0) {
            printf("Your password is: %s\n", users[i].password);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Invalid username. Please try again.\n");
    }
}



int main()
{
    int option, choice , status ;

    do {
        printf("\n");
        printf("1. Login\n");
        printf("2. Forgot password\n");
        printf("3. Exit\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {


            case 3:
                printf("Exiting...\n");
                break;

            case 2:
                forgot_password();
                break;

            case 1:
                {



                status = login();

                if (status==1){




                do{
                        printf("Laptop Repair System\n\n");
                        printf("1. Check for hardware issues\n");
                        printf("2. Check for software issues\n");
                        printf("3. Repair hardware issues\n");
                        printf("4. Repair software issues\n");
                        printf("5. Upgrade hardware\n");
                        printf("6. Upgrade software\n");
                        printf("7. Exit\n");
                        printf("\nEnter option: ");
                        scanf("%d", &option);

                        switch(option)
                        {

                            case 1:
                                check_hardware_issues();
                                break;
                            case 2:
                                check_software_issues();
                                break;
                            case 3:
                                repair_hardware_issues();
                                break;
                            case 4:
                                repair_software_issues();
                                break;
                            case 5:
                                upgrade_hardware();
                                break;
                            case 6:
                                upgrade_software();
                                break;
                            case 7:
                                printf("Exiting laptop repair system.\n");
                                break;
                            default:
                                printf("Invalid option. Please enter a valid option.\n");
                                printf("\n");
                                break;
                        }
                }
                                while (option!=7);
                }
                break;
                }

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

    }

    while (choice != 3);

    printf("closed");





    return 0;
}
