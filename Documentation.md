# Matt Mendoza
# Mark Castillo
- C2B

!(Documentation)[[OOP FINALS.md](https://github.com/user-attachments/files/22851309/OOP.FINALS.md)

**Introduction**  
Welcome to the Pet Care Reminder application's design documentation. The purpose of this software is to address the frequent difficulty pet owners encounter when juggling the intricate and variable care routines of their animals. Its primary goal is to act as a dependable, centralized digital assistant that guarantees the timely, consistent, and well-organized completion of all tasks associated with pets. The application greatly lessens the burden of neglected activities by arranging everything from important immunizations and prescriptions to daily walks and feedings. In addition to providing timely reminders, the Pet Care Reminder app keeps an accurate log of health and activity history, increasing accountability for pet care and enhancing the caliber of data available for veterinarian consultations..This system design aims to create an intuitive platform that ultimately contributes to the long-term health and well-being of every pet.

**Purpose**  
The Pet Care Reminder is a comprehensive digital solution designed to simplify pet care management. By providing a centralized platform for scheduling, tracking, and recording all aspects of a pet’s health and well-being, this Java based program aims to empower pet owners, reduce anxiety, and ensure that every beloved animal receives the consistent care it deserves.

**Features**

* **Pet Profiles:** Users can create and manage detailed profiles for each of their pets, including name, species, breed, and date of birth.  
* **Customizable Schedules:** Set up recurring schedules for daily or weekly tasks like feeding, walks, and medication. The user can define the task and the time it needs to be done.  
* **Appointment Setting:** Schedule one-time events like veterinarian visits. Grooming sessions, or training classes with specific dates, times, and locations.  
* **Smart Reminder:** The program will generate timely notifications to remind the user about upcoming scheduled tasks and appointments, so nothing is forgotten.  
* **Task Logging:** Users can mark tasks as “complete.” creating a historical log. This helps track consistency and provides a useful record for vet visits.  
* **Centralized Medical Records:** Keep all of your pet’s important health information in one place, including vaccination history, known allergies, and vet contact details.

**PET CARE REMINDER**

* **Core Entities**

  * **User**  
    * Represents individuals using the application, typically the et owner.  
  * **Pet**  
    * Represents the animal whose care is being tracked  
  * **CareTask**  
    * Represents a specific care activity that needs to be performed for a pet.

* **Scheduling and Reminders**  
  * Schedule   
    * Defines the recurring pattern for a specific CORE TASK associated with a pet.  
  * Appointment  
    * Represents a non-recurring, one-time task or event, such as a vet visit or grooming session.  
  * Reminder  
    * A specific instance of a notification generated from a `Schedule` or `Appointment`.  
* **Tracking History**  
  * TaskLog  
    * Records the completion of a scheduled `CareTask`.  
  * MedicalRecord  
    * Stores important, static health information for a `Pet`.
